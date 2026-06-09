PalletTown_ProfessorOaksLab_MapScripts::
# 3 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
	return

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	return

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
# 8 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	return

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call OaksLab_EventScript_IntroScene
	return


PalletTown_ProfessorOaksLab_EventScript_Oak::
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_Oak_Text_0
# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


OaksLab_EventScript_IntroScene::
# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_0
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_1
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_2
# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_3
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_4
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_5
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 71 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	multichoicedefault 0, 0, 0, 2, FALSE
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1:
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call OaksLab_EventScript_GiveStarter
	return


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	multichoicedefault 0, 0, 0, 2, FALSE
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1:
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call OaksLab_EventScript_GiveStarter
	return


PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	multichoicedefault 0, 0, 0, 2, FALSE
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1:
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call OaksLab_EventScript_GiveStarter
	return


OaksLab_EventScript_GiveStarter::
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq OaksLab_EventScript_GiveStarter_2
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq OaksLab_EventScript_GiveStarter_5
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
OaksLab_EventScript_GiveStarter_1:
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_NONE
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_STARTER_MON, VAR_TEMP_2
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_GiveStarter_Text_0
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_GiveStarter_Text_1
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end

OaksLab_EventScript_GiveStarter_2:
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
	goto OaksLab_EventScript_GiveStarter_1

OaksLab_EventScript_GiveStarter_5:
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
	goto OaksLab_EventScript_GiveStarter_1


PalletTown_ProfessorOaksLab_EventScript_Oak_Text_0:
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Welcome to my lab, {PLAYER}!\n"
	.string "Feel free to look around.$"

OaksLab_EventScript_IntroScene_Text_0:
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Ah, {PLAYER}!\n"
	.string "Right on time!\l"
	.string "I was hoping you'd come by today.$"

OaksLab_EventScript_IntroScene_Text_1:
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: You see, {PLAYER},\n"
	.string "I need your help with something\l"
	.string "very important.\l"
	.string "I've been researching a legendary\l"
	.string "Pokémon that lives atop\l"
	.string "MOUNT SILVER.\l"
	.string "Its power is immense-\l"
	.string "I believe studying it could\l"
	.string "unlock secrets about Pokémon\l"
	.string "we've never understood before.$"

OaksLab_EventScript_IntroScene_Text_2:
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: However, MOUNT SILVER\n"
	.string "is blocked off by the\l"
	.string "POKÉMON LEAGUE.\l"
	.string "Only the strongest trainers\l"
	.string "are allowed past the checkpoint.\l"
	.string "To get there, you must first\l"
	.string "defeat all eight GYM LEADERS\l"
	.string "and challenge the\l"
	.string "POKÉMON LEAGUE.$"

OaksLab_EventScript_IntroScene_Text_3:
# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: It won't be easy.\n"
	.string "The road ahead is long,\l"
	.string "and the Gym Leaders of KANTO\l"
	.string "are no pushovers.\l"
	.string "But I believe you have what it\l"
	.string "takes, {PLAYER}.$"

OaksLab_EventScript_IntroScene_Text_4:
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Of course, you can't start\n"
	.string "a journey empty-handed!\l"
	.string "That's why I've prepared\l"
	.string "something for you.$"

OaksLab_EventScript_IntroScene_Text_5:
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Behold!\n"
	.string "These three POKé BALLS each\l"
	.string "contain a powerful Pokémon.\l"
	.string "Choose one to be your partner\l"
	.string "on this journey.$"

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0:
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's a POKé BALL containing\n"
	.string "BULBASAUR, the Grass type.\l"
	.string "Would you like to choose\l"
	.string "BULBASAUR as your partner?$"

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1:
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Take your time, {PLAYER}.\n"
	.string "Choose the one that speaks to you.$"

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0:
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's a POKé BALL containing\n"
	.string "CHARMANDER, the Fire type.\l"
	.string "Would you like to choose\l"
	.string "CHARMANDER as your partner?$"

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0:
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's a POKé BALL containing\n"
	.string "SQUIRTLE, the Water type.\l"
	.string "Would you like to choose\l"
	.string "SQUIRTLE as your partner?$"

OaksLab_EventScript_GiveStarter_Text_0:
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Excellent choice!\n"
	.string "That Pokémon is now yours.\l"
	.string "Take good care of it,\l"
	.string "and it will be your most\l"
	.string "loyal friend on this journey.$"

OaksLab_EventScript_GiveStarter_Text_1:
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Now go, {PLAYER}!\n"
	.string "The world of Pokémon awaits.\l"
	.string "Defeat the Gym Leaders,\l"
	.string "conquer the LEAGUE,\l"
	.string "and meet me at\l"
	.string "MOUNT SILVER.\l"
	.string "I'll be waiting.$"
