	.equ FOUND_FIRST_SWITCH_KHANTO, FLAG_TEMP_2
	.equ SWITCH1_ID_KHANTO,         VAR_0x8004
	.equ SWITCH2_ID_KHANTO,         VAR_0x8005
	.equ TRASH_CAN_ID_KHANTO,       VAR_0x8008

VermilionCity_Gym_Khanto_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_Khanto_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_Khanto_OnTransition
	.byte 0

VermilionCity_Gym_Khanto_OnLoad::
	call_if_set FOUND_FIRST_SWITCH_KHANTO, VermilionCity_Gym_Khanto_EventScript_SetOneBeamOff
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_Khanto_EventScript_SetBeamsOff
	end

VermilionCity_Gym_Khanto_EventScript_SetOneBeamOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
	return

VermilionCity_Gym_Khanto_EventScript_SetBeamsOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
	return

VermilionCity_Gym_Khanto_OnTransition::
	call VermilionCity_Gym_Khanto_EventScript_InitTrashCans
	end

VermilionCity_Gym_Khanto_EventScript_InitTrashCans::
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, Common_EventScript_NopReturn
	special SetVermilionTrashCans
	copyvar VAR_TEMP_0, SWITCH1_ID_KHANTO
	copyvar VAR_TEMP_1, SWITCH2_ID_KHANTO
	return

VermilionCity_Gym_Khanto_EventScript_TrashCan1::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 1
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan2::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 2
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan3::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 3
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan4::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 4
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan5::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 5
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan6::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 6
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan7::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 7
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan8::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 8
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan9::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 9
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan10::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 10
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan11::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 11
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan12::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 12
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan13::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 13
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan14::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 14
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan15::
	lockall
	setvar TRASH_CAN_ID_KHANTO, 15
	goto VermilionCity_Gym_Khanto_EventScript_TrashCan
	end

VermilionCity_Gym_Khanto_EventScript_TrashCan::
	copyvar VAR_0x8004, VAR_TEMP_0
	copyvar VAR_0x8005, VAR_TEMP_1
	special TrashCanRandCans
	copyvar VAR_TEMP_0, VAR_0x8004
	copyvar VAR_TEMP_1, VAR_0x8005
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_Khanto_EventScript_TrashCanBeamsAlreadyOff
	call VermilionCity_Gym_Khanto_EventScript_FoundSwitch
	goto_if_eq VAR_0x8006, FIRST_SWITCH_VERMILION_GYM, VermilionCity_Gym_Khanto_EventScript_FoundFirstTrashCanSwitch
	goto_if_eq VAR_0x8006, SECOND_SWITCH_VERMILION_GYM, VermilionCity_Gym_Khanto_EventScript_FoundSecondTrashCanSwitch
	goto VermilionCity_Gym_Khanto_EventScript_WrongTrashCan

VermilionCity_Gym_Khanto_EventScript_TrashCanBeamsAlreadyOff::
	msgbox VermilionCity_Gym_Khanto_Text_BeamsAreOffWeCanGoThrough
	releaseall
	end

VermilionCity_Gym_Khanto_EventScript_FoundSwitch::
	special SelectVermilionTrashCan
	return

VermilionCity_Gym_Khanto_EventScript_FoundFirstTrashCanSwitch::
	msgbox VermilionCity_Gym_Khanto_Text_FirstTrashCanSwitch
	setflag FOUND_FIRST_SWITCH_KHANTO
	call VermilionCity_Gym_Khanto_EventScript_SetOneBeamOff
	special DrawWholeMapView
	releaseall
	end

VermilionCity_Gym_Khanto_EventScript_FoundSecondTrashCanSwitch::
	msgbox VermilionCity_Gym_Khanto_Text_FoundSecondTrashCanSwitch
	call VermilionCity_Gym_Khanto_EventScript_SetBeamsOff
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
	special DrawWholeMapView
	releaseall
	end

VermilionCity_Gym_Khanto_EventScript_WrongTrashCan::
	msgbox VermilionCity_Gym_Khanto_Text_WrongTrashCan
	releaseall
	end

