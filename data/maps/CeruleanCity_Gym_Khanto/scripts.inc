CeruleanCity_Gym_Khanto_MapScripts::
	.byte 0

CeruleanCity_Gym_Khanto_EventScript_Misty::
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Khanto_Text_MistyIntro, CeruleanCity_Gym_Khanto_Text_MistyDefeat, CeruleanCity_Gym_Khanto_EventScript_DefeatedMisty, NO_MUSIC
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_Khanto_EventScript_GiveTM03
	msgbox CeruleanCity_Gym_Khanto_Text_MistyPostBattle
	release
	end

CeruleanCity_Gym_Khanto_EventScript_DefeatedMisty::
	setflag FLAG_DEFEATED_MISTY
	setflag FLAG_BADGE02_GET
	set_gym_trainers_frlg 2
	goto CeruleanCity_Gym_Khanto_EventScript_GiveTM03
	end

CeruleanCity_Gym_Khanto_EventScript_GiveTM03::
	msgbox CeruleanCity_Gym_Khanto_Text_ExplainCascadeBadge
	checkitemspace ITEM_TM03
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_Khanto_EventScript_NoRoomForTM03
	giveitem_msg CeruleanCity_Gym_Khanto_Text_ReceivedTM03FromMisty, ITEM_TM03
	setflag FLAG_GOT_TM03_FROM_MISTY
	msgbox CeruleanCity_Gym_Khanto_Text_ExplainTM03
	release
	end

CeruleanCity_Gym_Khanto_EventScript_NoRoomForTM03::
	msgbox CeruleanCity_Gym_Khanto_Text_MakeSpaceForThis
	release
	end

CeruleanCity_Gym_Khanto_EventScript_Diana::
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Khanto_Text_DianaIntro, CeruleanCity_Gym_Khanto_Text_DianaDefeat
	msgbox CeruleanCity_Gym_Khanto_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_Khanto_EventScript_Luis::
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Khanto_Text_LuisIntro, CeruleanCity_Gym_Khanto_Text_LuisDefeat
	msgbox CeruleanCity_Gym_Khanto_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox CeruleanCity_Gym_Khanto_Text_GymGuyAdvice
	release
	end

CeruleanCity_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox CeruleanCity_Gym_Khanto_Text_YoureChampMaterial
	release
	end

CeruleanCity_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox CeruleanCity_Gym_Khanto_Text_GymStatue
	releaseall
	end

CeruleanCity_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox CeruleanCity_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

CeruleanCity_Gym_Khanto_Text_MistyIntro::
	.string "Hi, you're a new face!\p"
	.string "TRAINERS who want to turn pro have\n"
	.string "to have a certain polish about them.\p"
	.string "And by that, I mean they have to\n"
	.string "use WATER-type POKéMON skillfully.\p"
	.string "WATER has so many powerful moves…\p"
	.string "Let's see if you can handle my\n"
	.string "WATER-type POKéMON!\p"
	.string "You'd better做好准备!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CeruleanCity_Gym_Khanto_Text_MistyDefeat::
	.string "I can't believe it…\n"
	.string "You're too much, all right.\p"
	.string "You've earned the CASCADEBADGE.\p"
	.string "{FONT_NORMAL}{PLAYER} received the CASCADEBADGE\n"
	.string "from MISTY!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}The CASCADEBADGE lets you use\n"
	.string "CUT outside of battle.\p"
	.string "Also, all your POKéMON will be more\n"
	.string "highly respected.\p"
	.string "They'll obey any moves you teach\n"
	.string "them up to level 30!$"

CeruleanCity_Gym_Khanto_Text_ExplainCascadeBadge::
	.string "Wait! I want you to have this, too!$"

CeruleanCity_Gym_Khanto_Text_ReceivedTM03FromMisty::
	.string "{PLAYER} received TM03\n"
	.string "from MISTY.$"

CeruleanCity_Gym_Khanto_Text_ExplainTM03::
	.string "TM03 contains WATER PULSE.\p"
	.string "It's a powerful WATER-type attack\n"
	.string "that may confuse the foe.\p"
	.string "Use it on your POKéMON!$"

CeruleanCity_Gym_Khanto_Text_MakeSpaceForThis::
	.string "You don't have room for this.$"

CeruleanCity_Gym_Khanto_Text_MistyPostBattle::
	.string "I think you have the potential to\n"
	.string "become really great.\p"
	.string "But there are many more tough\n"
	.string "GYM LEADERS ahead of you.\p"
	.string "Don't get overconfident!$"

CeruleanCity_Gym_Khanto_Text_DianaIntro::
	.string "MISTY's waiting for you at the end\n"
	.string "of the gym.\p"
	.string "But you'll have to get past me\n"
	.string "first!$"

CeruleanCity_Gym_Khanto_Text_DianaDefeat::
	.string "Oh no, I lost!$"

CeruleanCity_Gym_Khanto_Text_DianaPostBattle::
	.string "You're tougher than you look.\n"
	.string "Good luck against MISTY!$"

CeruleanCity_Gym_Khanto_Text_LuisIntro::
	.string "The water's fine!\n"
	.string "Come on in for a battle!$"

CeruleanCity_Gym_Khanto_Text_LuisDefeat::
	.string "I'm all washed up…$"

CeruleanCity_Gym_Khanto_Text_LuisPostBattle::
	.string "MISTY's way tougher than me.\n"
	.string "Hope you're ready!$"

CeruleanCity_Gym_Khanto_Text_GymGuyAdvice::
	.string "Hey! Want some advice?\p"
	.string "MISTY's WATER-type POKéMON are\n"
	.string "fast and strong.\p"
	.string "But GRASS and ELECTRIC moves\n"
	.string "work great against them!\p"
	.string "If you don't have any, maybe\n"
	.string "catch some new POKéMON!$"

CeruleanCity_Gym_Khanto_Text_YoureChampMaterial::
	.string "You're amazing! You handled\n"
	.string "MISTY like a pro!$"

CeruleanCity_Gym_Khanto_Text_GymStatue::
	.string "CERULEAN POKéMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CeruleanCity_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "CERULEAN POKéMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

CeruleanCity_Gym_Khanto_EventScript_Receptionist::
	msgbox CeruleanCity_Gym_Khanto_Text_Receptionist, MSGBOX_NPC
	end

CeruleanCity_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the CERULEAN GYM!\p"
	.string "LEADER MISTY is known as the\n"
	.string "Tomboyish Mermaid. Good luck!$"
