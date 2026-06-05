ViridianCity_Gym_Khanto_MapScripts::
	.byte 0

ViridianCity_Gym_Khanto_EventScript_Giovanni::
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Khanto_Text_GiovanniIntro, ViridianCity_Gym_Khanto_Text_GiovanniDefeat, ViridianCity_Gym_Khanto_EventScript_DefeatedGiovanni, NO_MUSIC
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_Khanto_EventScript_GiveTM26
	msgbox ViridianCity_Gym_Khanto_Text_GiovanniPostBattle
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_VIRIDIAN_GIOVANNI
	fadescreen FADE_FROM_BLACK
	release
	end

ViridianCity_Gym_Khanto_EventScript_DefeatedGiovanni::
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
	setflag FLAG_BADGE08_GET
	set_gym_trainers_frlg 8
	goto ViridianCity_Gym_Khanto_EventScript_GiveTM26
	end

ViridianCity_Gym_Khanto_EventScript_GiveTM26::
	msgbox ViridianCity_Gym_Khanto_Text_ExplainEarthBadgeTakeThis
	checkitemspace ITEM_TM26
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_Khanto_EventScript_NoRoomForTM26
	giveitem_msg ViridianCity_Gym_Khanto_Text_ReceivedTM26FromGiovanni, ITEM_TM26
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
	msgbox ViridianCity_Gym_Khanto_Text_ExplainTM26
	release
	end

ViridianCity_Gym_Khanto_EventScript_NoRoomForTM26::
	msgbox ViridianCity_Gym_Khanto_Text_YouDoNotHaveSpace
	release
	end

ViridianCity_Gym_Khanto_EventScript_Jason::
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Khanto_Text_JasonIntro, ViridianCity_Gym_Khanto_Text_JasonDefeat
	msgbox ViridianCity_Gym_Khanto_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_Cole::
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Khanto_Text_ColeIntro, ViridianCity_Gym_Khanto_Text_ColeDefeat
	msgbox ViridianCity_Gym_Khanto_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_Atsushi::
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Khanto_Text_AtsushiIntro, ViridianCity_Gym_Khanto_Text_AtsushiDefeat
	msgbox ViridianCity_Gym_Khanto_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_Kiyo::
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Khanto_Text_KiyoIntro, ViridianCity_Gym_Khanto_Text_KiyoDefeat
	msgbox ViridianCity_Gym_Khanto_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_Takashi::
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Khanto_Text_TakashiIntro, ViridianCity_Gym_Khanto_Text_TakashiDefeat
	msgbox ViridianCity_Gym_Khanto_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_Samuel::
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Khanto_Text_SamuelIntro, ViridianCity_Gym_Khanto_Text_SamuelDefeat
	msgbox ViridianCity_Gym_Khanto_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_Yuji::
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Khanto_Text_YujiIntro, ViridianCity_Gym_Khanto_Text_YujiDefeat
	msgbox ViridianCity_Gym_Khanto_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_Warren::
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Khanto_Text_WarrenIntro, ViridianCity_Gym_Khanto_Text_WarrenDefeat
	msgbox ViridianCity_Gym_Khanto_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox ViridianCity_Gym_Khanto_Text_GymGuyAdvice
	release
	end

ViridianCity_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox ViridianCity_Gym_Khanto_Text_GymGuyPostVictory
	release
	end

ViridianCity_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox ViridianCity_Gym_Khanto_Text_GymStatue
	releaseall
	end

ViridianCity_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox ViridianCity_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

ViridianCity_Gym_Khanto_Text_GiovanniIntro::
	.string "Fwahahaha!\n"
	.string "Welcome to my hideout!\p"
	.string "It shall be so until I can restore\n"
	.string "TEAM ROCKET to its former glory.\p"
	.string "But, you have found me again.\n"
	.string "So be it.\l"
	.string "This time, I'm not holding back!\p"
	.string "Once more, you shall face\n"
	.string "GIOVANNI, the greatest TRAINER!{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"

