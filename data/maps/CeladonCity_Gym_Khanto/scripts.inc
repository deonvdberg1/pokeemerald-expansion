CeladonCity_Gym_Khanto_MapScripts::
	.byte 0

CeladonCity_Gym_Khanto_EventScript_Erika::
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Khanto_Text_ErikaIntro, CeladonCity_Gym_Khanto_Text_ErikaDefeat, CeladonCity_Gym_Khanto_EventScript_DefeatedErika, NO_MUSIC
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_Khanto_EventScript_GiveTM19
	msgbox CeladonCity_Gym_Khanto_Text_ErikaPostBattle
	release
	end

CeladonCity_Gym_Khanto_EventScript_DefeatedErika::
	setflag FLAG_DEFEATED_ERIKA
	setflag FLAG_BADGE04_GET
	set_gym_trainers_frlg 4
	goto CeladonCity_Gym_Khanto_EventScript_GiveTM19
	end

CeladonCity_Gym_Khanto_EventScript_GiveTM19::
	msgbox CeladonCity_Gym_Khanto_Text_ExplainRainbowBadge
	checkitemspace ITEM_TM19
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_Khanto_EventScript_NoRoomForTM19
	giveitem_msg CeladonCity_Gym_Khanto_Text_ReceivedTM19FromErika, ITEM_TM19
	setflag FLAG_GOT_TM19_FROM_ERIKA
	msgbox CeladonCity_Gym_Khanto_Text_ExplainTM19
	release
	end

CeladonCity_Gym_Khanto_EventScript_NoRoomForTM19::
	msgbox CeladonCity_Gym_Khanto_Text_MakeSpaceForThis
	release
	end

CeladonCity_Gym_Khanto_EventScript_Kay::
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Khanto_Text_KayIntro, CeladonCity_Gym_Khanto_Text_KayDefeat
	msgbox CeladonCity_Gym_Khanto_Text_KayPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Khanto_EventScript_Lisa::
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Khanto_Text_LisaIntro, CeladonCity_Gym_Khanto_Text_LisaDefeat
	msgbox CeladonCity_Gym_Khanto_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Khanto_EventScript_Tina::
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Khanto_Text_TinaIntro, CeladonCity_Gym_Khanto_Text_TinaDefeat
	msgbox CeladonCity_Gym_Khanto_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Khanto_EventScript_Bridget::
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Khanto_Text_BridgetIntro, CeladonCity_Gym_Khanto_Text_BridgetDefeat
	msgbox CeladonCity_Gym_Khanto_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Khanto_EventScript_Tamia::
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Khanto_Text_TamiaIntro, CeladonCity_Gym_Khanto_Text_TamiaDefeat
	msgbox CeladonCity_Gym_Khanto_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Khanto_EventScript_Lori::
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Khanto_Text_LoriIntro, CeladonCity_Gym_Khanto_Text_LoriDefeat
	msgbox CeladonCity_Gym_Khanto_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Khanto_EventScript_Mary::
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Khanto_Text_MaryIntro, CeladonCity_Gym_Khanto_Text_MaryDefeat
	msgbox CeladonCity_Gym_Khanto_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox CeladonCity_Gym_Khanto_Text_GymGuyAdvice
	release
	end

CeladonCity_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox CeladonCity_Gym_Khanto_Text_YoureChampMaterial
	release
	end

CeladonCity_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox CeladonCity_Gym_Khanto_Text_GymStatue
	releaseall
	end

CeladonCity_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox CeladonCity_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCity_Gym_Khanto_Text_ErikaIntro::
	.string "Ah, you found your way through\n"
	.string "the hedge maze.\p"
	.string "I am ERIKA. I am the LEADER of\n"
	.string "the CELADON GYM.\p"
	.string "I use GRASS-type POKéMON.\p"
	.string "In the graceful art of battling,\n"
	.string "one must maintain inner peace.\p"
	.string "Let us see if you can maintain\n"
	.string "composure against my grass garden.\p"
	.string "Shall we begin?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CeladonCity_Gym_Khanto_Text_ErikaDefeat::
	.string "Oh! I am truly moved by your\n"
	.string "display of strength.\p"
	.string "You have earned the RAINBOWBADGE.\p"
	.string "{FONT_NORMAL}{PLAYER} received the RAINBOWBADGE\n"
	.string "from ERIKA!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}The RAINBOWBADGE lets your\n"
	.string "POKéMON use STRENGTH outside battle.\p"
	.string "It also makes all POKéMON up to\n"
	.string "level 50 obey you.\p"
	.string "Please take this as well.$"

CeladonCity_Gym_Khanto_Text_ExplainRainbowBadge::
	.string "I would like you to have this TM.$"

CeladonCity_Gym_Khanto_Text_ReceivedTM19FromErika::
	.string "{PLAYER} received TM19\n"
	.string "from ERIKA.$"

