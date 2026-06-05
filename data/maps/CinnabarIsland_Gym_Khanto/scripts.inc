CinnabarIsland_Gym_Khanto_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_Khanto_OnLoad
	.byte 0

CinnabarIsland_Gym_Khanto_OnLoad::
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_Khanto_OnLoadOpenAllDoors
	call_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_Khanto_OnLoadOpenDoor1
	call_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_Khanto_OnLoadOpenDoor2
	call_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_Khanto_OnLoadOpenDoor3
	call_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_Khanto_OnLoadOpenDoor4
	call_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_Khanto_OnLoadOpenDoor5
	call_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_Khanto_OnLoadOpenDoor6
	end

CinnabarIsland_Gym_Khanto_OnLoadOpenAllDoors::
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor1
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor2
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor3
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor4
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor5
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor6
	end

CinnabarIsland_Gym_Khanto_OnLoadOpenDoor1::
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor1
	return

CinnabarIsland_Gym_Khanto_OnLoadOpenDoor2::
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor2
	return

CinnabarIsland_Gym_Khanto_OnLoadOpenDoor3::
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor3
	return

CinnabarIsland_Gym_Khanto_OnLoadOpenDoor4::
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor4
	return

CinnabarIsland_Gym_Khanto_OnLoadOpenDoor5::
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor5
	return

CinnabarIsland_Gym_Khanto_OnLoadOpenDoor6::
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor6
	return

CinnabarIsland_Gym_Khanto_EventScript_Blaine::
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Khanto_Text_BlaineIntro, CinnabarIsland_Gym_Khanto_Text_BlaineDefeat, CinnabarIsland_Gym_Khanto_EventScript_DefeatedBlaine, NO_MUSIC
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_Khanto_EventScript_GiveTM38
	msgbox CinnabarIsland_Gym_Khanto_Text_BlainePostBattle
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_DefeatedBlaine::
	setflag FLAG_DEFEATED_BLAINE
	setflag FLAG_BADGE07_GET
	set_gym_trainers_frlg 7
	goto CinnabarIsland_Gym_Khanto_EventScript_GiveTM38
	end

CinnabarIsland_Gym_Khanto_EventScript_GiveTM38::
	msgbox CinnabarIsland_Gym_Khanto_Text_ExplainVolcanoBadge
	checkitemspace ITEM_TM38
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_Khanto_EventScript_NoRoomForTM38
	giveitem_msg CinnabarIsland_Gym_Khanto_Text_ReceivedTM38FromBlaine, ITEM_TM38
	setflag FLAG_GOT_TM38_FROM_BLAINE
	msgbox CinnabarIsland_Gym_Khanto_Text_FireBlastIsUltimateFireMove
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_NoRoomForTM38::
	msgbox CinnabarIsland_Gym_Khanto_Text_MakeSpaceForThis
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_Erik::
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Khanto_Text_ErikIntro, CinnabarIsland_Gym_Khanto_Text_ErikDefeat
	msgbox CinnabarIsland_Gym_Khanto_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
	end

CinnabarIsland_Gym_Khanto_EventScript_Avery::
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Khanto_Text_AveryIntro, CinnabarIsland_Gym_Khanto_Text_AveryDefeat, CinnabarIsland_Gym_Khanto_EventScript_DefeatedAvery
	msgbox CinnabarIsland_Gym_Khanto_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
	end

CinnabarIsland_Gym_Khanto_EventScript_DefeatedAvery::
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_Khanto_EventScript_Quiz2CompleteTrainer
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz2CompleteTrainer::
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz2Complete
	return

CinnabarIsland_Gym_Khanto_EventScript_Derek::
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Khanto_Text_DerekIntro, CinnabarIsland_Gym_Khanto_Text_DerekDefeat, CinnabarIsland_Gym_Khanto_EventScript_DefeatedDerek
	msgbox CinnabarIsland_Gym_Khanto_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end

CinnabarIsland_Gym_Khanto_EventScript_DefeatedDerek::
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_Khanto_EventScript_Quiz4CompleteTrainer
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz4CompleteTrainer::
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz4Complete
	return

