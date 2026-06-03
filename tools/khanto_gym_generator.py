#!/usr/bin/env python3
"""
Khanto Gym Generator — Zero-effort gym creation for FIRERED builds.
One command generates everything: tileset, layout, C source entries.

Usage:  python3 tools/khanto_gym_generator.py <gym_key>
Example: python3 tools/khanto_gym_generator.py pewter

Then compile with ./minion-compile and the gym is ready.
"""

import struct, os, sys, json, math
from PIL import Image
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
TILESETS_DIR = BASE / "data" / "tilesets" / "secondary"
LAYOUTS_DIR = BASE / "data" / "layouts"
GRAPHICS_H   = BASE / "src" / "data" / "tilesets" / "graphics.h"
METATILES_H  = BASE / "src" / "data" / "tilesets" / "metatiles.h"
HEADERS_H    = BASE / "src" / "data" / "tilesets" / "headers.h"
LAYOUTS_JSON = BASE / "data" / "layouts" / "layouts.json"
EVENT_SCRIPTS = BASE / "data" / "event_scripts.s"

# ─── Gym catalogue ──────────────────────────────────────────────────────────

GYMS = {
    "pewter":    ("PewterCity_Gym_Khanto",    "PewterGymKhanto",    "Brock",    "rock",     13, 11, "boulder"),
    "cerulean":  ("CeruleanCity_Gym_Khanto",  "CeruleanGymKhanto",  "Misty",    "water",    11, 11, "platforms"),
    "vermilion": ("VermilionCity_Gym_Khanto", "VermilionGymKhanto", "LtSurge",  "electric", 15, 11, "trash_cans"),
    "celadon":   ("CeladonCity_Gym_Khanto",   "CeladonGymKhanto",   "Erika",    "grass",    11, 13, "hedge_maze"),
    "saffron":   ("SaffronCity_Gym_Khanto",   "SaffronGymKhanto",   "Sabrina",  "psychic",  11, 13, "teleporters"),
    "fuchsia":   ("FuchsiaCity_Gym_Khanto",   "FuchsiaGymKhanto",   "Koga",     "poison",   13, 13, "invisible"),
    "cinnabar":  ("CinnabarIsland_Gym_Khanto","CinnabarGymKhanto",  "Blaine",   "fire",     13, 13, "quiz_doors"),
    "viridian":  ("ViridianCity_Gym_Khanto",  "ViridianGymKhanto",  "Giovanni", "ground",   13, 13, "keycard"),
}

# ─── Colour themes (bank 0=floor, 1=wall, 2=accent, 3=podium, 4=special) ──
# Each bank is 16 RGB tuples; index 0 is transparent black.
# The corresponding .pal file gets written from these.

