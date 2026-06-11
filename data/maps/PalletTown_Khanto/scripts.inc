@ Pallet Town — Scripts (Khanto)
@ Map: MAP_PALLET_TOWN_KHANTO

PalletTown_Khanto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_Khanto_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Khanto_OnFrame
	.byte 0

PalletTown_Khanto_OnTransition::
	call_if_eq VAR_TEMP_5, 1, PalletTown_EventScript_SetTruckArrival
	end

PalletTown_EventScript_SetTruckArrival::
	setvar VAR_TEMP_5, 0
	return

PalletTown_Khanto_OnFrame::
	map_script_2 VAR_TEMP_5, 1, PalletTown_EventScript_TruckArrivalScene
	.2byte 0

PalletTown_EventScript_TruckArrivalScene::
	lockall
	msgbox PalletTown_Text_TruckArrival, MSGBOX_DEFAULT
	closemessage
	msgbox PalletTown_Text_SeeOak, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_5, 0
	releaseall
	end

@ ----- NPC Scripts -----

PalletTown_ProfOak::
	lock
	faceplayer
	msgbox PalletTown_Text_OakGreeting, MSGBOX_DEFAULT
	msgbox PalletTown_Text_OakLabDirections, MSGBOX_DEFAULT
	release
	end

PalletTown_Woman::
	lock
	faceplayer
	msgbox PalletTown_Text_WomanGreeting, MSGBOX_DEFAULT
	release
	end

PalletTown_Man::
	lock
	faceplayer
	msgbox PalletTown_Text_ManGreeting, MSGBOX_DEFAULT
	release
	end

PalletTown_Fisherman::
	lock
	faceplayer
	msgbox PalletTown_Text_FishermanTips, MSGBOX_DEFAULT
	release
	end

@ ----- Signs -----

PalletTown_TownSign::
	lock
	faceplayer
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_OakLabSign::
	lock
	faceplayer
	msgbox PalletTown_Text_OakLabSign, MSGBOX_SIGN
	end

@ ===== TEXT =====

PalletTown_Text_TruckArrival:
	.string "You arrived in PALLET TOWN!\p"
	.string "The truck driver waves goodbye\n"
	.string "and drives off.$"

PalletTown_Text_SeeOak:
	.string "There's PROFESSOR OAK's lab\n"
	.string "just ahead.\p"
	.string "Better go introduce yourself.$"

PalletTown_Text_OakGreeting:
	.string "Ah, you must be {PLAYER}!\p"
	.string "Your mother called ahead.\n"
	.string "I've been expecting you!\p"
	.string "Come see me in my lab\n"
	.string "just up ahead.$"

PalletTown_Text_OakLabDirections:
	.string "I'll set you up with a\n"
	.string "POKEMON of your own!$"

PalletTown_Text_WomanGreeting:
	.string "Welcome to PALLET TOWN!\n"
	.string "It's a quiet little town,\n"
	.string "but we love it.$"

PalletTown_Text_ManGreeting:
	.string "PROF. OAK's lab is up ahead.\n"
	.string "He's a world-famous POKEMON\n"
	.string "researcher!$"

PalletTown_Text_FishermanTips:
	.string "If you walk in tall grass,\n"
	.string "wild POKEMON will appear.\p"
	.string "Be sure to have some\n"
	.string "POKE BALLS handy!$"

PalletTown_Text_TownSign:
	.string "PALLET TOWN\n"
	.string "A place of new beginnings.$"

PalletTown_Text_OakLabSign:
	.string "OAK POKEMON RESEARCH LAB\n"
	.string "Where dreams begin.$"