CinnabarIsland_Gym_Khanto_EventScript_Zac::
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Khanto_Text_ZacIntro, CinnabarIsland_Gym_Khanto_Text_ZacDefeat, CinnabarIsland_Gym_Khanto_EventScript_DefeatedZac
	msgbox CinnabarIsland_Gym_Khanto_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
	end

CinnabarIsland_Gym_Khanto_EventScript_DefeatedZac::
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_Khanto_EventScript_Quiz6CompleteTrainer
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz6CompleteTrainer::
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz6Complete
	return

CinnabarIsland_Gym_Khanto_EventScript_Quinn::
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Khanto_Text_QuinnIntro, CinnabarIsland_Gym_Khanto_Text_QuinnDefeat, CinnabarIsland_Gym_Khanto_EventScript_DefeatedQuinn
	msgbox CinnabarIsland_Gym_Khanto_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
	end

CinnabarIsland_Gym_Khanto_EventScript_DefeatedQuinn::
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_Khanto_EventScript_Quiz1CompleteTrainer
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz1CompleteTrainer::
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz1Complete
	return

CinnabarIsland_Gym_Khanto_EventScript_Ramon::
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Khanto_Text_RamonIntro, CinnabarIsland_Gym_Khanto_Text_RamonDefeat, CinnabarIsland_Gym_Khanto_EventScript_DefeatedRamon
	msgbox CinnabarIsland_Gym_Khanto_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
	end

CinnabarIsland_Gym_Khanto_EventScript_DefeatedRamon::
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_Khanto_EventScript_Quiz3CompleteTrainer
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz3CompleteTrainer::
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz3Complete
	return

CinnabarIsland_Gym_Khanto_EventScript_Dusty::
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Khanto_Text_DustyIntro, CinnabarIsland_Gym_Khanto_Text_DustyDefeat, CinnabarIsland_Gym_Khanto_EventScript_DefeatedDusty
	msgbox CinnabarIsland_Gym_Khanto_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
	end

CinnabarIsland_Gym_Khanto_EventScript_DefeatedDusty::
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_Khanto_EventScript_Quiz5CompleteTrainer
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz5CompleteTrainer::
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz5Complete
	return

CinnabarIsland_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox CinnabarIsland_Gym_Khanto_Text_GymGuyAdvice
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox CinnabarIsland_Gym_Khanto_Text_YoureChampMaterial
	release
	end

CinnabarIsland_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox CinnabarIsland_Gym_Khanto_Text_GymStatue
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox CinnabarIsland_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

@ ── Quiz 1 Door Script ──────────────────────────────────────────────

CinnabarIsland_Gym_Khanto_EventScript_Quiz1Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz1
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz1Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz1
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz1::
	msgbox CinnabarIsland_Gym_Khanto_Text_QuizRules
	msgbox CinnabarIsland_Gym_Khanto_Text_Quiz1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_Khanto_EventScript_Quiz1Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_Khanto_EventScript_Quiz1Incorrect
	end

CinnabarIsland_Gym_Khanto_EventScript_CorrectAnswer::
	playfanfare MUS_LEVEL_UP
	waitfanfare
	msgbox CinnabarIsland_Gym_Khanto_Text_CorrectGoOnThrough
	return

CinnabarIsland_Gym_Khanto_EventScript_IncorrectAnswer::
	waitse
	playse SE_BOO
	waitse
	msgbox CinnabarIsland_Gym_Khanto_Text_SorryBadCall
	closemessage
	return

CinnabarIsland_Gym_Khanto_EventScript_Quiz1Correct::
	call CinnabarIsland_Gym_Khanto_EventScript_CorrectAnswer
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz1Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz1Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor1
	special DrawWholeMapView
	setflag FLAG_CINNABAR_GYM_QUIZ_1
	return

CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen::
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz1Incorrect::
	call CinnabarIsland_Gym_Khanto_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Khanto_EventScript_BattleQuinnFromQuiz
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_BattleQuinnFromQuiz::
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_Khanto_EventScript_QuinnApproachLeft
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_Khanto_EventScript_QuinnApproachRight
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CinnabarIsland_Gym_Khanto_Text_QuinnIntro
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Khanto_Text_QuinnDefeat
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz1Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_QuinnApproachLeft::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Khanto_Movement_QuinnApproachLeft
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_EventScript_QuinnApproachRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Khanto_Movement_QuinnApproachRight
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_Movement_QuinnApproachLeft::
	walk_left
	walk_left
	step_end