ViridianCity_Gym_Khanto_Text_GiovanniDefeat::
	.string "Ha!\n"
	.string "That was a truly intense fight.\p"
	.string "You have proven yourself worthy.\p"
	.string "Here. Take the EARTHBADGE.\p"
	.string "{FONT_NORMAL}{PLAYER} received the EARTHBADGE\n"
	.string "from GIOVANNI!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}With all eight BADGES, you are\n"
	.string "qualified to challenge the\l"
	.string "POKéMON LEAGUE.\p"
	.string "Now, I must go…\n"
	.string "TEAM ROCKET's destiny awaits!$"

ViridianCity_Gym_Khanto_Text_ExplainEarthBadgeTakeThis::
	.string "Wait! I almost forgot to give\n"
	.string "you this.$"

ViridianCity_Gym_Khanto_Text_ReceivedTM26FromGiovanni::
	.string "{PLAYER} received TM26\n"
	.string "from GIOVANNI.$"

ViridianCity_Gym_Khanto_Text_ExplainTM26::
	.string "TM26 contains EARTHQUAKE.\p"
	.string "It's a devastating GROUND-type\n"
	.string "move that hits everyone on the\l"
	.string "field.$"

ViridianCity_Gym_Khanto_Text_YouDoNotHaveSpace::
	.string "You don't have room for this.$"

ViridianCity_Gym_Khanto_Text_GiovanniPostBattle::
	.string "I have lost to you again…\p"
	.string "Perhaps it is time to disband\n"
	.string "TEAM ROCKET after all.\p"
	.string "Farewell, TRAINER.$"

ViridianCity_Gym_Khanto_Text_JasonIntro::
	.string "You're not authorized to be here!\p"
	.string "This is TEAM ROCKET territory,\n"
	.string "kid!$"

ViridianCity_Gym_Khanto_Text_JasonDefeat::
	.string "I'm not authorized to lose!$"

ViridianCity_Gym_Khanto_Text_JasonPostBattle::
	.string "If you beat the GYM LEADER,\n"
	.string "you're something special.$"

ViridianCity_Gym_Khanto_Text_ColeIntro::
	.string "You've made it this far, but\n"
	.string "you won't beat our BOSS!\p"
	.string "I'll soften you up first!$"

ViridianCity_Gym_Khanto_Text_ColeDefeat::
	.string "Boss! I've failed you!$"

ViridianCity_Gym_Khanto_Text_ColePostBattle::
	.string "GIOVANNI is at the end of this\n"
	.string "gym. But I doubt you'll win.$"

ViridianCity_Gym_Khanto_Text_AtsushiIntro::
	.string "I've trained my body and soul\n"
	.string "to serve the BOSS!\p"
	.string "Feel my power!$"

ViridianCity_Gym_Khanto_Text_AtsushiDefeat::
	.string "My training wasn't enough!$"

ViridianCity_Gym_Khanto_Text_AtsushiPostBattle::
	.string "Your spirit is strong.\n"
	.string "But the BOSS's is stronger!$"

ViridianCity_Gym_Khanto_Text_KiyoIntro::
	.string "You may have defeated others,\n"
	.string "but I am a BLACK BELT!\p"
	.string "I won't go down easily!$"

ViridianCity_Gym_Khanto_Text_KiyoDefeat::
	.string "You broke my stance!$"

ViridianCity_Gym_Khanto_Text_KiyoPostBattle::
	.string "GIOVANNI doesn't just use\n"
	.string "GROUND-types… He uses power!$"

ViridianCity_Gym_Khanto_Text_TakashiIntro::
	.string "The BOSS handpicked me for\n"
	.string "this gym. I won't let him down!$"

ViridianCity_Gym_Khanto_Text_TakashiDefeat::
	.string "I let him down…$"

ViridianCity_Gym_Khanto_Text_TakashiPostBattle::
	.string "If you can beat GIOVANNI,\n"
	.string "you're truly formidable.$"

ViridianCity_Gym_Khanto_Text_SamuelIntro::
	.string "I'm a COOLTRAINER who follows\n"
	.string "only the strongest.\p"
	.string "And GIOVANNI is the strongest!$"

ViridianCity_Gym_Khanto_Text_SamuelDefeat::
	.string "Maybe you're the strongest?$"

ViridianCity_Gym_Khanto_Text_SamuelPostBattle::
	.string "GIOVANNI commands respect.\n"
	.string "Let's see if you can earn it.$"

ViridianCity_Gym_Khanto_Text_YujiIntro::
	.string "I've studied GIOVANNI's battle\n"
	.string "style. It's flawless!\p"
	.string "Let me show you!$"