VermilionCity_Gym_Khanto_EventScript_LtSurge::
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Khanto_Text_LtSurgeIntro, VermilionCity_Gym_Khanto_Text_LtSurgeDefeat, VermilionCity_Gym_Khanto_EventScript_DefeatedLtSurge, NO_MUSIC
	goto_if_unset FLAG_GOT_TM34_FROM_LT_SURGE, VermilionCity_Gym_Khanto_EventScript_GiveTM34
	msgbox VermilionCity_Gym_Khanto_Text_LtSurgePostBattle
	release
	end

VermilionCity_Gym_Khanto_EventScript_DefeatedLtSurge::
	setflag FLAG_DEFEATED_LT_SURGE
	setflag FLAG_BADGE03_GET
	set_gym_trainers_frlg 3
	goto VermilionCity_Gym_Khanto_EventScript_GiveTM34
	end

VermilionCity_Gym_Khanto_EventScript_GiveTM34::
	msgbox VermilionCity_Gym_Khanto_Text_ExplainThunderBadge
	checkitemspace ITEM_TM34
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_Khanto_EventScript_NoRoomForTM34
	giveitem_msg VermilionCity_Gym_Khanto_Text_ReceivedTM34FromLtSurge, ITEM_TM34
	setflag FLAG_GOT_TM34_FROM_LT_SURGE
	msgbox VermilionCity_Gym_Khanto_Text_ExplainTM34
	release
	end

VermilionCity_Gym_Khanto_EventScript_NoRoomForTM34::
	msgbox VermilionCity_Gym_Khanto_Text_MakeSpaceForThis
	release
	end

VermilionCity_Gym_Khanto_EventScript_Dwayne::
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Khanto_Text_DwayneIntro, VermilionCity_Gym_Khanto_Text_DwayneDefeat
	msgbox VermilionCity_Gym_Khanto_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_Khanto_EventScript_Baily::
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Khanto_Text_BailyIntro, VermilionCity_Gym_Khanto_Text_BailyDefeat
	msgbox VermilionCity_Gym_Khanto_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_Khanto_EventScript_Tucker::
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Khanto_Text_TuckerIntro, VermilionCity_Gym_Khanto_Text_TuckerDefeat
	msgbox VermilionCity_Gym_Khanto_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox VermilionCity_Gym_Khanto_Text_GymGuyAdvice
	release
	end

VermilionCity_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox VermilionCity_Gym_Khanto_Text_YoureChampMaterial
	release
	end

VermilionCity_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox VermilionCity_Gym_Khanto_Text_GymStatue
	releaseall
	end

VermilionCity_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox VermilionCity_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

VermilionCity_Gym_Khanto_Text_FirstTrashCanSwitch::
	.string "The first switch was activated!\p"
	.string "The electric barrier weakened!$"

VermilionCity_Gym_Khanto_Text_FoundSecondTrashCanSwitch::
	.string "The second switch was activated!\p"
	.string "The electric barrier dropped!$"

VermilionCity_Gym_Khanto_Text_WrongTrashCan::
	.string "Nope! Nothing here but trash…\p"
	.string "You'd better look for the\n"
	.string "second switch elsewhere!$"

VermilionCity_Gym_Khanto_Text_BeamsAreOffWeCanGoThrough::
	.string "The barriers are all down.\n"
	.string "We can go through now!$"

VermilionCity_Gym_Khanto_Text_LtSurgeIntro::
	.string "Hey, kid! What do you think you're\n"
	.string "doing here?\p"
	.string "You won't live to see my POKéMON!\p"
	.string "My ELECTRIC-type POKéMON will\n"
	.string "knock you out!\p"
	.string "They're lightning fast and hit hard!\p"
	.string "Surge, the Lightning American!\n"
	.string "That's who I am!\p"
	.string "Let's go!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

