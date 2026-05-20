# Pokémon: [Game Title TBD] — Game Design Document

**Status:** Active development | **Branch:** `overlord/custom-maps` | **Engine:** pokeemerald-expansion

---

## Overview

A custom Pokémon game built on **Kanto** (Khanto variant) using the pokeemerald-expansion engine. Custom maps, characters, and story.

---

## Map Progress

| Map | Layout | Events | Scripts | Wild Encounters | Notes |
|-----|--------|--------|---------|-----------------|-------|
| Pallet Town | ✅ Done | ❌ Empty | ❌ Empty | — | Starter town, connects to Route 1 |
| Route 1 | 🔧 WIP | ❌ | ❌ | ❌ | First route, connects Pallet → Viridian |
| Viridian City | ❌ | ❌ | ❌ | ❌ | |
| Viridian Forest | ❌ | ❌ | ❌ | ❌ | |

---

## Pallet Town — Planned Content

### NPCs
- [ ] **Professor Oak** — At his lab, gives starter
- [ ] **Rival** — Meet outside lab, rival encounter
- [ ] **Mom** — In player's house, heal
- [ ] **Old Man** — Near sign, tutorial tip
- [ ] **Girl** — Near flower patch

### Warps
- [ ] Player's House → Door (entrance)
- [ ] Player's House → Door (exit to town)
- [ ] Rival's House → Door
- [ ] Prof. Oak's Lab → Door
- [ ] Prof. Oak's Lab → Door (exit)

### Signs
- [ ] Town sign: "Pallet Town, A place of new beginnings"
- [ ] Lab sign

### Items
- [ ] Potion (hidden, near lab)
- [ ] Pokéball (in lab sequence)

### Custom Features
- [ ] Starter selection sequence (scripted)

---

## Route 1 — Planned Content

### NPCs
- [ ] **Youngster** — battle tutorial
- [ ] **Bug Catcher** — first wild battle
- [ ] **Rival** — post-battle encounter
- [ ] **Aide** — introduces catching

### Wild Encounters
- Pidgey (common), Rattata (common), Sentret (uncommon)

### Items
- Potion ×2, Pokéball, Antidote

### Signs
- Route 1 signpost

---

## Design Rules

### Tilesets
- ❌ **No FRLG tiles.** Emerald tiles or custom tiles only.
- Currently using Khanto variants (PalletTown_Khanto, Route1_Khanto)

### Music
- See `data/maps/[MAP]/header.inc` — music is set in the map header

### Naming Conventions
- Map IDs: `MAP_[TOWN]_KHANTO` or `MAP_[ROUTE]_KHANTO`
- Layout IDs: `LAYOUT_[TOWN]_KHANTO`
- Script labels: `[MapName]_Script_[Description]`
- Movement labels: `[MapName]_Movement_[Description]`

### Scripting
- `.pory` files (Poryscript) for new scripts
- Compile `.pory` → `.inc` via Makefile (auto-detected)
- Use `raw` directive only when Poryscript syntax doesn't support the command

---

## Custom Mechanics & Features

*(To be documented as they're decided)*

- [ ] Starter choice
- [ ] Rival encounters
- [ ] Custom trainers
- [ ] Any expansion features we want to use/disable

---

## Asset Inventory

| Asset | Status | Notes |
|-------|--------|-------|
| Brendan OW sprites | ✅ Imported | Ash variant (walking, running, bike, fishing) |
| Brendan battle sprites | ✅ Imported | Front, back, palettes |
| Pallet Town layout | ✅ Committed | Custom tiles |
| Route 1 layout | 🔧 WIP | |
| Poryscript | ✅ Installed | v3.6.0 at `tools/poryscript/` |

---

## Tools & Workflow

- **Map Editor:** Porymap
- **Script Editor:** VS Code + Poryscript extension (recommended)
- **Script Language:** Poryscript → compiles to `.inc`
- **Version Control:** Git → push to `deonvdberg1/pokeemerald-expansion` (`backup` remote)

### Building the ROM
```bash
make -j$(sysctl -n hw.ncpu)
```

### Adding a new map
1. Create map layout in Porymap (layout + border)
2. Create `data/maps/[MapName]/map.json` via Porymap
3. Place events (NPCs, warps, signs) in Porymap
4. Write `scripts.pory` for map logic
5. Commit and push to `overlord/custom-maps`
