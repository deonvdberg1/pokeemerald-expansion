@ Pallet Town — Prof. Oak's Lab (Khanto)
@ Map: MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB_KHANTO

PalletTown_ProfessorOaksLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
	.byte 0

PalletTown_ProfessorOaksLab_OnTransition::
	call_if_eq VAR_TEMP_0, 0, PalletTown_ProfessorOaksLab_EventScript_ReadyOak
	end

PalletTown_ProfessorOaksLab_EventScript_ReadyOak::
	setobjectxyperm 1, 6, 9
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

PalletTown_ProfessorOaksLab_OnFrame::
	map_script_2 VAR_TEMP_0, 0, PalletTown_ProfessorOaksLab_EventScript_IntroScene
	.2byte 0

@ ----- Intro Scene -----
PalletTown_ProfessorOaksLab_EventScript_IntroScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PalletTown_ProfessorOaksLab_Text_Intro1, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_Intro2, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_Intro3, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_Intro4, MSGBOX_DEFAULT
	setvar VAR_TEMP_0, 1
	releaseall
	end

@ ----- Starter Poké Balls -----
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
	lock
	faceplayer
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
	msgbox PalletTown_ProfessorOaksLab_Text_WantBulbasaur, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_GiveStarter
	msgbox PalletTown_ProfessorOaksLab_Text_TakeYourTime, MSGBOX_DEFAULT
	release
	end

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
	lock
	faceplayer
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
	msgbox PalletTown_ProfessorOaksLab_Text_WantCharmander, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_GiveStarter
	msgbox PalletTown_ProfessorOaksLab_Text_TakeYourTime, MSGBOX_DEFAULT
	release
	end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
	lock
	faceplayer
	setvar VAR_TEMP_1, 2
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
	msgbox PalletTown_ProfessorOaksLab_Text_WantSquirtle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_GiveStarter
	msgbox PalletTown_ProfessorOaksLab_Text_TakeYourTime, MSGBOX_DEFAULT
	release
	end

@ ----- Give Starter -----
PalletTown_ProfessorOaksLab_EventScript_GiveStarter::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	givemon VAR_TEMP_2, 5, ITEM_NONE
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	msgbox PalletTown_ProfessorOaksLab_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

PalletTown_ProfessorOaksLab_EventScript_StarterGiven::
	fadescreen FADE_TO_BLACK
	removeobject 2
	removeobject 3
	removeobject 4
	fadescreen FADE_FROM_BLACK
	setvar VAR_STARTER_MON, VAR_TEMP_2
	msgbox PalletTown_ProfessorOaksLab_Text_GreatChoice, MSGBOX_DEFAULT
	setflag FLAG_SYS_POKEDEX_GET
	msgbox PalletTown_ProfessorOaksLab_Text_HereIsPokedex, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	msgbox PalletTown_ProfessorOaksLab_Text_HereAreBalls, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox PalletTown_ProfessorOaksLab_Text_RunningShoes, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_HeadToViridian, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_GoodLuck, MSGBOX_DEFAULT
	setvar VAR_TEMP_0, 2
	releaseall
	end

@ ----- Oak NPC (post-starter) -----
PalletTown_ProfessorOaksLab_EventScript_Oak::
	lock
	faceplayer
	goto_if_eq VAR_TEMP_0, 0, PalletTown_ProfessorOaksLab_EventScript_OakIntro
	msgbox PalletTown_ProfessorOaksLab_Text_OakPostGame, MSGBOX_DEFAULT
	release
	end

PalletTown_ProfessorOaksLab_EventScript_OakIntro::
	msgbox PalletTown_ProfessorOaksLab_Text_OakGreeting, MSGBOX_DEFAULT
	release
	end

@ ===== TEXT =====

PalletTown_ProfessorOaksLab_Text_OakGreeting:
	.string "OAK: Welcome to my lab, {PLAYER}!\n"
	.string "Feel free to look around.$"

