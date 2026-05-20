PalletTown_AuntsHouse_1F_MapScripts::
# 5 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_AuntsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PalletTown_AuntsHouse_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PalletTown_AuntsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

PalletTown_AuntsHouse_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


PalletTown_AuntsHouse_1F_EventScript_Aunt::
# 17 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	lock
# 18 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	faceplayer
# 19 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	msgbox PalletTown_AuntsHouse_1F_EventScript_Aunt_Text_0
# 23 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	release
	end


PalletTown_AuntsHouse_1F_EventScript_TV::
# 32 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	lock
# 33 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	msgbox PalletTown_AuntsHouse_1F_EventScript_TV_Text_0
# 35 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	release
	end


PalletTown_AuntsHouse_1F_EventScript_Aunt_Text_0:
# 19 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	.string "Hello, sweetie!\n"
	.string "Ready for your big adventure?\l"
	.string "Make sure you visit Prof. Oak first —\l"
	.string "he has something important for you.$"

PalletTown_AuntsHouse_1F_EventScript_TV_Text_0:
# 33 "data/maps/PalletTown_AuntsHouse_1F/scripts.pory"
	.string "There's a show about Pokémon on TV.\n"
	.string "They're battling on some faraway island.$"
