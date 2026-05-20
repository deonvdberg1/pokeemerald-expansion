PalletTown_AuntsHouse_2F_MapScripts::
# 5 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_AuntsHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PalletTown_AuntsHouse_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PalletTown_AuntsHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

PalletTown_AuntsHouse_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


PalletTown_AuntsHouse_2F_EventScript_NES::
# 17 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	lock
# 18 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	msgbox PalletTown_AuntsHouse_2F_EventScript_NES_Text_0
# 21 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	release
	end


PalletTown_AuntsHouse_2F_EventScript_PC::
# 27 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	lock
# 28 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	msgbox PalletTown_AuntsHouse_2F_EventScript_PC_Text_0
# 31 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	release
	end


PalletTown_AuntsHouse_2F_EventScript_Bed::
# 37 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	lock
# 38 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	msgbox PalletTown_AuntsHouse_2F_EventScript_Bed_Text_0
# 41 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	release
	end


PalletTown_AuntsHouse_2F_EventScript_NES_Text_0:
# 18 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	.string "{PLAYER} turned on the NES!\n"
	.string "Better get going—\l"
	.string "there's an adventure waiting!$"

PalletTown_AuntsHouse_2F_EventScript_PC_Text_0:
# 28 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	.string "{PLAYER} booted up the PC.\n"
	.string "It's running some kind of\l"
	.string "Pokémon development tool...$"

PalletTown_AuntsHouse_2F_EventScript_Bed_Text_0:
# 38 "data/maps/PalletTown_AuntsHouse_2F/scripts.pory"
	.string "A cozy bed.\n"
	.string "Time to rest before\l"
	.string "the journey ahead!$"
