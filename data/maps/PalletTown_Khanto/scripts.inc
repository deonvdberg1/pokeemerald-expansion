PalletTown_Khanto_MapScripts::
# 5 "data/maps/PalletTown_Khanto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/PalletTown_Khanto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/PalletTown_Khanto/scripts.pory"
	call_if_eq VAR_TEMP_5, 1, PalletTown_EventScript_TruckArrival
	return

PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


PalletTown_EventScript_TruckArrival::
# 17 "data/maps/PalletTown_Khanto/scripts.pory"
	lockall
# 18 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_EventScript_TruckArrival_Text_0
# 19 "data/maps/PalletTown_Khanto/scripts.pory"
	closemessage
# 20 "data/maps/PalletTown_Khanto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 21 "data/maps/PalletTown_Khanto/scripts.pory"
	waitmovement 0
# 22 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_EventScript_TruckArrival_Text_1
# 23 "data/maps/PalletTown_Khanto/scripts.pory"
	setvar VAR_TEMP_5, 0
# 24 "data/maps/PalletTown_Khanto/scripts.pory"
	releaseall
	end


PalletTown_ProfOak::
# 34 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 35 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 36 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_ProfOak_Text_0
# 40 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_ProfOak_Text_1
# 42 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Woman::
# 48 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 49 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 50 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Woman_Text_0
# 53 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Man::
# 58 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 59 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 60 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Man_Text_0
# 62 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Fisherman::
# 67 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 68 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 69 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Fisherman_Text_0
# 72 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_TownSign::
# 81 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 82 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 83 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_TownSign_Text_0
# 84 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_OakLabSign::
# 89 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 90 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 91 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_OakLabSign_Text_0
# 92 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_EventScript_TruckArrival_Text_0:
# 18 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "You arrived in PALLET TOWN!\lThe truck driver waves goodbye and drives off.$"

PalletTown_EventScript_TruckArrival_Text_1:
# 22 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "There's PROFESSOR OAK's lab\njust ahead.\lBetter go introduce yourself.$"

PalletTown_ProfOak_Text_0:
# 36 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Ah, you must be {PLAYER}!\n"
	.string "Your mother called ahead.\p\l"
	.string "I've been expecting you!\l"
	.string "Come see me in my lab just up ahead.$"

PalletTown_ProfOak_Text_1:
# 40 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "It's the building with the big sign.\n\n"
	.string "I'll set you up with a POKÉMON!$"

PalletTown_Woman_Text_0:
# 50 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Welcome to Pallet Town!\n"
	.string "It's a quiet little town,\l"
	.string "but we love it.$"

PalletTown_Man_Text_0:
# 60 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Prof. Oak's lab is up ahead.\n"
	.string "He's a world-famous Pokémon researcher!$"

PalletTown_Fisherman_Text_0:
# 69 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "If you walk in tall grass,\n"
	.string "wild Pokémon will appear.\l"
	.string "Be sure to have some Pokéballs handy!$"

PalletTown_TownSign_Text_0:
# 83 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "PALLET TOWN\lA place of new beginnings.$"

PalletTown_OakLabSign_Text_0:
# 91 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "OAK POKÉMON RESEARCH LAB\lWhere dreams begin.$"