THEMES = {
    "rock": {  # Brown / grey tones
        0: [(0,0,0),(72,64,56),(96,88,80),(120,112,104),(144,136,128),(56,48,40),(80,72,64),(104,96,88),(48,40,32),(128,120,112),(64,56,48),(88,80,72),(112,104,96),(136,128,120),(160,152,144),(32,24,16)],
        1: [(0,0,0),(40,32,24),(56,48,40),(72,64,56),(88,80,72),(48,40,32),(64,56,48),(80,72,64),(96,88,80),(104,96,88),(32,24,16),(112,104,96),(128,112,96),(144,136,120),(160,144,128),(184,168,152)],
        2: [(0,0,0),(56,48,40),(80,72,64),(104,96,88),(128,120,112),(152,144,136),(48,40,32),(72,64,56),(96,88,80),(120,112,104),(32,24,16),(144,136,128),(168,160,152),(192,184,176),(200,188,176),(160,140,120)],
        3: [(0,0,0),(40,32,24),(64,56,48),(88,80,72),(112,104,96),(136,128,120),(52,44,36),(76,68,60),(100,92,84),(124,116,108),(148,140,132),(160,152,144),(172,164,156),(184,176,168),(200,192,184),(216,208,200)],
        4: [(0,0,0),(160,80,40),(192,112,64),(216,152,96),(232,184,128),(248,216,168),(128,56,24),(176,96,48),(200,136,80),(224,168,112),(240,200,152),(144,64,32),(184,104,56),(208,144,88),(232,176,120),(80,40,16)],
    },
    "water": {
        0: [(0,0,0),(40,72,120),(48,88,144),(56,104,168),(64,120,192),(72,136,216),(80,152,240),(88,168,248),(96,184,252),(104,200,255),(32,56,96),(36,64,108),(44,80,132),(52,96,156),(60,112,180),(112,216,255)],
        1: [(0,0,0),(24,48,80),(32,64,104),(40,80,128),(48,96,152),(56,112,176),(64,128,200),(28,56,92),(36,72,116),(44,88,140),(52,104,164),(60,120,188),(20,40,68),(72,144,220),(80,160,240),(160,200,255)],
        2: [(0,0,0),(200,232,255),(180,216,248),(160,200,240),(140,184,232),(120,168,224),(100,152,216),(220,240,255),(240,248,255),(255,255,255),(180,200,255),(200,220,255),(255,200,100),(255,180,50),(255,160,0),(200,200,255)],
        3: [(0,0,0),(40,80,136),(48,96,160),(56,112,184),(64,128,208),(72,144,232),(80,160,255),(36,72,124),(44,88,148),(52,104,172),(60,120,196),(68,136,220),(76,152,244),(88,168,255),(96,184,255),(160,216,255)],
        4: [(0,0,0),(255,255,255),(240,248,255),(220,240,255),(200,232,255),(180,224,255),(160,216,255),(255,240,200),(255,220,150),(255,200,100),(255,180,50),(255,160,0),(255,140,0),(255,120,0),(255,100,0),(200,200,255)],
    },
    "electric": {
        0: [(0,0,0),(40,40,40),(56,56,56),(72,72,72),(88,88,88),(104,104,104),(120,120,120),(48,48,48),(64,64,64),(80,80,80),(96,96,96),(112,112,112),(136,136,136),(152,152,152),(168,168,168),(184,184,184)],
        1: [(0,0,0),(32,32,32),(48,48,48),(64,64,64),(80,80,80),(96,96,96),(112,112,112),(40,40,40),(56,56,56),(72,72,72),(88,88,88),(104,104,104),(28,28,28),(120,120,120),(136,136,136),(200,200,160)],
        2: [(0,0,0),(255,200,0),(240,188,0),(224,176,0),(208,164,0),(192,152,0),(176,140,0),(255,212,32),(255,224,64),(255,236,96),(255,248,128),(255,255,160),(200,200,200),(255,180,0),(255,160,0),(255,255,255)],
        3: [(0,0,0),(48,48,48),(64,64,64),(80,80,80),(96,96,96),(112,112,112),(128,128,128),(56,56,56),(72,72,72),(88,88,88),(104,104,104),(120,120,120),(144,144,144),(160,160,160),(180,180,180),(200,200,200)],
        4: [(0,0,0),(255,200,0),(255,220,48),(255,240,96),(255,255,144),(255,255,192),(255,255,240),(240,188,0),(224,176,0),(255,212,16),(255,232,64),(255,244,112),(255,252,160),(192,152,0),(208,164,0),(255,255,255)],
    },
    "grass": {
        0: [(0,0,0),(32,48,24),(40,60,32),(48,72,40),(56,84,48),(64,96,56),(72,108,64),(36,54,28),(44,66,36),(52,78,44),(60,90,52),(68,102,60),(80,120,72),(88,132,80),(96,144,88),(104,156,96)],
        1: [(0,0,0),(24,40,16),(32,52,24),(40,64,32),(48,76,40),(56,88,48),(64,100,56),(28,44,20),(36,56,28),(44,68,36),(52,80,44),(60,92,52),(72,112,64),(80,124,72),(88,136,80),(120,160,96)],
        2: [(0,0,0),(136,192,96),(152,208,112),(168,224,128),(184,240,144),(200,255,160),(216,255,176),(120,176,80),(144,200,104),(160,216,120),(176,232,136),(192,248,152),(208,255,168),(224,255,184),(240,255,200),(255,200,180)],
        3: [(0,0,0),(32,56,24),(40,68,32),(48,80,40),(56,92,48),(64,104,56),(72,116,64),(36,60,28),(44,72,36),(52,84,44),(60,96,52),(68,108,60),(80,128,72),(88,140,80),(96,152,88),(160,200,120)],
        4: [(0,0,0),(200,80,160),(220,120,180),(240,160,200),(255,200,220),(255,220,240),(255,240,250),(180,60,140),(200,100,160),(220,140,180),(240,180,200),(255,140,100),(255,100,60),(255,60,20),(255,40,0),(255,200,150)],
    },
    "psychic": {
        0: [(0,0,0),(48,24,64),(60,32,80),(72,40,96),(84,48,112),(96,56,128),(108,64,144),(52,28,68),(64,36,84),(76,44,100),(88,52,116),(100,60,132),(112,72,148),(124,80,160),(136,88,172),(148,96,184)],
        1: [(0,0,0),(36,16,48),(48,24,64),(60,32,80),(72,40,96),(84,48,112),(96,56,128),(40,20,52),(52,28,68),(64,36,84),(76,44,100),(88,52,116),(100,60,132),(112,68,144),(124,76,156),(200,160,255)],
        2: [(0,0,0),(200,160,255),(216,180,255),(232,200,255),(248,220,255),(255,240,255),(255,200,240),(184,140,255),(200,160,255),(216,180,255),(232,200,255),(248,220,255),(255,240,255),(255,180,200),(255,160,180),(255,255,255)],
        3: [(0,0,0),(60,32,80),(72,40,96),(84,48,112),(96,56,128),(108,64,144),(120,72,160),(64,36,84),(76,44,100),(88,52,116),(100,60,132),(112,68,148),(124,76,160),(136,84,172),(148,92,184),(200,160,255)],
        4: [(0,0,0),(255,200,255),(255,220,255),(255,240,255),(255,255,255),(240,200,255),(220,180,255),(255,180,200),(255,160,180),(255,140,160),(255,120,140),(200,160,255),(180,140,255),(160,120,255),(255,200,220),(255,255,200)],
    },
    "poison": {
        0: [(0,0,0),(40,24,48),(48,32,56),(56,40,64),(64,48,72),(72,56,80),(80,64,88),(44,28,52),(52,36,60),(60,44,68),(68,52,76),(76,60,84),(88,72,96),(96,80,104),(104,88,112),(112,96,120)],
        1: [(0,0,0),(28,16,36),(36,24,44),(44,32,52),(52,40,60),(60,48,68),(68,56,76),(32,20,40),(40,28,48),(48,36,56),(56,44,64),(64,52,72),(72,60,80),(80,68,88),(88,76,96),(140,100,180)],
        2: [(0,0,0),(140,80,160),(160,100,180),(180,120,200),(200,140,220),(220,160,240),(240,180,255),(120,60,140),(140,80,160),(160,100,180),(180,120,200),(200,140,220),(220,160,240),(100,40,120),(160,100,80),(255,200,200)],
        3: [(0,0,0),(48,32,56),(56,40,64),(64,48,72),(72,56,80),(80,64,88),(88,72,96),(52,36,60),(60,44,68),(68,52,76),(76,60,84),(84,68,92),(96,80,104),(104,88,112),(112,96,120),(160,120,200)],
        4: [(0,0,0),(160,80,80),(180,100,100),(200,120,120),(220,140,140),(240,160,160),(255,180,180),(140,60,60),(160,80,80),(180,100,100),(200,120,120),(220,140,140),(240,160,160),(100,40,40),(120,50,50),(255,200,200)],
    },
    "fire": {
        0: [(0,0,0),(48,24,16),(60,32,20),(72,40,24),(84,48,28),(96,56,32),(108,64,36),(52,28,18),(64,36,22),(76,44,26),(88,52,30),(100,60,34),(112,72,38),(124,80,42),(136,88,46),(148,96,50)],
        1: [(0,0,0),(36,16,8),(44,24,12),(52,32,16),(60,40,20),(68,48,24),(76,56,28),(40,20,10),(48,28,14),(56,36,18),(64,44,22),(72,52,26),(80,60,30),(88,68,34),(96,76,38),(180,120,60)],
        2: [(0,0,0),(255,100,0),(255,140,0),(255,180,0),(255,220,64),(255,240,128),(255,255,192),(240,80,0),(240,120,0),(255,160,0),(255,200,32),(255,230,96),(255,250,160),(220,60,0),(200,40,0),(255,200,100)],
        3: [(0,0,0),(56,28,16),(68,36,20),(80,44,24),(92,52,28),(104,60,32),(116,68,36),(60,32,18),(72,40,22),(84,48,26),(96,56,30),(108,64,34),(120,72,38),(132,80,42),(144,88,46),(200,140,80)],
        4: [(0,0,0),(255,60,0),(255,100,0),(255,140,0),(255,180,0),(255,220,64),(255,240,128),(220,40,0),(240,80,0),(255,120,0),(255,160,0),(255,200,32),(255,230,96),(200,20,0),(180,0,0),(255,255,200)],
    },
    "ground": {
        0: [(0,0,0),(48,40,32),(56,48,40),(64,56,48),(72,64,56),(80,72,64),(88,80,72),(52,44,36),(60,52,44),(68,60,52),(76,68,60),(84,76,68),(96,88,80),(104,96,88),(112,104,96),(120,112,104)],
        1: [(0,0,0),(36,28,20),(44,36,28),(52,44,36),(60,52,44),(68,60,52),(76,68,60),(40,32,24),(48,40,32),(56,48,40),(64,56,48),(72,64,56),(80,72,64),(88,80,72),(96,88,80),(160,140,100)],
        2: [(0,0,0),(160,140,80),(176,156,96),(192,172,112),(208,188,128),(224,204,144),(240,220,160),(144,124,64),(160,140,80),(176,156,96),(192,172,112),(208,188,128),(224,204,144),(128,108,48),(176,160,120),(200,184,144)],
        3: [(0,0,0),(40,32,24),(48,40,32),(56,48,40),(64,56,48),(72,64,56),(80,72,64),(44,36,28),(52,44,36),(60,52,44),(68,60,52),(76,68,60),(88,80,72),(96,88,80),(104,96,88),(180,160,120)],
        4: [(0,0,0),(200,180,80),(216,196,96),(232,212,112),(248,228,128),(255,244,144),(255,255,160),(184,164,64),(200,180,80),(216,196,96),(232,212,112),(248,228,128),(255,244,144),(168,148,48),(152,132,32),(255,255,200)],
    },
}

