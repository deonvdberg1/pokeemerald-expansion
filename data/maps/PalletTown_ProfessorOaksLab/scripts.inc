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


PalletTown_ProfessorOaksLab_EventScript_Oak::
# 1 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
	faceplayer
	msgbox PalletTown_ProfessorOaksLab_EventScript_Oak_Text
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Oak_Text::
	.string "Oak: Welcome to my lab, {PLAYER}!\n"
	.string "Feel free to look around.$"


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


OaksLab_EventScript_IntroScene::
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_0
# 27 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_1
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_2
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_3
# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_4
# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_IntroScene_Text_5
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	multichoicedefault 0, 0, 0, 2, FALSE
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1:
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call OaksLab_EventScript_GiveStarter
	return


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	multichoicedefault 0, 0, 0, 2, FALSE
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1:
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call OaksLab_EventScript_GiveStarter
	return


PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	multichoicedefault 0, 0, 0, 2, FALSE
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1:
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call OaksLab_EventScript_GiveStarter
	return


OaksLab_EventScript_GiveStarter::
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq OaksLab_EventScript_GiveStarter_2
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq OaksLab_EventScript_GiveStarter_5
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
OaksLab_EventScript_GiveStarter_1:
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_NONE
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_STARTER_MON, VAR_TEMP_2
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_GiveStarter_Text_0
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox OaksLab_EventScript_GiveStarter_Text_1
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end

OaksLab_EventScript_GiveStarter_2:
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
	goto OaksLab_EventScript_GiveStarter_1

OaksLab_EventScript_GiveStarter_5:
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
	goto OaksLab_EventScript_GiveStarter_1


OaksLab_EventScript_IntroScene_Text_0:
# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Ah, {PLAYER}!\n"
	.string "Right on time!\l"
	.string "I was hoping you'd come by today.$"

OaksLab_EventScript_IntroScene_Text_1:
# 27 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: It won't be easy.\n"
	.string "The road ahead is long,\l"
	.string "and the Gym Leaders of KANTO\l"
	.string "are no pushovers.\l"
	.string "But I believe you have what it\l"
	.string "takes, {PLAYER}.$"

OaksLab_EventScript_IntroScene_Text_4:
# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Of course, you can't start\n"
	.string "a journey empty-handed!\l"
	.string "That's why I've prepared\l"
	.string "something for you.$"

OaksLab_EventScript_IntroScene_Text_5:
# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Behold!\n"
	.string "These three POKé BALLS each\l"
	.string "contain a powerful Pokémon.\l"
	.string "Choose one to be your partner\l"
	.string "on this journey.$"

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0:
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's a POKé BALL containing\n"
	.string "BULBASAUR, the Grass type.\l"
	.string "Would you like to choose\l"
	.string "BULBASAUR as your partner?$"

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_1:
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Take your time, {PLAYER}.\n"
	.string "Choose the one that speaks to you.$"

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0:
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's a POKé BALL containing\n"
	.string "CHARMANDER, the Fire type.\l"
	.string "Would you like to choose\l"
	.string "CHARMANDER as your partner?$"

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0:
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's a POKé BALL containing\n"
	.string "SQUIRTLE, the Water type.\l"
	.string "Would you like to choose\l"
	.string "SQUIRTLE as your partner?$"

OaksLab_EventScript_GiveStarter_Text_0:
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Excellent choice!\n"
	.string "That Pokémon is now yours.\l"
	.string "Take good care of it,\l"
	.string "and it will be your most\l"
	.string "loyal friend on this journey.$"

OaksLab_EventScript_GiveStarter_Text_1:
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Now go, {PLAYER}!\n"
	.string "The world of Pokémon awaits.\l"
	.string "Defeat the Gym Leaders,\l"
	.string "conquer the LEAGUE,\l"
	.string "and meet me at\l"
	.string "MOUNT SILVER.\l"
	.string "I'll be waiting.$"
