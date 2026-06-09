DiglettsCave_B1F_Khanto_MapScripts::
	.byte 0

@ Hiker trainer (Alan - Geodude/Nosepass/Graveler lv22)
DiglettsCave_B1F_Khanto_EventScript_Hiker::
	trainerbattle_single TRAINER_ALAN, DiglettsCave_B1F_Khanto_Text_HikerIntro, DiglettsCave_B1F_Khanto_Text_HikerDefeat
	msgbox DiglettsCave_B1F_Khanto_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end

DiglettsCave_B1F_Khanto_Text_HikerIntro:
	.string "Heheh! This cave is full of\n"
	.string "DIGLETT! Don't step on them!$"

DiglettsCave_B1F_Khanto_Text_HikerDefeat:
	.string "Yowch! You're tougher than\n"
	.string "a DIGLETT's head!$"

DiglettsCave_B1F_Khanto_Text_HikerPostBattle:
	.string "I've been digging in this cave\n"
	.string "for years. The DIGLETT here are\n"
	.string "unusually feisty today!$"

@ ----- Excavator Guards (Helix Quest gate) -----
DiglettsCave_B1F_Khanto_EventScript_Excavator1::
	lock
	faceplayer
	goto_if_set FLAG_ACCEPTED_HELIX_FOSSIL_QUEST, DiglettsCave_B1F_Khanto_EventScript_Excavator1Pass
	msgbox DiglettsCave_B1F_Khanto_Text_ExcavatorBlock, MSGBOX_DEFAULT
	closemessage
	applymovement 3, DiglettsCave_B1F_Khanto_Movement_ExcavatorStepForward
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, DiglettsCave_B1F_Khanto_Movement_PlayerTurnBack
	waitmovement 0
	applymovement 3, DiglettsCave_B1F_Khanto_Movement_ExcavatorStepBack
	waitmovement 0
	release
	end

DiglettsCave_B1F_Khanto_EventScript_Excavator1Pass::
	msgbox DiglettsCave_B1F_Khanto_Text_ExcavatorPass, MSGBOX_DEFAULT
	closemessage
	applymovement 3, DiglettsCave_B1F_Khanto_Movement_Excavator1StepBack4
	waitmovement 0
	release
	end

DiglettsCave_B1F_Khanto_EventScript_Excavator2::
	lock
	faceplayer
	goto_if_set FLAG_ACCEPTED_HELIX_FOSSIL_QUEST, DiglettsCave_B1F_Khanto_EventScript_Excavator2Pass
	msgbox DiglettsCave_B1F_Khanto_Text_ExcavatorBlock, MSGBOX_DEFAULT
	closemessage
	applymovement 4, DiglettsCave_B1F_Khanto_Movement_ExcavatorStepForward
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, DiglettsCave_B1F_Khanto_Movement_PlayerTurnBack
	waitmovement 0
	applymovement 4, DiglettsCave_B1F_Khanto_Movement_ExcavatorStepBack
	waitmovement 0
	release
	end

DiglettsCave_B1F_Khanto_EventScript_Excavator2Pass::
	msgbox DiglettsCave_B1F_Khanto_Text_ExcavatorPass, MSGBOX_DEFAULT
	closemessage
	applymovement 4, DiglettsCave_B1F_Khanto_Movement_Excavator2StepBack4
	waitmovement 0
	release
	end

DiglettsCave_B1F_Khanto_Movement_ExcavatorStepForward:
	walk_down
	step_end

DiglettsCave_B1F_Khanto_Movement_ExcavatorStepBack:
	walk_up
	step_end

DiglettsCave_B1F_Khanto_Movement_Excavator1StepBack4:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DiglettsCave_B1F_Khanto_Movement_Excavator2StepBack4:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DiglettsCave_B1F_Khanto_Movement_PlayerTurnBack:
	walk_up
	walk_up
	step_end

DiglettsCave_B1F_Khanto_Text_ExcavatorBlock:
	.string "Hey! You can't go back there!\p"
	.string "We're digging for ancient artifacts.\p"
	.string "Unless you've got permission from\n"
	.string "the PEWTER MUSEUM, turn around!$"

DiglettsCave_B1F_Khanto_Text_ExcavatorPass:
	.string "Oh! A note from the MUSEUM CURATOR?\p"
	.string "Well, why didn't you say so!\p"
	.string "Go on through - but watch your\n"
	.string "step. We've been digging deep!$"

@ ----- Ditto Encounter (Helix Quest completion) -----
DiglettsCave_B1F_Khanto_EventScript_Ditto::
	lock
	faceplayer
	msgbox DiglettsCave_B1F_Khanto_Text_DittoFound, MSGBOX_DEFAULT
	setwildbattle SPECIES_DITTO, 20
	dowildbattle
	fadescreen FADE_TO_BLACK
	closemessage
	fadescreen FADE_FROM_BLACK
	setflag FLAG_HELIX_QUEST_COMPLETE
	setflag FLAG_HIDE_DIGLETTS_CAVE_DITTO
	removeobject 5
	release
	end

DiglettsCave_B1F_Khanto_Text_DittoFound:
	.string "A strange, trembling mass sits\n"
	.string "in the middle of the excavation...\p"
	.string "It's staring right at you!$"