VermilionCity_Gym_Khanto_Text_LtSurgeDefeat::
	.string "Whoa! You're something, kid!\p"
	.string "All right, you've earned the\n"
	.string "THUNDERBADGE!\p"
	.string "{FONT_NORMAL}{PLAYER} received the THUNDERBADGE\n"
	.string "from LT. SURGE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}The THUNDERBADGE boosts your\n"
	.string "POKéMON's SPEED.\p"
	.string "It also lets you use FLY outside\n"
	.string "of battle.\p"
	.string "Here, take this too!$"

VermilionCity_Gym_Khanto_Text_ExplainThunderBadge::
	.string "Take this TM with you!$"

VermilionCity_Gym_Khanto_Text_ReceivedTM34FromLtSurge::
	.string "{PLAYER} received TM34\n"
	.string "from LT. SURGE.$"

VermilionCity_Gym_Khanto_Text_ExplainTM34::
	.string "TM34 contains SHOCK WAVE.\p"
	.string "It's an ELECTRIC-type move that\n"
	.string "never misses.\p"
	.string "Use it on your POKéMON!$"

VermilionCity_Gym_Khanto_Text_MakeSpaceForThis::
	.string "You don't have room for this.$"

VermilionCity_Gym_Khanto_Text_LtSurgePostBattle::
	.string "Kid, you've got real talent.\p"
	.string "I've fought plenty of TRAINERS,\n"
	.string "but you're one of the best.$"

VermilionCity_Gym_Khanto_Text_DwayneIntro::
	.string "I'm just a SAILOR, but I can\n"
	.string "still give you a shock!$"

VermilionCity_Gym_Khanto_Text_DwayneDefeat::
	.string "Shocking!$"

VermilionCity_Gym_Khanto_Text_DwaynePostBattle::
	.string "You handled that electrifying\n"
	.string "battle well.$"

VermilionCity_Gym_Khanto_Text_BailyIntro::
	.string "I'm an ENGINEER. I built this\n"
	.string "gym's electrified barriers!\p"
	.string "Let's see if you can handle\n"
	.string "my POKéMON!$"

VermilionCity_Gym_Khanto_Text_BailyDefeat::
	.string "My circuits overloaded!$"

VermilionCity_Gym_Khanto_Text_BailyPostBattle::
	.string "The switches are hidden in the\n"
	.string "trash cans. Find both to disable\l"
	.string "the barriers!$"

VermilionCity_Gym_Khanto_Text_TuckerIntro::
	.string "A gentleman like myself doesn't\n"
	.string "often engage in battle, but for\l"
	.string "you, I'll make an exception!$"

VermilionCity_Gym_Khanto_Text_TuckerDefeat::
	.string "Most unbecoming…$"

VermilionCity_Gym_Khanto_Text_TuckerPostBattle::
	.string "It appears you've got the right\n"
	.string "attitude for this gym.$"

VermilionCity_Gym_Khanto_Text_GymGuyAdvice::
	.string "Yo! Check this out!\p"
	.string "LT. SURGE uses ELECTRIC-type\n"
	.string "POKéMON.\p"
	.string "They're super fast and hit hard!\p"
	.string "But GROUND-type moves are super\n"
	.string "effective against them!\p"
	.string "Also, search the trash cans for\n"
	.string "hidden switches to open the path!$"

VermilionCity_Gym_Khanto_Text_YoureChampMaterial::
	.string "You did it! The barriers are\n"
	.string "down and SURGE is defeated!$"

VermilionCity_Gym_Khanto_Text_GymStatue::
	.string "VERMILION POKéMON GYM\n"
	.string "LEADER: LT. SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

VermilionCity_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "VERMILION POKéMON GYM\n"
	.string "LEADER: LT. SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

VermilionCity_Gym_Khanto_EventScript_Receptionist::
	msgbox VermilionCity_Gym_Khanto_Text_Receptionist, MSGBOX_NPC
	end

VermilionCity_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the VERMILION GYM!\p"
	.string "LEADER LT. SURGE earned the title\n"
	.string "\"The Lightning American\"!$"
