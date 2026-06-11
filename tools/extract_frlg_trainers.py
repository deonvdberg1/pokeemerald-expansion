#!/usr/bin/env python3
"""Extract specific FRLG main character trainer data from trainers_frlg.h"""
import sys, re

if len(sys.argv) != 3:
    print(f"Usage: {sys.argv[0]} <trainers_frlg.h> <output.h>")
    sys.exit(1)

src = sys.argv[1]
dst = sys.argv[2]

# The trainer IDs we want for Khanto main characters
wanted_ids = {
    # Giovanni (boss + leader)
    248, 249, 250,
    # Gym leaders
    314, 315, 316, 317, 318, 319, 320,
    # Elite 4 (and rematches)
    310, 311, 312, 313,
    616, 617, 618, 619,
    # Champion (first battle + rematch)  
    338, 339, 340,
    620, 621, 622,
    # Team Rocket Grunts (base set for gyms)
    251, 252, 253, 254, 255, 256, 257, 258, 259, 260,
    261, 262, 263, 264, 265,
    # Rival encounters (one per starter, we'll use default)
    226, 227, 228,  # Oak's Lab
    232, 233, 234,  # Cerulean
    326, 327, 328,  # SS Anne
    332, 333, 334,  # Silph Co
    338, 339, 340,  # Champion
}

# Also define TRAINER_CLASS_ROCKET_FRLG and TRAINER_CLASS_LEADER_FRLG if not already
# This is needed because our maps reference these trainer IDs and classes

with open(src, 'r') as f:
    content = f.read()

# Split the file by trainer entry blocks
# Pattern: [DIFFICULTY_NORMAL][TRAINER_XXX] = { ... },
# Each entry ends with }, on its own line, followed by newline and either [DIFFICULTY or end

lines = content.split('\n')
output_lines = [
    "//",
    "// Auto-extracted FRLG main character trainer data for Khanto project",
    "// Extracted from trainers_frlg.h",
    "//",
    "",
]

i = 0
while i < len(lines):
    line = lines[i]
    # Look for [DIFFICULTY_NORMAL][TRAINER_ pattern
    m = re.search(r'\[DIFFICULTY_NORMAL\]\[TRAINER_(\w+)\]\s*=', line)
    if m:
        # Find the associated ID by looking back or forward
        # The ID is determined by the macro, e.g., TRAINER_LEADER_GIOVANNI = 250
        # We need to check if the trainer ID in this block is one we want
        
        # Collect the block until we find the closing }, on its own line
        block_lines = [line]
        brace_depth = line.count('{') - line.count('}')
        i += 1
        while i < len(lines) and brace_depth >= 0:
            block_lines.append(lines[i])
            brace_depth += lines[i].count('{') - lines[i].count('}')
            if brace_depth < 0:
                break
            i += 1
        
        # Try to extract the trainer name from the block to find its ID
        trainer_name = m.group(1)
        
        # Look up this name in the defines at the top
        # We'll include any of our wanted IDs by checking the name pattern
        # This is imprecise. Let me use a different approach.
        
        # Actually, the easiest approach: let's just include ALL entries
        # But we can't because of the override issue.
        pass
    i += 1

# Simpler approach: regenerate using grep for specific TRAINER_* names
# and extract their full blocks from the file

