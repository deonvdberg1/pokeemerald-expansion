PalletTown_RivalsHouse_MapScripts::
# 5 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PalletTown_RivalsHouse_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PalletTown_RivalsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

PalletTown_RivalsHouse_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


PalletTown_RivalsHouse_EventScript_Daisy::
# 17 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 18 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 19 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_EventScript_Daisy_Text_0
# 25 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_TownMap::
# 31 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 32 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 33 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_EventScript_TownMap_Text_0
# 36 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 37 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_Bookshelf::
# 46 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 47 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_EventScript_Bookshelf_Text_0
# 49 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_Picture::
# 54 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 55 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_EventScript_Picture_Text_0
# 57 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_Daisy_Text_0:
# 19 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "My little brother is at\l"
	.string "Prof. Oak's lab right now.\l"
	.string "He's been talking about becoming\l"
	.string "a Pokémon Trainer all morning!\l"
	.string "You should head over there too.$"

PalletTown_RivalsHouse_EventScript_TownMap_Text_0:
# 33 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's the Town Map!\n"
	.string "This will help you find\l"
	.string "your way around the region.$"

PalletTown_RivalsHouse_EventScript_Bookshelf_Text_0:
# 47 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Books about Pokémon fill the shelves.\n"
	.string "There are notes scribbled in the margins.$"

PalletTown_RivalsHouse_EventScript_Picture_Text_0:
# 55 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "A family photo on the wall.\n"
	.string "It's the rival's family.$"