CinnabarIsland_Gym_Khanto_Movement_QuinnApproachRight::
	walk_left
	step_end

@ ── Quiz 2 Door Script ──────────────────────────────────────────────

CinnabarIsland_Gym_Khanto_EventScript_Quiz2Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz2
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz2Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz2
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz2::
	msgbox CinnabarIsland_Gym_Khanto_Text_Quiz2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_Khanto_EventScript_Quiz2Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_Khanto_EventScript_Quiz2Incorrect
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz2Correct::
	call CinnabarIsland_Gym_Khanto_EventScript_CorrectAnswer
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz2Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz2Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor2
	special DrawWholeMapView
	setflag FLAG_CINNABAR_GYM_QUIZ_2
	return

CinnabarIsland_Gym_Khanto_EventScript_Quiz2Incorrect::
	call CinnabarIsland_Gym_Khanto_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Khanto_EventScript_BattleAveryFromQuiz
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_BattleAveryFromQuiz::
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_Khanto_EventScript_AveryApproachLeft
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_Khanto_EventScript_AveryApproachRight
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CinnabarIsland_Gym_Khanto_Text_AveryIntro
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Khanto_Text_AveryDefeat
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz2Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_AveryApproachLeft::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Khanto_Movement_AveryApproachLeft
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_EventScript_AveryApproachRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Khanto_Movement_AveryApproachRight
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_Movement_AveryApproachLeft::
	walk_left
	walk_left
	step_end

CinnabarIsland_Gym_Khanto_Movement_AveryApproachRight::
	walk_left
	step_end

@ ── Quiz 3 Door Script ──────────────────────────────────────────────

CinnabarIsland_Gym_Khanto_EventScript_Quiz3Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz3
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz3Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz3
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz3::
	msgbox CinnabarIsland_Gym_Khanto_Text_Quiz3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_Khanto_EventScript_Quiz3Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_Khanto_EventScript_Quiz3Incorrect
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz3Correct::
	call CinnabarIsland_Gym_Khanto_EventScript_CorrectAnswer
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz3Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz3Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor3
	special DrawWholeMapView
	setflag FLAG_CINNABAR_GYM_QUIZ_3
	return

CinnabarIsland_Gym_Khanto_EventScript_Quiz3Incorrect::
	call CinnabarIsland_Gym_Khanto_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Khanto_EventScript_BattleRamonFromQuiz
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_BattleRamonFromQuiz::
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_Khanto_EventScript_RamonApproachLeft
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_Khanto_EventScript_RamonApproachRight
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CinnabarIsland_Gym_Khanto_Text_RamonIntro
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Khanto_Text_RamonDefeat
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz3Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_RamonApproachLeft::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Khanto_Movement_RamonApproachLeft
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_EventScript_RamonApproachRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Khanto_Movement_RamonApproachRight
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_Movement_RamonApproachLeft::
	walk_left
	walk_left
	step_end

CinnabarIsland_Gym_Khanto_Movement_RamonApproachRight::
	walk_left
	step_end

@ ── Quiz 4 Door Script ──────────────────────────────────────────────

CinnabarIsland_Gym_Khanto_EventScript_Quiz4Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz4
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz4Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz4
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz4::
	msgbox CinnabarIsland_Gym_Khanto_Text_Quiz4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_Khanto_EventScript_Quiz4Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_Khanto_EventScript_Quiz4Incorrect
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz4Correct::
	call CinnabarIsland_Gym_Khanto_EventScript_CorrectAnswer
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz4Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz4Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor4
	special DrawWholeMapView
	setflag FLAG_CINNABAR_GYM_QUIZ_4
	return

CinnabarIsland_Gym_Khanto_EventScript_Quiz4Incorrect::
	call CinnabarIsland_Gym_Khanto_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Khanto_EventScript_BattleDerekFromQuiz
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_BattleDerekFromQuiz::
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_Khanto_EventScript_DerekApproachLeft
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_Khanto_EventScript_DerekApproachRight
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CinnabarIsland_Gym_Khanto_Text_DerekIntro
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Khanto_Text_DerekDefeat
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz4Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_DerekApproachLeft::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Khanto_Movement_DerekApproachLeft
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_EventScript_DerekApproachRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Khanto_Movement_DerekApproachRight
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_Movement_DerekApproachLeft::
	walk_left
	walk_left
	step_end

