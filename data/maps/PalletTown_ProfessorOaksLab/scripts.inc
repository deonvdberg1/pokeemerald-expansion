@ Pallet Town — Prof. Oak's Lab (Khanto)
@ Map: MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB_KHANTO

PalletTown_ProfessorOaksLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
	.byte 0

PalletTown_ProfessorOaksLab_OnTransition::
	call_if_eq VAR_TEMP_0, 0, PalletTown_ProfessorOaksLab_EventScript_ReadyOak
	end

PalletTown_ProfessorOaksLab_EventScript_ReadyOak::
	setobjectxyperm 1, 6, 9
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

@ ----- Oak NPC (press A to talk) -----
PalletTown_ProfessorOaksLab_EventScript_Oak::
	lock
	faceplayer
	goto_if_eq VAR_TEMP_0, 0, PalletTown_ProfessorOaksLab_EventScript_OakIntro
	msgbox PalletTown_ProfessorOaksLab_Text_OakPostGame, MSGBOX_DEFAULT
	release
	end

PalletTown_ProfessorOaksLab_EventScript_OakIntro::
	msgbox PalletTown_ProfessorOaksLab_Text_Intro1, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_Intro2, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_Intro3, MSGBOX_DEFAULT
	msgbox PalletTown_ProfessorOaksLab_Text_Intro4, MSGBOX_DEFAULT
	setvar VAR_TEMP_0, 1
	release
	end

@ ----- Starter Poké Balls -----
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
	lock
	faceplayer
	msgbox PalletTown_ProfessorOaksLab_Text_WantBulbasaur, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_TakeYourTime
	showmonpic SPECIES_BULBASAUR, 10, 3
	msgbox PalletTown_ProfessorOaksLab_Text_AreYouSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_TakeYourTime
	hidemonpic
	givemon SPECIES_BULBASAUR, 5
	goto_if_eq VAR_RESULT, 0, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	goto_if_eq VAR_RESULT, 1, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	goto_if_eq VAR_RESULT, 2, PalletTown_ProfessorOaksLab_EventScript_NoRoom
	release
	end

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
	lock
	faceplayer
	msgbox PalletTown_ProfessorOaksLab_Text_WantCharmander, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_TakeYourTime
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox PalletTown_ProfessorOaksLab_Text_AreYouSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_TakeYourTime
	hidemonpic
	givemon SPECIES_CHARMANDER, 5
	goto_if_eq VAR_RESULT, 0, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	goto_if_eq VAR_RESULT, 1, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	goto_if_eq VAR_RESULT, 2, PalletTown_ProfessorOaksLab_EventScript_NoRoom
	release
	end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
	lock
	faceplayer
	msgbox PalletTown_ProfessorOaksLab_Text_WantSquirtle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_TakeYourTime
	showmonpic SPECIES_SQUIRTLE, 10, 3
	msgbox PalletTown_ProfessorOaksLab_Text_AreYouSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_TakeYourTime
	hidemonpic
	givemon SPECIES_SQUIRTLE, 5
	goto_if_eq VAR_RESULT, 0, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	goto_if_eq VAR_RESULT, 1, PalletTown_ProfessorOaksLab_EventScript_StarterGiven
	goto_if_eq VAR_RESULT, 2, PalletTown_ProfessorOaksLab_EventScript_NoRoom
	release
	end

@ ----- Give Starter Flow -----
PalletTown_ProfessorOaksLab_EventScript_StarterGiven::
	fadescreen FADE_TO_BLACK
	removeobject 2
	removeobject 3
	removeobject 4
	fadescreen FADE_FROM_BLACK
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
	release
	end

@ ===== TEXT =====

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

PalletTown_ProfessorOaksLab_Text_AreYouSure:
	.string "Are you sure you want this\n"
	.string "POKÉMON as your partner?$"

PalletTown_ProfessorOaksLab_EventScript_TakeYourTime::
	msgbox PalletTown_ProfessorOaksLab_Text_TakeYourTime, MSGBOX_DEFAULT
	release
	end

PalletTown_ProfessorOaksLab_Text_TakeYourTime:
	.string "Take your time, {PLAYER}.\n"
	.string "Choose the one that speaks to you.$"

PalletTown_ProfessorOaksLab_EventScript_NoRoom::
	msgbox PalletTown_ProfessorOaksLab_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

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
