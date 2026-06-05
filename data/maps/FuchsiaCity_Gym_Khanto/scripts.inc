FuchsiaCity_Gym_Khanto_MapScripts::
	.byte 0

FuchsiaCity_Gym_Khanto_EventScript_Koga::
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Khanto_Text_KogaIntro, FuchsiaCity_Gym_Khanto_Text_KogaDefeat, FuchsiaCity_Gym_Khanto_EventScript_DefeatedKoga, NO_MUSIC
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_Khanto_EventScript_GiveTM06
	msgbox FuchsiaCity_Gym_Khanto_Text_KogaPostBattle
	release
	end

FuchsiaCity_Gym_Khanto_EventScript_DefeatedKoga::
	setflag FLAG_DEFEATED_KOGA
	setflag FLAG_BADGE05_GET
	set_gym_trainers_frlg 5
	goto FuchsiaCity_Gym_Khanto_EventScript_GiveTM06
	end

FuchsiaCity_Gym_Khanto_EventScript_GiveTM06::
	msgbox FuchsiaCity_Gym_Khanto_Text_KogaExplainSoulBadge
	checkitemspace ITEM_TM06
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_Khanto_EventScript_NoRoomForTM06
	giveitem_msg FuchsiaCity_Gym_Khanto_Text_ReceivedTM06FromKoga, ITEM_TM06
	setflag FLAG_GOT_TM06_FROM_KOGA
	msgbox FuchsiaCity_Gym_Khanto_Text_KogaExplainTM06
	release
	end

FuchsiaCity_Gym_Khanto_EventScript_NoRoomForTM06::
	msgbox FuchsiaCity_Gym_Khanto_Text_MakeSpaceForThis
	release
	end

FuchsiaCity_Gym_Khanto_EventScript_Phil::
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Khanto_Text_PhilIntro, FuchsiaCity_Gym_Khanto_Text_PhilDefeat
	msgbox FuchsiaCity_Gym_Khanto_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_Khanto_EventScript_Edgar::
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Khanto_Text_EdgarIntro, FuchsiaCity_Gym_Khanto_Text_EdgarDefeat
	msgbox FuchsiaCity_Gym_Khanto_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_Khanto_EventScript_Kirk::
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Khanto_Text_KirkIntro, FuchsiaCity_Gym_Khanto_Text_KirkDefeat
	msgbox FuchsiaCity_Gym_Khanto_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_Khanto_EventScript_Shawn::
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Khanto_Text_ShawnIntro, FuchsiaCity_Gym_Khanto_Text_ShawnDefeat
	msgbox FuchsiaCity_Gym_Khanto_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_Khanto_EventScript_Kayden::
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Khanto_Text_KaydenIntro, FuchsiaCity_Gym_Khanto_Text_KaydenDefeat
	msgbox FuchsiaCity_Gym_Khanto_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_Khanto_EventScript_Nate::
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Khanto_Text_NateIntro, FuchsiaCity_Gym_Khanto_Text_NateDefeat
	msgbox FuchsiaCity_Gym_Khanto_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox FuchsiaCity_Gym_Khanto_Text_GymGuyAdvice
	release
	end

FuchsiaCity_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox FuchsiaCity_Gym_Khanto_Text_YoureChampMaterial
	release
	end

FuchsiaCity_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox FuchsiaCity_Gym_Khanto_Text_GymStatue
	releaseall
	end

FuchsiaCity_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox FuchsiaCity_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

FuchsiaCity_Gym_Khanto_Text_KogaIntro::
	.string "Fufufu…\p"
	.string "I am KOGA, ninja master of\n"
	.string "the FUCHSIA GYM.\p"
	.string "I have honed my skills in the\n"
	.string "art of the ninja for decades.\p"
	.string "My POKéMON are trained in the\n"
	.string "ways of poison and stealth.\p"
	.string "The invisible walls you see are\n"
	.string "but one of my many tricks.\p"
	.string "Can you find your way through\n"
	.string "my maze of shadows?\p"
	.string "Let us begin!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

FuchsiaCity_Gym_Khanto_Text_KogaDefeat::
	.string "Hmm…\p"
	.string "You have mastered the art of\n"
	.string "navigating the unseen.\p"
	.string "You have earned the SOULBADGE.\p"
	.string "{FONT_NORMAL}{PLAYER} received the SOULBADGE\n"
	.string "from KOGA!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}The SOULBADGE lets your\n"
	.string "POKéMON use STRENGTH outside battle.\p"
	.string "It also increases your POKéMON's\n"
	.string "DEFENSE.\p"
	.string "Take this as well.$"