CinnabarIsland_Gym_Khanto_Movement_DerekApproachRight::
	walk_left
	step_end

@ ── Quiz 5 Door Script ──────────────────────────────────────────────

CinnabarIsland_Gym_Khanto_EventScript_Quiz5Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz5
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz5Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz5
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz5::
	msgbox CinnabarIsland_Gym_Khanto_Text_Quiz5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_Khanto_EventScript_Quiz5Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_Khanto_EventScript_Quiz5Incorrect
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz5Correct::
	call CinnabarIsland_Gym_Khanto_EventScript_CorrectAnswer
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz5Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz5Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor5
	special DrawWholeMapView
	setflag FLAG_CINNABAR_GYM_QUIZ_5
	return

CinnabarIsland_Gym_Khanto_EventScript_Quiz5Incorrect::
	call CinnabarIsland_Gym_Khanto_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Khanto_EventScript_BattleDustyFromQuiz
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_BattleDustyFromQuiz::
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_Khanto_EventScript_DustyApproachLeft
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_Khanto_EventScript_DustyApproachRight
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CinnabarIsland_Gym_Khanto_Text_DustyIntro
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Khanto_Text_DustyDefeat
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz5Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_DustyApproachLeft::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Khanto_Movement_DustyApproachLeft
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_EventScript_DustyApproachRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Khanto_Movement_DustyApproachRight
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_Movement_DustyApproachLeft::
	walk_left
	walk_left
	step_end

CinnabarIsland_Gym_Khanto_Movement_DustyApproachRight::
	walk_left
	step_end

@ ── Quiz 6 Door Script ──────────────────────────────────────────────

CinnabarIsland_Gym_Khanto_EventScript_Quiz6Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz6
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz6Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CinnabarIsland_Gym_Khanto_EventScript_Quiz6
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz6::
	msgbox CinnabarIsland_Gym_Khanto_Text_Quiz6, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_Khanto_EventScript_Quiz6Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_Khanto_EventScript_Quiz6Incorrect
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz6Correct::
	call CinnabarIsland_Gym_Khanto_EventScript_CorrectAnswer
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz6Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_Quiz6Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_Khanto_EventScript_OpenDoor6
	special DrawWholeMapView
	setflag FLAG_CINNABAR_GYM_QUIZ_6
	return

CinnabarIsland_Gym_Khanto_EventScript_Quiz6Incorrect::
	call CinnabarIsland_Gym_Khanto_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Khanto_EventScript_BattleZacFromQuiz
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_BattleZacFromQuiz::
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_Khanto_EventScript_ZacApproachLeft
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_Khanto_EventScript_ZacApproachRight
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CinnabarIsland_Gym_Khanto_Text_ZacIntro
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Khanto_Text_ZacDefeat
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_Khanto_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_Khanto_EventScript_Quiz6Complete
	releaseall
	end

CinnabarIsland_Gym_Khanto_EventScript_ZacApproachLeft::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Khanto_Movement_ZacApproachLeft
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_EventScript_ZacApproachRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Khanto_Movement_ZacApproachRight
	waitmovement 0
	return

CinnabarIsland_Gym_Khanto_Movement_ZacApproachLeft::
	walk_left
	walk_left
	step_end

CinnabarIsland_Gym_Khanto_Movement_ZacApproachRight::
	walk_left
	step_end

@ ── Door Open / Close Metatile Scripts ──────────────────────────────

CinnabarIsland_Gym_Khanto_EventScript_OpenDoor1::
	setmetatile 5, 8, METATILE_CinnabarGym_Door_Open, 0
	return

CinnabarIsland_Gym_Khanto_EventScript_OpenDoor2::
	setmetatile 11, 15, METATILE_CinnabarGym_Door_Open, 0
	return

CinnabarIsland_Gym_Khanto_EventScript_OpenDoor3::
	setmetatile 7, 22, METATILE_CinnabarGym_Door_Open, 0
	return

CinnabarIsland_Gym_Khanto_EventScript_OpenDoor4::
	setmetatile 13, 27, METATILE_CinnabarGym_Door_Open, 0
	return

