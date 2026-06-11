PalletTown_Khanto_MapScripts::
# 5 "data/maps/PalletTown_Khanto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/PalletTown_Khanto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

PalletTown_Khanto_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


PalletTown_ProfOak::
# 20 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 21 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 22 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_ProfOak_Text_0
# 25 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_ProfOak_Text_1
# 27 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_ProfOak_Text_2
# 30 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_ProfOak_Text_3
# 32 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Mom::
# 38 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 39 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 40 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Mom_Text_0
# 42 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Rival::
# 48 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 49 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 50 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Rival_Text_0
# 54 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Woman::
# 60 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 61 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 62 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Woman_Text_0
# 65 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Man::
# 70 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 71 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 72 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Man_Text_0
# 74 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_Fisherman::
# 79 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 80 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 81 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_Fisherman_Text_0
# 84 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_TownSign::
# 93 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 94 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 95 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_TownSign_Text_0
# 96 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_OakLabSign::
# 101 "data/maps/PalletTown_Khanto/scripts.pory"
	lock
# 102 "data/maps/PalletTown_Khanto/scripts.pory"
	faceplayer
# 103 "data/maps/PalletTown_Khanto/scripts.pory"
	msgbox PalletTown_OakLabSign_Text_0
# 104 "data/maps/PalletTown_Khanto/scripts.pory"
	release
	end


PalletTown_ProfOak_Text_0:
# 22 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Ah, you must be {PLAYER}!\n"
	.string "Your mother called ahead.\l"
	.string "She said you'd be arriving from Hoenn.$"

PalletTown_ProfOak_Text_1:
# 25 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "I'm PROFESSOR OAK.\n"
	.string "I study POKÉMON here in KANTO.$"

PalletTown_ProfOak_Text_2:
# 27 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Your father mentioned you'd be coming.\n"
	.string "He's in VIRIDIAN CITY - but before you\l"
	.string "head out, you'll need a POKÉMON of your own.$"

PalletTown_ProfOak_Text_3:
# 30 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Come see me in my lab just up ahead.\n"
	.string "I'll set you up with a starter POKÉMON!$"

PalletTown_Mom_Text_0:
# 40 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Hello, dear! \n"
	.string "Take a rest before you head out.$"

PalletTown_Rival_Text_0:
# 50 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "{PLAYER}! \n"
	.string "You're still here?\l"
	.string "I'm going to be the very best,\l"
	.string "you know!$"

PalletTown_Woman_Text_0:
# 62 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Welcome to Pallet Town!\n"
	.string "It's a quiet little town,\l"
	.string "but we love it.$"

PalletTown_Man_Text_0:
# 72 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "Prof. Oak's lab is up ahead.\n"
	.string "He's a world-famous Pokémon researcher!$"

PalletTown_Fisherman_Text_0:
# 81 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "If you walk in tall grass,\n"
	.string "wild Pokémon will appear.\l"
	.string "Be sure to have some Pokéballs handy!$"

PalletTown_TownSign_Text_0:
# 95 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "PALLET TOWN\lA place of new beginnings.$"

PalletTown_OakLabSign_Text_0:
# 103 "data/maps/PalletTown_Khanto/scripts.pory"
	.string "OAK POKÉMON RESEARCH LAB\lWhere dreams begin.$"
