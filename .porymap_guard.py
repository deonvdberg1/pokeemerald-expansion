#!/usr/bin/env python3
"""
Porymap Safety Guard — pre-flight check before any map-affecting operation.

Run BEFORE any action that could modify maps, layouts, tilesets, or git state.

Checks:
  - Uncommitted changes in Porymap-sensitive paths
  - Staged changes in Porymap-sensitive paths
  - Whether a git revert/reset/checkout will destroy working tree data

Usage:
  python3 .porymap_guard.py [--explain]
  
  --explain: Instead of checking, explain what files are Porymap-sensitive

Exit codes:
  0 — Safe to proceed (no uncommitted Porymap data at risk)
  1 — WARNING: Uncommitted Porymap data will be affected
"""

import os
import subprocess
import sys

# Paths that Porymap reads/writes — NEVER touch without warning
PORYMAP_PATHS = [
    "data/layouts/",          # map.bin, border.bin — tile data
    "data/maps/*/map.json",   # map headers (events, warps, objects)
    "data/tilesets/",         # palettes, tiles, metatiles
]

def get_git_diff(path_pattern):
    """Get uncommitted changes matching a pattern."""
    try:
        # Tracked files with uncommitted changes
        result = subprocess.run(
            ["git", "diff", "--name-only", "HEAD", "--", path_pattern],
            capture_output=True, text=True, cwd=REPO_DIR
        )
        changed = [f for f in result.stdout.strip().split("\n") if f]
        
        # Staged changes
        result_staged = subprocess.run(
            ["git", "diff", "--cached", "--name-only", "--", path_pattern],
            capture_output=True, text=True, cwd=REPO_DIR
        )
        staged = [f for f in result_staged.stdout.strip().split("\n") if f]
        
        # Untracked files
        result_untracked = subprocess.run(
            ["git", "ls-files", "--others", "--exclude-standard", "--", path_pattern],
            capture_output=True, text=True, cwd=REPO_DIR
        )
        untracked = [f for f in result_untracked.stdout.strip().split("\n") if f]
        
        return changed, staged, untracked
    except Exception as e:
        return [f"[error: {e}]"], [], []

def check_porymap_work():
    """Check for uncommitted Porymap work that could be lost."""
    all_risky = []
    
    for pattern in PORYMAP_PATHS:
        changed, staged, untracked = get_git_diff(pattern)
        for f in changed:
            all_risky.append(("MODIFIED", f))
        for f in staged:
            all_risky.append(("STAGED", f))
        for f in untracked:
            all_risky.append(("UNTRACKED", f))
    
    return all_risky

REPO_DIR = os.path.dirname(os.path.abspath(__file__)) or "."

def explain():
    print("=" * 70)
    print("  PORYMAP-SENSITIVE FILES")
    print("=" * 70)
    print("""
  These files contain your Porymap work. I must NEVER modify,
  revert, or delete them without your explicit permission:

  PATH                           WHY IT'S IMPORTANT
  ─────────────────────────────────────────────────────────────
  data/layouts/*/map.bin         Tile-by-tile map layout (YOUR DESIGN)
  data/layouts/*/border.bin      Border tiles around the map
  data/layouts/layouts.json      Tileset assignments, dimensions
  data/maps/*/map.json           Warps, events, objects, scripts
  data/tilesets/**/*.pal         Palette colors (YOUR CUSTOM COLORS)
  data/tilesets/**/tiles.png     Tile graphics (YOUR CUSTOM TILES)
  data/tilesets/**/metatiles.bin Metatile definitions

  ACTIONS THAT CAN DESTROY PORYMAP WORK:
  ─────────────────────────────────────────────────────────────
  git checkout HEAD -- <file>    Reverts your uncommitted changes
  git reset --hard <ref>         Destroys ALL uncommitted changes
  git stash                      Stashes changes (can lose them)
  Directly editing layouts.json  Changes tilesets/dimensions
  Running scripts that batch-    Could overwrite your map data
    edit maps/layouts
    """)
    return 0

def main():
    if "--explain" in sys.argv:
        return explain()
    
    risky = check_porymap_work()
    
    if not risky:
        print("✓ No uncommitted Porymap work detected — safe to proceed.")
        return 0
    
    print("")
    print("╔" + "═" * 68 + "╗")
    print("║  WARNING: UNCOMMITTED PORYMAP WORK DETECTED!        ║")
    print("╚" + "═" * 68 + "╝")
    print("")
    print(f"  {len(risky)} file(s) with uncommitted changes that could be lost:")
    print("")
    
    # Group by status
    for status in ["MODIFIED", "STAGED", "UNTRACKED"]:
        items = [f for s, f in risky if s == status]
        if items:
            print(f"  [{status}]")
            for f in sorted(items):
                print(f"           {f}")
        print("")
    
    print("  ────────────────────────────────────────────────────────────")
    print("  These files contain your Porymap design work.")
    print("  Any git operation (checkout, reset, stash, clean)")
    print("  or direct edit could DESTROY them permanently.")
    print("")
    print("  ▶ Type /confirm to proceed anyway")
    print("  ▶ Type /cancel to abort")
    print("")
    print("  (run with --explain for more detail)")
    
    return 1

if __name__ == "__main__":
    sys.exit(main())