trainer_names = {
    # Use names that correspond to the wanted IDs
    # Giovanni
    "BOSS_GIOVANNI": 248,
    "BOSS_GIOVANNI_2": 249,
    "LEADER_GIOVANNI": 250,
    # Team Rocket
    "TEAM_ROCKET_GRUNT": 251,
    "TEAM_ROCKET_GRUNT_2": 252,
    "TEAM_ROCKET_GRUNT_3": 253,
    "TEAM_ROCKET_GRUNT_4": 254,
    "TEAM_ROCKET_GRUNT_5": 255,
    "TEAM_ROCKET_GRUNT_6": 256,
    "TEAM_ROCKET_GRUNT_7": 257,
    "TEAM_ROCKET_GRUNT_8": 258,
    "TEAM_ROCKET_GRUNT_9": 259,
    "TEAM_ROCKET_GRUNT_10": 260,
    "TEAM_ROCKET_GRUNT_11": 261,
    "TEAM_ROCKET_GRUNT_12": 262,
    "TEAM_ROCKET_GRUNT_13": 263,
    "TEAM_ROCKET_GRUNT_14": 264,
    "TEAM_ROCKET_GRUNT_15": 265,
    # Rival
    "RIVAL_OAKS_LAB_SQUIRTLE": 226,
    "RIVAL_OAKS_LAB_BULBASAUR": 227, 
    "RIVAL_OAKS_LAB_CHARMANDER": 228,
    "RIVAL_CERULEAN_SQUIRTLE": 232,
    "RIVAL_CERULEAN_BULBASAUR": 233,
    "RIVAL_CERULEAN_CHARMANDER": 234,
    "RIVAL_SS_ANNE_SQUIRTLE": 326,
    "RIVAL_SS_ANNE_BULBASAUR": 327,
    "RIVAL_SS_ANNE_CHARMANDER": 328,
    "RIVAL_SILPH_SQUIRTLE": 332,
    "RIVAL_SILPH_BULBASAUR": 333,
    "RIVAL_SILPH_CHARMANDER": 334,
    # Elite 4
    "ELITE_FOUR_LORELEI": 310,
    "ELITE_FOUR_BRUNO": 311,
    "ELITE_FOUR_AGATHA": 312,
    "ELITE_FOUR_LANCE": 313,
    # Gym Leaders
    "LEADER_BROCK": 314,
    "LEADER_MISTY": 315,
    "LEADER_LT_SURGE": 316,
    "LEADER_ERIKA": 317,
    "LEADER_KOGA": 318,
    "LEADER_BLAINE": 319,
    "LEADER_SABRINA": 320,
    # Champion
    "CHAMPION_FIRST_SQUIRTLE": 338,
    "CHAMPION_FIRST_BULBASAUR": 339,
    "CHAMPION_FIRST_CHARMANDER": 340,
    # Elite 4 rematches
    "ELITE_FOUR_LORELEI_2": 616,
    "ELITE_FOUR_BRUNO_2": 617,
    "ELITE_FOUR_AGATHA_2": 618,
    "ELITE_FOUR_LANCE_2": 619,
    # Champion rematch
    "CHAMPION_REMATCH_SQUIRTLE": 620,
    "CHAMPION_REMATCH_BULBASAUR": 621,
    "CHAMPION_REMATCH_CHARMANDER": 622,
}

with open(src, 'r') as f:
    content = f.read()

for name, tid in trainer_names.items():
    # Find the entry: [DIFFICULTY_NORMAL][TRAINER_{name}]
    pattern = f'[DIFFICULTY_NORMAL][TRAINER_{name}]'
    idx = content.find(pattern)
    if idx == -1:
        print(f"Warning: Could not find {name} in source", file=sys.stderr)
        continue
    
    # Find the start of the block (the line containing the pattern)
    start = content.rfind('\n', 0, idx) + 1
    
    # Find the end: the closing }, at the same depth, on its own line
    # The entry ends with ,\n    },\n
    # We need to find the main }, that closes this entry
    pos = idx
    brace_depth = 0
    found_start = False
    block_start = None
    
    for ci in range(start, len(content)):
        c = content[ci]
        if c == '{':
            if not found_start:
                found_start = True
                block_start = ci
            brace_depth += 1
        elif c == '}':
            brace_depth -= 1
            if found_start and brace_depth == 0:
                # Save this position as entry end
                entry_end = ci + 1  # include the }
                # Consume any trailing commas and whitespace
                j = ci + 1
                while j < len(content) and content[j] in ', \t':
                    j += 1
                if j > ci + 1:
                    entry_end = j
                
                block_text = content[block_start:entry_end].strip()
                output_lines.append(f"    // {name} (ID {tid})")
                output_lines.append(f"    [DIFFICULTY_NORMAL][{tid}] =")
                output_lines.append(f"    {block_text},")
                output_lines.append("")
                break

output = '\n'.join(output_lines)
with open(dst, 'w') as f:
    f.write(output)

print(f"Extracted {len(trainer_names)} trainers to {dst}")