FuchsiaCity_Gym_Khanto_Text_KogaExplainSoulBadge::
	.string "You have proven yourself worthy\n"
	.string "of this TM.$"

FuchsiaCity_Gym_Khanto_Text_ReceivedTM06FromKoga::
	.string "{PLAYER} received TM06\n"
	.string "from KOGA.$"

FuchsiaCity_Gym_Khanto_Text_KogaExplainTM06::
	.string "TM06 contains TOXIC.\p"
	.string "It's a poison move that badly\n"
	.string "poisons the target.\p"
	.string "The poison's intensity increases\n"
	.string "as the battle goes on.$"

FuchsiaCity_Gym_Khanto_Text_MakeSpaceForThis::
	.string "You don't have room for this.$"

FuchsiaCity_Gym_Khanto_Text_KogaPostBattle::
	.string "You have potential, young one.\p"
	.string "Continue to hone your skills,\n"
	.string "and you may surpass even me.$"

FuchsiaCity_Gym_Khanto_Text_PhilIntro::
	.string "KOGA's invisible walls have\n"
	.string "confused many TRAINERS.\p"
	.string "Can you find the path?$"

FuchsiaCity_Gym_Khanto_Text_PhilDefeat::
	.string "You found me through the fog!$"

FuchsiaCity_Gym_Khanto_Text_PhilPostBattle::
	.string "Keep your eyes open and feel\n"
	.string "your way through.$"

FuchsiaCity_Gym_Khanto_Text_EdgarIntro::
	.string "Ninjas are masters of\n"
	.string "concealment!\p"
	.string "Can you find what's hidden?$"

FuchsiaCity_Gym_Khanto_Text_EdgarDefeat::
	.string "You see through my tricks!$"

FuchsiaCity_Gym_Khanto_Text_EdgarPostBattle::
	.string "KOGA's skills far surpass mine.\n"
	.string "Be careful!$"

FuchsiaCity_Gym_Khanto_Text_KirkIntro::
	.string "I juggle many POKéMON at once!\n"
	.string "Can you keep up?$"

FuchsiaCity_Gym_Khanto_Text_KirkDefeat::
	.string "I dropped the ball!$"

FuchsiaCity_Gym_Khanto_Text_KirkPostBattle::
	.string "KOGA doesn't juggle… he strikes\n"
	.string "from the shadows.$"

FuchsiaCity_Gym_Khanto_Text_ShawnIntro::
	.string "I specialize in poison-type\n"
	.string "POKéMON, just like KOGA!$"

FuchsiaCity_Gym_Khanto_Text_ShawnDefeat::
	.string "My poison didn't work!$"

FuchsiaCity_Gym_Khanto_Text_ShawnPostBattle::
	.string "KOGA's poison is far more\n"
	.string "potent than mine.$"

FuchsiaCity_Gym_Khanto_Text_KaydenIntro::
	.string "The way is hidden, but I'm not!\n"
	.string "Let's battle!$"

FuchsiaCity_Gym_Khanto_Text_KaydenDefeat::
	.string "You found me!$"

FuchsiaCity_Gym_Khanto_Text_KaydenPostBattle::
	.string "Keep searching for the path\n"
	.string "through the invisible walls.$"

FuchsiaCity_Gym_Khanto_Text_NateIntro::
	.string "Jugglers are masters of\n"
	.string "keeping things in motion!$"

FuchsiaCity_Gym_Khanto_Text_NateDefeat::
	.string "You stopped my momentum!$"

FuchsiaCity_Gym_Khanto_Text_NatePostBattle::
	.string "You've got good movement.\n"
	.string "Keep it up!$"

FuchsiaCity_Gym_Khanto_Text_GymGuyAdvice::
	.string "Yo! Listen up!\p"
	.string "KOGA uses POISON-type POKéMON.\n"
	.string "They'll inflict status effects!\p"
	.string "GROUND, PSYCHIC, and STEEL\n"
	.string "moves work well against poison.\p"
	.string "Also, look for the invisible\n"
	.string "walls - there's a path through!$"

FuchsiaCity_Gym_Khanto_Text_YoureChampMaterial::
	.string "You navigated the invisible maze\n"
	.string "and beat KOGA! Incredible!$"

FuchsiaCity_Gym_Khanto_Text_GymStatue::
	.string "FUCHSIA POKéMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

FuchsiaCity_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "FUCHSIA POKéMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

FuchsiaCity_Gym_Khanto_EventScript_Receptionist::
	msgbox FuchsiaCity_Gym_Khanto_Text_Receptionist, MSGBOX_NPC
	end

FuchsiaCity_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the FUCHSIA GYM!\p"
	.string "LEADER KOGA is a ninja master.\n"
	.string "Watch out for invisible traps!$"