CinnabarIsland_Gym_Khanto_EventScript_OpenDoor5::
	setmetatile 9, 34, METATILE_CinnabarGym_Door_Open, 0
	return

CinnabarIsland_Gym_Khanto_EventScript_OpenDoor6::
	setmetatile 7, 41, METATILE_CinnabarGym_Door_Open, 0
	return

@ ── Text ────────────────────────────────────────────────────────────

CinnabarIsland_Gym_Khanto_Text_BlaineIntro::
	.string "Kwaaah!\p"
	.string "I am BLAINE!\p"
	.string "I am the GYM LEADER of\n"
	.string "CINNABAR ISLAND!\p"
	.string "All my POKéMON are the\n"
	.string "FIRE type! They burn all before\l"
	.string "them!\p"
	.string "My fiery POKéMON and I will\n"
	.string "reduce you to ashes!\p"
	.string "Kwaaah! Let's go!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CinnabarIsland_Gym_Khanto_Text_BlaineDefeat::
	.string "Kwaaah!\p"
	.string "You've burned me to the ground!\p"
	.string "You have earned the VOLCANOBADGE!\p"
	.string "{FONT_NORMAL}{PLAYER} received the VOLCANOBADGE\n"
	.string "from BLAINE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}The VOLCANOBADGE boosts your\n"
	.string "POKéMON's SP. ATK.\p"
	.string "It also lets your POKéMON use\n"
	.string "WATERFALL outside of battle.$"

CinnabarIsland_Gym_Khanto_Text_ExplainVolcanoBadge::
	.string "Here! I want you to have this!$"

CinnabarIsland_Gym_Khanto_Text_ReceivedTM38FromBlaine::
	.string "{PLAYER} received TM38\n"
	.string "from BLAINE.$"

CinnabarIsland_Gym_Khanto_Text_FireBlastIsUltimateFireMove::
	.string "TM38 contains FIRE BLAST!\p"
	.string "It's the ultimate FIRE-type move!\p"
	.string "But it's not very accurate.\n"
	.string "Use it wisely!$"

CinnabarIsland_Gym_Khanto_Text_MakeSpaceForThis::
	.string "You don't have room for this.$"

CinnabarIsland_Gym_Khanto_Text_BlainePostBattle::
	.string "Kwaaah! You are a great\n"
	.string "TRAINER indeed!\p"
	.string "Your skills burn brighter\n"
	.string "than any flame!$"

CinnabarIsland_Gym_Khanto_Text_QuizRules::
	.string "Welcome to the CINNABAR GYM's\n"
	.string "POKéMON QUIZ!\p"
	.string "Answer correctly and the door\n"
	.string "will open!\p"
	.string "Get it wrong… and you'll have\n"
	.string "to face a trainer!$"

CinnabarIsland_Gym_Khanto_Text_Quiz1::
	.string "Let's start with an easy one!\p"
	.string "Is CINNABAR ISLAND a volcanic\n"
	.string "island?$"

CinnabarIsland_Gym_Khanto_Text_Quiz2::
	.string "Next question!\p"
	.string "Are GROUND-type moves super\n"
	.string "effective against FIRE types?$"

CinnabarIsland_Gym_Khanto_Text_Quiz3::
	.string "Question 3!\p"
	.string "Is CHARMANDER a FIRE-type\n"
	.string "POKéMON?$"

CinnabarIsland_Gym_Khanto_Text_Quiz4::
	.string "Question 4!\p"
	.string "Does SUNNY DAY boost the power\n"
	.string "of FIRE-type moves?$"

CinnabarIsland_Gym_Khanto_Text_Quiz5::
	.string "Question 5!\p"
	.string "Is BLAINE the LEADER of the\n"
	.string "CINNABAR GYM?$"

CinnabarIsland_Gym_Khanto_Text_Quiz6::
	.string "Final question!\p"
	.string "Is a POKéMON's SP. ATK raised\n"
	.string "by the move CALM MIND?$"

CinnabarIsland_Gym_Khanto_Text_CorrectGoOnThrough::
	.string "Correct! You may go through!$"

CinnabarIsland_Gym_Khanto_Text_SorryBadCall::
	.string "Sorry! Bad call!\p"
	.string "You'll have to battle a trainer\n"
	.string "as a penalty!$"

