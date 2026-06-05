#!/usr/bin/env python3
"""Fix graphics.h: remove duplicate Khanto gym tilesets, move first set outside guard."""
with open('src/data/tilesets/graphics.h') as f:
    content = f.read()
    lines = content.split('\n')

# Find all Khanto gym tileset lines
gym_lines = []
for i, line in enumerate(lines):
    if 'gTilesetTiles_' in line and 'GymKhanto' in line:
        gym_lines.append(i)

print(f"Found {len(gym_lines)} gym tileset lines at: {gym_lines}")

# There should be 16 total (8 first set + 8 second set)
# The second set starts at index 8 (0-indexed)

if len(gym_lines) >= 8:
    first_set_start = gym_lines[0]
    second_set_start = gym_lines[8]
    
    # Find the closing brace of the 8th gym's palettes in the first set
    # (which is the last line before second_set_start's blank lines)
    pre_second = second_set_start - 1
    while pre_second >= 0 and lines[pre_second].strip() == '':
        pre_second -= 1
    
    # pre_second should be at the closing }; of the first set's last gym
    first_set_end = pre_second + 1  # include the };
    
    # Find the #endif after the second set
    endif_idx = None
    for i in range(second_set_start, len(lines)):
        if '#endif // IS_FRLG' in lines[i]:
            endif_idx = i
            break
    
    if endif_idx:
        # Get first set data
        first_set = lines[first_set_start:first_set_end]
        
        # Get everything before first_set_start (unchanged)
        before_first = lines[:first_set_start]
        
        # Get everything between first set end and second set start
        between = lines[first_set_end:second_set_start]
        
        # Get everything after #endif (including #endif)
        after = lines[endif_idx:]
        
        # New content: before_first + first_set + between + after
        new_content = before_first + first_set + between + after
        
        with open('src/data/tilesets/graphics.h', 'w') as f:
            f.write('\n'.join(new_content))
        
        print(f"Removed second set ({second_set_start}-{endif_idx})")
        print(f"Kept first set at {first_set_start}-{first_set_end}")
        print(f"New file: {len(new_content)} lines")
        
        # Now move the first set before #if IS_FRLG
        with open('src/data/tilesets/graphics.h') as f:
            lines2 = f.read().split('\n')
        
        # Find #if IS_FRLG
        if_frlg = None
        for i, line in enumerate(lines2):
            if '#if IS_FRLG' in line:
                if_frlg = i
                break
        
        if if_frlg:
            # Find first gym start again
            first_gym2 = None
            for i, line in enumerate(lines2):
                if 'gTilesetTiles_PewterGymKhanto' in line:
                    first_gym2 = i
                    break
            
            if first_gym2 and first_gym2 > if_frlg:
                # Gym is after #if IS_FRLG - move it before
                # Find last gym closing
                gym_count = 0
                last_gym_start2 = None
                close_brace2 = None
                for i, line in enumerate(lines2):
                    if 'gTilesetTiles_' in line and 'GymKhanto' in line:
                        gym_count += 1
                        if gym_count == 8:
                            last_gym_start2 = i
                            break
                
                if last_gym_start2:
                    for i in range(last_gym_start2, min(last_gym_start2 + 40, len(lines2))):
                        if lines2[i].strip() == '};':
                            close_brace2 = i
                            break
                
                if close_brace2:
                    gym_data2 = lines2[first_gym2:close_brace2+1]
                    after_gym = lines2[close_brace2+1:]
                    
                    # Find blank lines before #if IS_FRLG
                    pre_if = if_frlg - 1
                    while pre_if >= 0 and lines2[pre_if].strip() == '':
                        pre_if -= 1
                    pre_if += 1  # include blank lines
                    
                    before_if = lines2[:pre_if]
                    rest = lines2[pre_if:first_gym2] + after_gym
                    
                    result = before_if + [''] + gym_data2 + rest
                    
                    with open('src/data/tilesets/graphics.h', 'w') as f:
                        f.write('\n'.join(result))
                    
                    print(f"Moved first set ({first_gym2}-{close_brace2}) before #if IS_FRLG at line {if_frlg}")
                    print(f"New file: {len(result)} lines")
    else:
        print("Could not find #endif")
else:
    print("Less than 8 gym tileset lines found")