PalletTown_ProfessorOaksLab_Text_Intro1:
	.string "OAK: Ah, {PLAYER}!\n"
	.string "I've been expecting you.\p"
	.string "Your mother called from HOENN\n"
	.string "and told me you were coming.$"

PalletTown_ProfessorOaksLab_Text_Intro2:
	.string "OAK: I'm PROFESSOR OAK.\n"
	.string "I study POKÉMON here in KANTO.\p"
	.string "Your father is in VIRIDIAN CITY\n"
	.string "waiting for you.$"

PalletTown_ProfessorOaksLab_Text_Intro3:
	.string "OAK: But before you head out,\n"
	.string "you can't travel without a\n"
	.string "POKÉMON of your own!$"

PalletTown_ProfessorOaksLab_Text_Intro4:
	.string "OAK: I have three POKÉMON here.\n"
	.string "Each has different strengths.\p"
	.string "Choose the one that feels right\n"
	.string "to be your partner!$"

PalletTown_ProfessorOaksLab_Text_WantBulbasaur:
	.string "It's a POKé BALL containing\n"
	.string "BULBASAUR, the GRASS type.\p"
	.string "Would you like BULBASAUR?$"

PalletTown_ProfessorOaksLab_Text_WantCharmander:
	.string "It's a POKé BALL containing\n"
	.string "CHARMANDER, the FIRE type.\p"
	.string "Would you like CHARMANDER?$"

PalletTown_ProfessorOaksLab_Text_WantSquirtle:
	.string "It's a POKé BALL containing\n"
	.string "SQUIRTLE, the WATER type.\p"
	.string "Would you like SQUIRTLE?$"

PalletTown_ProfessorOaksLab_Text_TakeYourTime:
	.string "Take your time, {PLAYER}.\n"
	.string "Choose the one that speaks to you.$"

PalletTown_ProfessorOaksLab_Text_NoRoom:
	.string "Your party and PC are full!\n"
	.string "Make some room and come back.$"

PalletTown_ProfessorOaksLab_Text_GreatChoice:
	.string "OAK: Excellent choice!\p"
	.string "That POKÉMON comes from a strong\n"
	.string "lineage. Take good care of it!$"

PalletTown_ProfessorOaksLab_Text_HereIsPokedex:
	.string "OAK: Now then, you'll need\n"
	.string "this as well.\p"
	.string "That's a POKÉDEX!\n"
	.string "It records data on POKÉMON\l"
	.string "you see and catch.\p"
	.string "I'd like you to complete it\n"
	.string "as you explore KANTO!$"

PalletTown_ProfessorOaksLab_Text_HereAreBalls:
	.string "OAK: Here are some POKé BALLS.\n"
	.string "You'll need them to catch\l"
	.string "wild POKÉMON on your journey.$"

PalletTown_ProfessorOaksLab_Text_RunningShoes:
	.string "OAK: One more thing! I almost\n"
	.string "forgot.\p"
	.string "Here's a pair of RUNNING SHOES.\n"
	.string "Press the B BUTTON while moving\l"
	.string "to dash at high speed!\p"
	.string "They'll make traveling across KANTO\n"
	.string "much faster!$"

PalletTown_ProfessorOaksLab_Text_HeadToViridian:
	.string "OAK: Head north through ROUTE 1\n"
	.string "to VIRIDIAN CITY.\p"
	.string "Your father is waiting there.\p"
	.string "And remember - to reach\n"
	.string "MOUNT SILVER, you'll need to\l"
	.string "defeat all eight KANTO GYM\l"
	.string "LEADERS and the POKÉMON LEAGUE!$"

PalletTown_ProfessorOaksLab_Text_GoodLuck:
	.string "OAK: Good luck, {PLAYER}!\n"
	.string "I believe in you!$"

PalletTown_ProfessorOaksLab_Text_OakPostGame:
	.string "OAK: How's your journey going?\p"
	.string "Keep working on that POKÉDEX!\n"
	.string "There's still so much to discover!$"