CinnabarIsland_Gym_Khanto_Text_ErikIntro::
	.string "I know everything about\n"
	.string "FIRE-type POKéMON!\p"
	.string "Want to see my knowledge\n"
	.string "in battle?$"

CinnabarIsland_Gym_Khanto_Text_ErikDefeat::
	.string "I've been burned!$"

CinnabarIsland_Gym_Khanto_Text_ErikPostBattle::
	.string "If you can't handle me, you\n"
	.string "won't last against BLAINE.$"

CinnabarIsland_Gym_Khanto_Text_AveryIntro::
	.string "You got the question wrong.\n"
	.string "Now face me!$"

CinnabarIsland_Gym_Khanto_Text_AveryDefeat::
	.string "I failed…$"

CinnabarIsland_Gym_Khanto_Text_AveryPostBattle::
	.string "Try to answer the quizzes\n"
	.string "correctly to advance.$"

CinnabarIsland_Gym_Khanto_Text_DerekIntro::
	.string "You disturbed my research!\n"
	.string "Prepare for a battle!$"

CinnabarIsland_Gym_Khanto_Text_DerekDefeat::
	.string "My research paper is ruined!$"

CinnabarIsland_Gym_Khanto_Text_DerekPostBattle::
	.string "BLAINE is working on a secret\n"
	.string "experiment in the back.$"

CinnabarIsland_Gym_Khanto_Text_ZacIntro::
	.string "So close to BLAINE… but you\n"
	.string "won't get past me!$"

CinnabarIsland_Gym_Khanto_Text_ZacDefeat::
	.string "You did get past me!$"

CinnabarIsland_Gym_Khanto_Text_ZacPostBattle::
	.string "BLAINE is just ahead.\n"
	.string "He's incredibly strong!$"

CinnabarIsland_Gym_Khanto_Text_QuinnIntro::
	.string "Wrong answer! Now you pay\n"
	.string "the price!$"

CinnabarIsland_Gym_Khanto_Text_QuinnDefeat::
	.string "I've been caught!$"

CinnabarIsland_Gym_Khanto_Text_QuinnPostBattle::
	.string "You're a tough cookie.\n"
	.string "BLAINE will love battling you.$"

CinnabarIsland_Gym_Khanto_Text_RamonIntro::
	.string "Another wrong answer means\n"
	.string "another battle!$"

CinnabarIsland_Gym_Khanto_Text_RamonDefeat::
	.string "I'm out!$"

CinnabarIsland_Gym_Khanto_Text_RamonPostBattle::
	.string "The door is open now. Go on!$"

CinnabarIsland_Gym_Khanto_Text_DustyIntro::
	.string "I was hiding, waiting for\n"
	.string "someone to make a mistake!$"

CinnabarIsland_Gym_Khanto_Text_DustyDefeat::
	.string "You saw through my ambush!$"

CinnabarIsland_Gym_Khanto_Text_DustyPostBattle::
	.string "BLAINE is waiting at the end.\n"
	.string "He's a raging inferno!$"

CinnabarIsland_Gym_Khanto_Text_GymGuyAdvice::
	.string "Hey, you made it to BLAINE's gym!\p"
	.string "BLAINE uses FIRE-type POKéMON.\n"
	.string "They're blazing hot!\p"
	.string "WATER, ROCK, and GROUND moves\n"
	.string "are super effective against fire.\p"
	.string "You'll need to answer quiz\n"
	.string "questions to open the doors!$"

CinnabarIsland_Gym_Khanto_Text_YoureChampMaterial::
	.string "You passed all the quizzes\n"
	.string "and defeated BLAINE! Incredible!$"

CinnabarIsland_Gym_Khanto_Text_GymStatue::
	.string "CINNABAR POKéMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CinnabarIsland_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "CINNABAR POKéMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

CinnabarIsland_Gym_Khanto_EventScript_Receptionist::
	msgbox CinnabarIsland_Gym_Khanto_Text_Receptionist, MSGBOX_NPC
	end

CinnabarIsland_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the CINNABAR GYM!\p"
	.string "LEADER BLAINE is a hot-headed\n"
	.string "scientist who loves FIRE types.$"