CeladonCity_Gym_Khanto_Text_ExplainTM19::
	.string "TM19 contains GIGA DRAIN.\p"
	.string "It's a GRASS-type move that drains\n"
	.string "HP from the foe to restore yours.$"

CeladonCity_Gym_Khanto_Text_MakeSpaceForThis::
	.string "You don't have room for this.$"

CeladonCity_Gym_Khanto_Text_ErikaPostBattle::
	.string "The flowers in my garden bloom\n"
	.string "beautifully because of POKéMON.\p"
	.string "I hope you will continue to treat\n"
	.string "your POKéMON with kindness.$"

CeladonCity_Gym_Khanto_Text_KayIntro::
	.string "Do you have a favorite POKéMON\n"
	.string "type? I love GRASS-types!$"

CeladonCity_Gym_Khanto_Text_KayDefeat::
	.string "Oh, you're strong!$"

CeladonCity_Gym_Khanto_Text_KayPostBattle::
	.string "ERIKA is much stronger than me.\n"
	.string "I hope you're ready!$"

CeladonCity_Gym_Khanto_Text_LisaIntro::
	.string "These hedges are tricky,\n"
	.string "aren't they?$"

CeladonCity_Gym_Khanto_Text_LisaDefeat::
	.string "I got tangled up!$"

CeladonCity_Gym_Khanto_Text_LisaPostBattle::
	.string "Keep going through the maze!\n"
	.string "You'll find ERIKA at the end.$"

CeladonCity_Gym_Khanto_Text_TinaIntro::
	.string "Oh, I hope you're not rushing\n"
	.string "through without enjoying the view.$"

CeladonCity_Gym_Khanto_Text_TinaDefeat::
	.string "A quick defeat…$"

CeladonCity_Gym_Khanto_Text_TinaPostBattle::
	.string "Take your time and enjoy the\n"
	.string "garden before facing ERIKA.$"

CeladonCity_Gym_Khanto_Text_BridgetIntro::
	.string "ERIKA's grace is matched only\n"
	.string "by her skill in battle.$"

CeladonCity_Gym_Khanto_Text_BridgetDefeat::
	.string "You're quite graceful yourself!$"

CeladonCity_Gym_Khanto_Text_BridgetPostBattle::
	.string "I hope you show ERIKA the same\n"
	.string "skill you showed me!$"

CeladonCity_Gym_Khanto_Text_TamiaIntro::
	.string "This garden is ERIKA's sanctuary.\n"
	.string "Can you disturb her peace?$"

CeladonCity_Gym_Khanto_Text_TamiaDefeat::
	.string "I was disturbed!$"

CeladonCity_Gym_Khanto_Text_TamiaPostBattle::
	.string "Go on, then. See if you can\n"
	.string "shake ERIKA's composure.$"

CeladonCity_Gym_Khanto_Text_LoriIntro::
	.string "Nature is beautiful, but it can\n"
	.string "also be fierce!$"

CeladonCity_Gym_Khanto_Text_LoriDefeat::
	.string "Such ferocity!$"

CeladonCity_Gym_Khanto_Text_LoriPostBattle::
	.string "Your battle spirit is wild\n"
	.string "like a storm!$"

CeladonCity_Gym_Khanto_Text_MaryIntro::
	.string "I'm a COOLTRAINER, and I've been\n"
	.string "trained by ERIKA herself.\p"
	.string "You won't get past me!$"

CeladonCity_Gym_Khanto_Text_MaryDefeat::
	.string "I'm not cool enough yet…$"

CeladonCity_Gym_Khanto_Text_MaryPostBattle::
	.string "ERIKA is on a whole other level.\n"
	.string "Good luck!$"

CeladonCity_Gym_Khanto_Text_GymGuyAdvice::
	.string "Hello, young TRAINER!\p"
	.string "ERIKA uses GRASS-type POKéMON.\n"
	.string "They're graceful but deadly.\p"
	.string "FIRE, ICE, FLYING, and POISON\n"
	.string "moves work best against them!\p"
	.string "Also, navigate the hedge maze\n"
	.string "to reach the garden's center!$"

CeladonCity_Gym_Khanto_Text_YoureChampMaterial::
	.string "You made it through the maze\n"
	.string "and beat ERIKA! Fantastic!$"

CeladonCity_Gym_Khanto_Text_GymStatue::
	.string "CELADON POKéMON GYM\n"
	.string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CeladonCity_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "CELADON POKéMON GYM\n"
	.string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

CeladonCity_Gym_Khanto_EventScript_Receptionist::
	msgbox CeladonCity_Gym_Khanto_Text_Receptionist, MSGBOX_NPC
	end

CeladonCity_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the CELADON GYM!\p"
	.string "LEADER ERIKA tends to her garden\n"
	.string "at the heart of the hedge maze.$"