ViridianCity_Gym_Khanto_Text_YujiDefeat::
	.string "My study was incomplete!$"

ViridianCity_Gym_Khanto_Text_YujiPostBattle::
	.string "GIOVANNI's GROUND-type POKéMON\n"
	.string "are incredibly powerful.$"

ViridianCity_Gym_Khanto_Text_WarrenIntro::
	.string "You won't get past me!\n"
	.string "This gym is a fortress!$"

ViridianCity_Gym_Khanto_Text_WarrenDefeat::
	.string "The fortress has fallen!$"

ViridianCity_Gym_Khanto_Text_WarrenPostBattle::
	.string "GIOVANNI awaits at the top.\n"
	.string "He's unlike any opponent you've\l"
	.string "faced.$"

ViridianCity_Gym_Khanto_Text_GymGuyAdvice::
	.string "Yo! You're taking on the\n"
	.string "VIRIDIAN GYM?\p"
	.string "The LEADER GIOVANNI uses\n"
	.string "GROUND-type POKéMON.\p"
	.string "WATER, GRASS, and ICE moves\n"
	.string "are super effective!\p"
	.string "But there's something strange\n"
	.string "about this gym… It feels more\l"
	.string "like a hideout than a GYM.\p"
	.string "Watch your back!$"

ViridianCity_Gym_Khanto_Text_GymGuyPostVictory::
	.string "You actually beat GIOVANNI?\n"
	.string "That's incredible!\p"
	.string "Now you're ready for the\n"
	.string "POKéMON LEAGUE for sure!$"

ViridianCity_Gym_Khanto_Text_GymStatue::
	.string "VIRIDIAN POKéMON GYM\n"
	.string "LEADER: GIOVANNI\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

ViridianCity_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "VIRIDIAN POKéMON GYM\n"
	.string "LEADER: GIOVANNI\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

@ ── Arrow tile scripts ───────────────────────────────────────────

ViridianCity_Gym_Khanto_EventScript_ArrowUp::
	lockall
	applymovement LOCALID_PLAYER, ViridianCity_Gym_Khanto_Movement_ArrowUp
	waitmovement 0
	releaseall
	end

ViridianCity_Gym_Khanto_EventScript_ArrowDown::
	lockall
	applymovement LOCALID_PLAYER, ViridianCity_Gym_Khanto_Movement_ArrowDown
	waitmovement 0
	releaseall
	end

ViridianCity_Gym_Khanto_EventScript_ArrowLeft::
	lockall
	applymovement LOCALID_PLAYER, ViridianCity_Gym_Khanto_Movement_ArrowLeft
	waitmovement 0
	releaseall
	end

ViridianCity_Gym_Khanto_EventScript_ArrowRight::
	lockall
	applymovement LOCALID_PLAYER, ViridianCity_Gym_Khanto_Movement_ArrowRight
	waitmovement 0
	releaseall
	end

ViridianCity_Gym_Khanto_EventScript_ArrowStop::
	end

ViridianCity_Gym_Khanto_Movement_ArrowUp:
	walk_up
	step_end

ViridianCity_Gym_Khanto_Movement_ArrowDown:
	walk_down
	step_end

ViridianCity_Gym_Khanto_Movement_ArrowLeft:
	walk_left
	step_end

ViridianCity_Gym_Khanto_Movement_ArrowRight:
	walk_right
	step_end

ViridianCity_Gym_Khanto_EventScript_Receptionist::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_Khanto_EventScript_ReceptionistPostVictory
	msgbox ViridianCity_Gym_Khanto_Text_Receptionist, MSGBOX_DEFAULT
	release
	end

ViridianCity_Gym_Khanto_EventScript_ReceptionistPostVictory::
	msgbox ViridianCity_Gym_Khanto_Text_ReceptionistPostVictory, MSGBOX_DEFAULT
	release
	end

ViridianCity_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the VIRIDIAN GYM!\p"
	.string "I'm sorry, but the GYM LEADER\n"
	.string "is currently away on business.\p"
	.string "Please come back another time!$"

ViridianCity_Gym_Khanto_Text_ReceptionistPostVictory::
	.string "The GYM LEADER has left…\p"
	.string "But what an incredible battle\n"
	.string "that must have been!$"
