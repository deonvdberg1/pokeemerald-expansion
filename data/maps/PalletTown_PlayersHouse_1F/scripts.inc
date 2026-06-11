PalletTown_PlayersHouse_1F_MapScripts::
# 5 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PalletTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


PalletTown_PlayersHouse_1F_EventScript_Red::
# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Red_Text_0
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Red_Text_1
# 16 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Red_Text_2
# 17 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Red_Text_3
# 25 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Red_Text_0
# 26 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
	end


PalletTown_PlayersHouse_1F_EventScript_Television::
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Television_Text_0
	end


PalletTown_PlayersHouse_1F_EventScript_Red_Text_0:
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "…$"

PalletTown_PlayersHouse_1F_EventScript_Red_Text_1:
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "… … …$"

PalletTown_PlayersHouse_1F_EventScript_Red_Text_2:
# 16 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "… … … … …$"

PalletTown_PlayersHouse_1F_EventScript_Red_Text_3:
# 17 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}… \n"
	.string "You have a long journey ahead.\l"
	.string "Train hard.\l"
	.string "Defeat the eight GYM LEADERS.\l"
	.string "Conquer the LEAGUE.\l"
	.string "Then come find me.\l"
	.string "I'll be waiting at the peak of\l"
	.string "MOUNT SILVER…$"

PalletTown_PlayersHouse_1F_EventScript_Television_Text_0:
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "The TV shows a snowy mountain peak.\n"
	.string "A lone figure stands at the summit…\l"
	.string "Could that be RED?$"