# ─── Tile generators ─────────────────────────────────────────────────────────

def make_tile(pal, indices, shape="solid"):
    """8x8 tile using colour indices (1-15). Safe bounds wrapping."""
    def ci(i):
        """Get colour index with safe wrap."""
        return indices[min(i, len(indices)-1)] if indices else 0
    img = Image.new("P", (8, 8))
    img.putpalette(pal)
    for y in range(8):
        for x in range(8):
            if shape == "checker":
                idx = ci(1) if (x//4 + y//4) % 2 == 0 else ci(2)
            elif shape == "hstripe":
                idx = ci(1) if y < 4 else ci(2)
            elif shape == "vstripe":
                idx = ci(1) if x < 4 else ci(2)
            elif shape == "diamond":
                d = abs(x-3) + abs(y-3)
                idx = ci(1) if d == 0 else ci(2) if d <= 2 else ci(3)
            elif shape == "cross":
                idx = ci(3) if (x in (2,3,4,5) and y in (2,3,4,5)) else ci(1)
                if x in (3,4) or y in (3,4):
                    idx = ci(3)
            elif shape == "circle":
                d2 = (x-3)**2 + (y-3)**2
                idx = ci(1) if d2 <= 2 else ci(2) if d2 <= 5 else ci(3)
            elif shape == "arrows":
                idx = ci(3) if x + y >= 7 else ci(2) if x + y >= 5 else ci(1)
            elif shape == "gradient":
                idx = ci(1 + (x + y//2) % max(1, len(indices)-1))
            else:  # solid
                idx = ci(1) if (x + y) % 2 == (x // 2) % 2 else ci(2)
            img.putpixel((x, y), idx % 16)
    return img

# ─── Tileset builder ─────────────────────────────────────────────────────────

def build_all(gym_key):
    gym_name, ts_key, leader, theme, w, h, puzzle = GYMS[gym_key]
    ts_dir = ts_key.lower()
    theme_pal = THEMES[theme]

    # Build a flat palette for the PNG (just for preview — each bank 16 cols)
    flat_rgb = []
    for bank in range(5):
        for c in theme_pal[bank]:
            flat_rgb.extend(c)

    # Pad to 768 (256 colours × 3)
    while len(flat_rgb) < 768:
        flat_rgb.extend([0, 0, 0])

    # ── TILE DEFINITIONS ──────────────────────────────────────────────
    # Each tile: (bank, indices[], shape_str)
    # bank=0 floor, 1 wall, 2 accent, 3 podium, 4 special
    # indices[] are local to that bank (1-15, 0=transparent)

    tile_defs = [
        # Floor tiles (bank 0, 12 tiles)
        (0, [0,1,2],   "checker"),   # 0: checker floor
        (0, [0,2,3],   "checker"),   # 1: checker floor alt
        (0, [0,3,4],   "checker"),   # 2
        (0, [0,4,5],   "checker"),   # 3
        (0, [0,1,2],   "hstripe"),   # 4: horizontal stripe
        (0, [0,3,4],   "hstripe"),   # 5
        (0, [0,1,2],   "vstripe"),   # 6: vertical stripe
        (0, [0,3,4],   "vstripe"),   # 7
        (0, [0,5,6],   "solid"),     # 8: solid light
        (0, [0,7,8],   "solid"),     # 9: solid mid
        (0, [0,9,10],  "solid"),     #10: solid darker
        (0, [0,11,12], "solid"),     #11: solid dark

        # Wall tiles (bank 1, 8 tiles)
        (1, [0,1,2],   "solid"),     #12
        (1, [0,2,3],   "solid"),     #13
        (1, [0,3,4],   "solid"),     #14
        (1, [0,4,5],   "solid"),     #15
        (1, [0,1,2],   "checker"),   #16: brick-like
        (1, [0,2,3],   "checker"),   #17
        (1, [0,6,7],   "hstripe"),   #18
        (1, [0,8,9],   "hstripe"),   #19

        # Accent tiles (bank 2, 8 tiles)
        (2, [0,1,2],   "diamond"),   #20
        (2, [0,2,3],   "diamond"),   #21
        (2, [0,3,4],   "cross"),     #22
        (2, [0,4,5],   "circle"),    #23
        (2, [0,1,2],   "circle"),    #24
        (2, [0,5,6],   "arrows"),    #25
        (2, [0,1,2],   "checker"),   #26
        (2, [0,3,4],   "checker"),   #27

        # Podium tiles (bank 3, 8 tiles)
        (3, [0,1,2],   "solid"),     #28
        (3, [0,2,3],   "solid"),     #29
        (3, [0,3,4],   "solid"),     #30
        (3, [0,4,5],   "solid"),     #31
        (3, [0,1,2],   "checker"),   #32
        (3, [0,2,3],   "checker"),   #33
        (3, [0,5,6],   "hstripe"),   #34
        (3, [0,6,7],   "hstripe"),   #35

        # Special tiles (bank 4, 8 tiles)
        (4, [0,1,2],   "circle"),    #36
        (4, [0,2,3],   "circle"),    #37
        (4, [0,3,4],   "diamond"),   #38
        (4, [0,4,5],   "diamond"),   #39
        (4, [0,1,2],   "cross"),     #40
        (4, [0,5,6],   "arrows"),    #41
        (4, [0,1,2],   "solid"),     #42
        (4, [0,3,4],   "solid"),     #43

        # More floors (bank 0, 8 tiles)
        (0, [0,1,3],   "gradient"),  #44
        (0, [0,2,4],   "gradient"),  #45
        (0, [0,3,5],   "gradient"),  #46
        (0, [0,4,6],   "gradient"),  #47
        (0, [0,1,2],   "circle"),    #48
        (0, [0,3,4],   "circle"),    #49
        (0, [0,5,6],   "arrows"),    #50
        (0, [0,7,8],   "arrows"),    #51

        # More accents (bank 2, 8 tiles)
        (2, [0,1,3],   "gradient"),  #52
        (2, [0,2,4],   "gradient"),  #53
        (2, [0,1,2],   "hstripe"),   #54
        (2, [0,3,4],   "hstripe"),   #55
        (2, [0,1,2],   "vstripe"),   #56
        (2, [0,3,4],   "vstripe"),   #57
        (2, [0,1,2],   "arrows"),    #58
        (2, [0,3,4],   "arrows"),    #59

        # Podium extra (bank 3, 4 tiles)
        (3, [0,1,2],   "gradient"),  #60
        (3, [0,3,4],   "gradient"),  #61
        (3, [0,1,2],   "circle"),    #62
        (3, [0,3,4],   "circle"),    #63
    ]

    # Build the tilesheet
    cols = 16
    rows = (len(tile_defs) + cols - 1) // cols
    sheet = Image.new("P", (cols * 8, rows * 8))
    sheet.putpalette(flat_rgb[:768])

    rendered = []
    for i, (bank, indices, shape) in enumerate(tile_defs):
        pal = []
        for c in theme_pal[bank]:
            pal.extend(c)
        tile = make_tile(pal[:48], indices, shape)
        tx = (i % cols) * 8
        ty = (i // cols) * 8
        sheet.paste(tile, (tx, ty))
        rendered.append((bank, indices, shape))

    return sheet, rendered, ts_dir, theme_pal

# ─── Metatile builder ────────────────────────────────────────────────────────

def build_metatiles(n_tiles):
    """Generate 64 metatiles. Returns (metatiles_bytes, attributes_bytes)."""
    mt = []
    attr = []

    def tile_entry(local_idx, bank=0, hf=0, vf=0):
        global_idx = 512 + local_idx  # secondary base
        return global_idx | (bank << 10) | (hf << 14) | (vf << 15)

    # 0: void
    mt += [0, 0, 0, 0];          attr.append(0x0000)
    # 1: floor (tiles 0,1 / 0,1)
    mt += [tile_entry(0), tile_entry(1), tile_entry(0), tile_entry(1)];  attr.append(0x0000)
    # 2: wall (tile 12)
    mt += [tile_entry(12,1)]*4;  attr.append(0x0020)
    # 3: checker floor (tiles 2,3)
    mt += [tile_entry(2), tile_entry(3), tile_entry(3), tile_entry(2)];  attr.append(0x0000)
    # 4: hstripe floor (4,5)
    mt += [tile_entry(4,0), tile_entry(4,0), tile_entry(5,0), tile_entry(5,0)];  attr.append(0x0000)
    # 5: darker floor (10,11)
    mt += [tile_entry(10,0), tile_entry(11,0), tile_entry(10,0), tile_entry(11,0)];  attr.append(0x0000)
    # 6: accent floor (20)
    mt += [tile_entry(20,2)]*4;  attr.append(0x0000)
    # 7: podium top (28)
    mt += [tile_entry(28,3)]*4;  attr.append(0x0000)
    # 8: podium step (29)
    mt += [tile_entry(29,3)]*4;  attr.append(0x0000)
    # 9: special floor (36)
    mt += [tile_entry(36,4)]*4;  attr.append(0x0000)
    #10: wall+floor edge (wall top, floor bottom)
    mt += [tile_entry(12,1), tile_entry(12,1), tile_entry(0,0), tile_entry(1,0)];  attr.append(0x0000)
    #11: lighter floor (8,9)
    mt += [tile_entry(8,0), tile_entry(9,0), tile_entry(8,0), tile_entry(9,0)];  attr.append(0x0000)
    #12: gradient floor (44)
    mt += [tile_entry(44,0)]*4;  attr.append(0x0000)
    #13: accent floor 2 (21)
    mt += [tile_entry(21,2)]*4;  attr.append(0x0000)
    #14: diamond accent (38)
    mt += [tile_entry(38,4)]*4;  attr.append(0x0000)
    #15: special 2 (39)
    mt += [tile_entry(39,4)]*4;  attr.append(0x0000)

    # Fill up to 64 metatiles
    filler = [
        (6, 0), (7, 0), (44, 0), (45, 0), (46, 0), (47, 0), (48, 0), (49, 0),
        (22, 2), (23, 2), (24, 2), (25, 2), (52, 2), (53, 2), (54, 2), (55, 2),
        (28, 3), (29, 3), (30, 3), (31, 3), (60, 3), (61, 3), (62, 3), (63, 3),
        (36, 4), (37, 4), (38, 4), (39, 4), (40, 4), (41, 4), (42, 4), (43, 4),
        (0, 0), (1, 0), (2, 0), (3, 0), (4, 0), (5, 0), (44, 0), (45, 0),
        (0, 0), (1, 0), (2, 0), (3, 0), (4, 0), (5, 0), (10, 0), (11, 0),
    ]
    for idx, bank in filler:
        if len(mt) // 4 >= 64:
            break
        t = tile_entry(idx % n_tiles, bank)
        mt += [t, t, t, t]
        attr.append(0x0000)

    # Pad to exactly 64
    while len(mt) // 4 < 64:
        mt += [0, 0, 0, 0]
        attr.append(0x0000)

    return struct.pack(f"<{len(mt)}H", *mt), struct.pack(f"<{len(attr)}H", *attr)

# ─── Layout builder ─────────────────────────────────────────────────────────

def build_layout(w, h, puzzle):
    grid = [[2 for _ in range(w)] for _ in range(h)]

    for y in range(1, h - 1):
        for x in range(1, w - 1):
            mt = 1  # default floor
            if puzzle == "boulder":
                if (x == 1 or x == w - 2) and 1 < y < h - 2:
                    mt = 2
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
            elif puzzle == "platforms":
                if (x + y) % 3 == 0:
                    mt = 4
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
                else:
                    mt = 5
            elif puzzle == "trash_cans":
                if (x == 2 or x == w - 3) and 2 <= y <= h - 3:
                    mt = 6 if y % 2 == 0 else 2
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
                else:
                    mt = 3
            elif puzzle == "hedge_maze":
                if 2 < x < w - 3 and 2 < y < h - 3 and ((x % 4 == 0) != (y % 4 == 0)):
                    mt = 2
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
            elif puzzle == "teleporters":
                mid = w // 2
                if x == mid:
                    mt = 6 if y in (2, h - 3) else 2
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
                else:
                    mt = 9
            elif puzzle == "invisible":
                if (x + y) % 4 == 0:
                    mt = 13
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
                else:
                    mt = 5
            elif puzzle == "quiz_doors":
                if x in (2, w - 3):
                    mt = 2 if y % 2 == 0 else 1
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
                else:
                    mt = 14
            elif puzzle == "keycard":
                if x == 3 and 2 <= y <= h - 4:
                    mt = 2
                elif x == w - 4 and 2 <= y <= h - 4:
                    mt = 2
                elif x == 3 and y == h - 4:
                    mt = 1
                elif x == w - 4 and y == 2:
                    mt = 1
                elif x == w // 2 and y == h // 2:
                    mt = 7
                elif x == w // 2 and y == h // 2 + 1:
                    mt = 8
                else:
                    mt = 11
            grid[y][x] = mt

    # Entrance
    grid[h - 1][w // 2] = 1

    map_data = bytearray()
    for row in grid:
        for v in row:
            map_data.extend(struct.pack("<H", v))

    border = bytearray(struct.pack("<H", 2) * 4)
    return bytes(map_data), bytes(border), grid

# ─── Palette writer ─────────────────────────────────────────────────────────

def write_palettes(ts_dir, theme_pal):
    pal_dir = TILESETS_DIR / ts_dir / "palettes"
    pal_dir.mkdir(exist_ok=True)
    for bank in range(16):
        colors = theme_pal.get(bank, theme_pal[0])
        data = bytearray()
        for r, g, b in colors:
            val = ((r >> 3) << 10) | ((g >> 3) << 5) | (b >> 3)
            data.append(val & 0xFF)
            data.append((val >> 8) & 0xFF)
        (pal_dir / f"{bank:02d}.pal").write_bytes(bytes(data))

# ─── Source registration ─────────────────────────────────────────────────────

def register(gym_key, ts_key, gym_name, w, h):
    ts_dir = ts_key.lower()
    t = f"gTilesetTiles_{ts_key}"
    p = f"gTilesetPalettes_{ts_key}"
    m = f"gMetatiles_{ts_key}"
    a = f"gMetatileAttributes_{ts_key}"

    # graphics.h — insert before `#endif // IS_FRLG`
    gh = GRAPHICS_H.read_text()
    marker = "#endif // IS_FRLG"
    if gh.count(marker):
        block = f"""
const u32 {t}[] = INCGFX_U32("data/tilesets/secondary/{ts_dir}/tiles.png", ".4bpp.fastSmol");

const u16 {p}[][16] =
{{
""" + ",\n".join(f'    INCGFX_U16("data/tilesets/secondary/{ts_dir}/palettes/{b:02d}.pal", ".gbapal")' for b in range(16)) + """
};

"""
        gh = gh.replace(marker, block + "\n" + marker, 1)
        GRAPHICS_H.write_text(gh)
        print("  ✓ graphics.h")

    # metatiles.h — append before final blank or #endif
    mh = METATILES_H.read_text()
    entry = f"\nconst u16 {m}[] = INCBIN_U16(\"data/tilesets/secondary/{ts_dir}/metatiles.bin\");\n"
    entry += f"const u16 {a}[] = INCBIN_U16(\"data/tilesets/secondary/{ts_dir}/metatile_attributes.bin\");\n"
    # Find insertion: before last #endif or at end
    for l in METATILES_H.read_text().splitlines():
        pass
    # simple append after last non-empty line
    lines = mh.rstrip().splitlines()
    while lines and lines[-1].strip() == "":
        lines.pop()
    lines.append("")
    lines.append(entry)
    METATILES_H.write_text("\n".join(lines))
    print("  ✓ metatiles.h")

    # headers.h — insert after PetalburgORAS struct
    hh = HEADERS_H.read_text()
    search = "gTileset_PetalburgORAS"
    if search in hh:
        struct = f"""
const struct Tileset gTileset_{ts_key} =
{{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = {t},
    .palettes = {p},
    .metatiles = {m},
    .metatileAttributes = {a},
    .callback = NULL,
}};
"""
        hh = hh.replace(f"const struct Tileset gTileset_PetalburgORAS", struct + "\nconst struct Tileset gTileset_PetalburgORAS")
        HEADERS_H.write_text(hh)
        print("  ✓ headers.h")

    # layouts.json
    with open(LAYOUTS_JSON) as f:
        lj = json.load(f)
    exists = any(item.get("name") == f"{gym_name}_Layout" for item in lj["layouts"])
    if not exists:
        lj["layouts"].append({
            "id": f"LAYOUT_{gym_name.upper()}",
            "name": f"{gym_name}_Layout",
            "width": w,
            "height": h,
            "primary_tileset": "gTileset_Building",
            "secondary_tileset": f"gTileset_{ts_key}",
            "border_filepath": f"data/layouts/{gym_name}/border.bin",
            "blockdata_filepath": f"data/layouts/{gym_name}/map.bin",
            "border_width": 2,
            "border_height": 2,
            "layout_version": "frlg"
        })
        with open(LAYOUTS_JSON, "w") as f:
            json.dump(lj, f, indent=2)
        print("  ✓ layouts.json")

    # event_scripts.s — append include
    es_text = EVENT_SCRIPTS.read_text()
    inc = f'\n    .include "data/maps/{gym_name}/{gym_name}.inc"'
    if inc not in es_text:
        EVENT_SCRIPTS.write_text(es_text.rstrip() + inc + "\n")
        print("  ✓ event_scripts.s")

    # ── map JSON, scripts, events, header ──
    map_dir = BASE / "data" / "maps" / gym_name
    if not (map_dir / "map.json").exists():
        map_dir.mkdir(parents=True, exist_ok=True)

        entry_x = w // 2
        entry_y = h - 1
        gym_id = f"MAP_{gym_name.upper()}"

        # Map city: infer from gym name
        city_name = gym_name.replace("City_Gym_Khanto", "").replace("Island_Gym_Khanto", "Island")
        city_map_id = f"MAP_{city_name.upper()}_KHANTO"
        city_mapsec = f"MAPSEC_{city_name.upper()}"

        map_json = {
            "id": gym_id,
            "name": gym_name,
            "layout": f"LAYOUT_{gym_name.upper()}",
            "music": "MUS_GYM",
            "region_map_section": city_mapsec,
            "requires_flash": False,
            "weather": "WEATHER_NONE",
            "map_type": "MAP_TYPE_INDOOR",
            "allow_cycling": True,
            "allow_escaping": True,
            "allow_running": True,
            "show_map_name": True,
            "battle_scene": "MAP_BATTLE_SCENE_NORMAL",
            "connections": None,
            "object_events": [
                {
                    "graphics_id": "OBJ_EVENT_GFX_RECEPTIONIST",
                    "x": entry_x,
                    "y": 2,
                    "elevation": 3,
                    "movement_type": "MOVEMENT_TYPE_FACE_DOWN",
                    "movement_range_x": 0,
                    "movement_range_y": 0,
                    "trainer_type": "TRAINER_TYPE_NONE",
                    "trainer_sight_or_berry_tree_id": "0",
                    "script": f"{gym_name}_EventScript_Receptionist",
                    "flag": "0"
                }
            ],
            "warp_events": [
                {
                    "x": entry_x,
                    "y": entry_y,
                    "elevation": 3,
                    "dest_map": city_map_id,
                    "dest_warp_id": "0"
                }
            ],
            "coord_events": [],
            "bg_events": []
        }

        with open(map_dir / "map.json", "w") as f:
            json.dump(map_json, f, indent=4)

        # scripts.inc
        (map_dir / "scripts.inc").write_text(f'''{gym_name}_MapScripts::
    .align 2
    .global {gym_name}_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word {gym_name}_MapObjects
    .word {gym_name}_MapWarps
    .word {gym_name}_MapCoordEvents
    .word {gym_name}_MapBGEvents

{gym_name}_EventScript_Receptionist::
    msgbox {gym_name}_Text_Welcome, MSGBOX_SIGN
    end

{gym_name}_Text_Welcome:
    .string "Welcome to the {gym_name}"
    .string "A place where trainers grow stronger!$"
''')

        # The city map defines are only available if the city map exists
        city_map_id = f'MAP_{city_name.upper()}_KHANTO'

        # events.inc
        (map_dir / "events.inc").write_text(f'''{gym_name}_MapObjects::
    .object 0, OBJECT_TYPE_SCRIPT, 0, {entry_x}, {entry_y-3}, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, {gym_name}_EventScript_Receptionist, 0

{gym_name}_MapWarps::
    .warp {entry_x}, {entry_y}, 3, 0, {city_map_id}

{gym_name}_MapCoordEvents::
    .coord_event 0, 0, 0, 0, 0, 0, 0

{gym_name}_MapBGEvents::
    .bg_event 0, 0, 0, 0, 0, 0
''')

        # header.inc
        (map_dir / "header.inc").write_text(f'''.include "include/macros.inc"
.include "include/constants.inc"

    .global {gym_name}_MapHeader

{gym_name}_MapHeader::
    .word {gym_name}_MapScripts
    .word {gym_name}_MapObjects
    .word {gym_name}_MapConnections
    .word {gym_name}_MapWarps
    .word {gym_name}_MapCoordEvents
    .word {gym_name}_MapBGEvents
    .byte 0
    .byte 0
    .byte 0
    .byte 0
    .byte 0
    .byte 0
    .byte 0
    .byte 0
    .word 0
    .hword MAPTYPE_INDOOR
    .hword 0
    .byte 0
    .byte 0
    .word 0
    .word 0
    .word 0
''')

        # connections.inc
        (map_dir / "connections.inc").write_text(f'''{gym_name}_MapConnections::
    .word 0
    .word 0
    .word 0
''')

        print(f"  ✓ map directory + JSON/scripts")

# ─── Map visualization ──────────────────────────────────────────────────────

def draw_grid(grid):
    sym = {0: '░', 1: '·', 2: '█', 3: '▒', 4: '░', 5: '≈', 6: '◈', 7: '▲',
            8: '▬', 9: '◆', 10: '▄', 11: '·', 12: '~', 13: '◈', 14: '◆'}
    for row in grid:
        print("  " + "".join(sym.get(c, str(c)) for c in row))

# ─── Main ────────────────────────────────────────────────────────────────────

def main():
    if len(sys.argv) < 2:
        print(f"Usage: python3 tools/{Path(__file__).name} <gym_key>")
        print(f"Keys: {', '.join(sorted(GYMS))}")
        sys.exit(1)

    key = sys.argv[1].strip().lower()
    if key not in GYMS:
        print(f"Unknown: {key}. Options: {', '.join(sorted(GYMS))}")
        sys.exit(1)

    gym_name, ts_key, leader, theme, w, h, puzzle = GYMS[key]
    ts_dir = ts_key.lower()

    print(f"\n🏛  {gym_name}  —  {leader}'s {theme.upper()} gym  [{puzzle}]")
    print("=" * 50)

    # Tileset
    print("\n🎨 Tileset:")
    (TILESETS_DIR / ts_dir).mkdir(parents=True, exist_ok=True)
    sheet, tiles, _, theme_pal = build_all(key)
    sheet.save(TILESETS_DIR / ts_dir / "tiles.png")
    print(f"  ✓ tiles.png ({sheet.size[0]}×{sheet.size[1]})")
    write_palettes(ts_dir, theme_pal)
    print(f"  ✓ palettes/ (16 banks)")

    mt_bytes, at_bytes = build_metatiles(len(tiles))
    (TILESETS_DIR / ts_dir / "metatiles.bin").write_bytes(mt_bytes)
    (TILESETS_DIR / ts_dir / "metatile_attributes.bin").write_bytes(at_bytes)
    print(f"  ✓ metatiles.bin + metatile_attributes.bin ({len(mt_bytes)//8} metatiles)")

    # Layout
    print("\n🏗  Layout:")
    (LAYOUTS_DIR / gym_name).mkdir(parents=True, exist_ok=True)
    map_bytes, border_bytes, grid = build_layout(w, h, puzzle)
    (LAYOUTS_DIR / gym_name / "map.bin").write_bytes(map_bytes)
    (LAYOUTS_DIR / gym_name / "border.bin").write_bytes(border_bytes)
    print(f"  ✓ map.bin ({w}×{h})")

    print("\n🗺  Map preview:")
    draw_grid(grid)

    # Registration
    print("\n📝 Registration:")
    register(key, ts_key, gym_name, w, h)
    print(f"\n✅  Done! Compile with ./minion-compile")

if __name__ == "__main__":
    main()
