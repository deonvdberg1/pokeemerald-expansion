PewterCity_Gym_Khanto_MapScripts::
@ ----- 4 New Gym Trainers -----

PewterCity_Gym_Khanto_EventScript_North::
	trainerbattle_single TRAINER_HIKER_NORTH, PewterCity_Gym_Khanto_Text_NorthIntro, PewterCity_Gym_Khanto_Text_NorthDefeat
	msgbox PewterCity_Gym_Khanto_Text_NorthPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_Khanto_EventScript_Melissa::
	goto PewterCity_Gym_Khanto_EventScript_Dawn
PewterCity_Gym_Khanto_EventScript_Dawn::
	trainerbattle_single TRAINER_LASS_DAWN, PewterCity_Gym_Khanto_Text_DawnIntro, PewterCity_Gym_Khanto_Text_DawnDefeat
	msgbox PewterCity_Gym_Khanto_Text_DawnPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_Khanto_EventScript_Sam::
	trainerbattle_single TRAINER_YOUNGSTER_SAM, PewterCity_Gym_Khanto_Text_SamIntro, PewterCity_Gym_Khanto_Text_SamDefeat
	msgbox PewterCity_Gym_Khanto_Text_SamPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_Khanto_EventScript_Troy::
	trainerbattle_single TRAINER_HIKER_TROY, PewterCity_Gym_Khanto_Text_TroyIntro, PewterCity_Gym_Khanto_Text_TroyDefeat
	msgbox PewterCity_Gym_Khanto_Text_TroyPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_Khanto_Text_NorthIntro:
	.string "Hmph! Think you can beat me and\n"
	.string "make it to BROCK? Not a chance!$"

PewterCity_Gym_Khanto_Text_NorthDefeat:
	.string "Gah! My GEODUDE wasn't enough!$"

PewterCity_Gym_Khanto_Text_NorthPostBattle:
	.string "BROCK's ONIX is way tougher than\n"
	.string "my GEODUDE. You'd better prepare!$"

PewterCity_Gym_Khanto_Text_DawnIntro:
	.string "I'm training my DIGLETT and\n"
	.string "SANDSHREW to be the best!$"

PewterCity_Gym_Khanto_Text_DawnDefeat:
	.string "Aw, they're still not strong\n"
	.string "enough...$"

PewterCity_Gym_Khanto_Text_DawnPostBattle:
	.string "SANDSHREW evolves into a tough\n"
	.string "SANDSLASH, you know!$"

PewterCity_Gym_Khanto_Text_SamIntro:
	.string "My CUBONE is super tough!\n"
	.string "Let me show you!$"

PewterCity_Gym_Khanto_Text_SamDefeat:
	.string "CUBONE! No!$"

PewterCity_Gym_Khanto_Text_SamPostBattle:
	.string "If my CUBONE evolves into a\n"
	.string "MAROWAK, it'll be unstoppable!$"

PewterCity_Gym_Khanto_Text_TroyIntro:
	.string "I've been digging in caves my\n"
	.string "whole life! My POKEMON are tough!$"

PewterCity_Gym_Khanto_Text_TroyDefeat:
	.string "You're tougher than a rock slide!$"

PewterCity_Gym_Khanto_Text_TroyPostBattle:
	.string "BROCK is the real challenge.\n"
	.string "Don't get overconfident!$"

	.byte 0

PewterCity_Gym_Khanto_EventScript_Brock::
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Khanto_Text_BrockIntro, PewterCity_Gym_Khanto_Text_BrockDefeat, PewterCity_Gym_Khanto_EventScript_DefeatedBrock, NO_MUSIC
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_Khanto_EventScript_GiveTM39
	msgbox PewterCity_Gym_Khanto_Text_BrockPostBattle
	release
	end

PewterCity_Gym_Khanto_EventScript_DefeatedBrock::
	setflag FLAG_DEFEATED_BROCK
	setflag FLAG_BADGE01_GET
	set_gym_trainers_frlg 1
	goto PewterCity_Gym_Khanto_EventScript_GiveTM39
	end

PewterCity_Gym_Khanto_EventScript_GiveTM39::
	msgbox PewterCity_Gym_Khanto_Text_TakeThisWithYou
	checkitemspace ITEM_TM39
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_Khanto_EventScript_NoRoomForTM39
	giveitem_msg PewterCity_Gym_Khanto_Text_ReceivedTM39FromBrock, ITEM_TM39
	setflag FLAG_GOT_TM39_FROM_BROCK
	msgbox PewterCity_Gym_Khanto_Text_ExplainTM39
	release
	end

PewterCity_Gym_Khanto_EventScript_NoRoomForTM39::
	msgbox PewterCity_Gym_Khanto_Text_DontHaveRoomForThis
	release
	end

PewterCity_Gym_Khanto_EventScript_Liam::
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Khanto_Text_LiamIntro, PewterCity_Gym_Khanto_Text_LiamDefeat
	msgbox PewterCity_Gym_Khanto_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox PewterCity_Gym_Khanto_Text_GymGuyAdvice
	release
	end

PewterCity_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox PewterCity_Gym_Khanto_Text_YoureChampMaterial
	release
	end

PewterCity_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox PewterCity_Gym_Khanto_Text_GymStatue
	releaseall
	end

PewterCity_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox PewterCity_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

PewterCity_Gym_Khanto_Text_BrockIntro::
	.string "So, you're here. I'm BROCK.\n"
	.string "I'm PEWTER's GYM LEADER.\p"
	.string "My rock-hard willpower is evident\n"
	.string "even in my POKéMON.\p"
	.string "My POKéMON are all rock hard, and\n"
	.string "have true-grit determination.\p"
	.string "That's right - my POKéMON are all\n"
	.string "the ROCK type!\p"
	.string "Fuhaha! You're going to challenge\n"
	.string "me knowing that you'll lose?\p"
	.string "That's the TRAINER's honor that\n"
	.string "compels you to challenge me.\p"
	.string "Fine, then!\n"
	.string "Show me your best!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PewterCity_Gym_Khanto_Text_BrockDefeat::
	.string "I took you for granted, and so\n"
	.string "I lost.\p"
	.string "As proof of your victory, I confer\n"
	.string "on you this…the official POKéMON\l"
	.string "LEAGUE BOULDERBADGE.\p"
	.string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
	.string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
	.string "your POKéMON more powerful.\p"
	.string "It also enables the use of the\n"
	.string "move FLASH outside of battle.\p"
	.string "Of course, a POKéMON must know the\n"
	.string "move FLASH to use it.$"

PewterCity_Gym_Khanto_Text_TakeThisWithYou::
	.string "Wait!\n"
	.string "Take this with you.$"

PewterCity_Gym_Khanto_Text_ReceivedTM39FromBrock::
	.string "{PLAYER} received TM39\n"
	.string "from BROCK.$"

PewterCity_Gym_Khanto_Text_ExplainTM39::
	.string "A TM, Technical Machine, contains a\n"
	.string "technique for POKéMON.\p"
	.string "Using a TM teaches the move it\n"
	.string "contains to a POKéMON.\p"
	.string "A TM is good for only one use.\p"
	.string "So, when you use one, pick the\n"
	.string "POKéMON carefully.\p"
	.string "Anyways…\n"
	.string "TM39 contains ROCK TOMB.\p"
	.string "It hurls boulders at the foe and\n"
	.string "lowers its SPEED.$"

PewterCity_Gym_Khanto_Text_BrockPostBattle::
	.string "There are all kinds of TRAINERS in\n"
	.string "this huge world of ours.\p"
	.string "You appear to be very gifted as a\n"
	.string "POKéMON TRAINER.\p"
	.string "So let me make a suggestion.\p"
	.string "Go to the GYM in CERULEAN and test\n"
	.string "your abilities.$"

PewterCity_Gym_Khanto_Text_DontHaveRoomForThis::
	.string "You don't have room for this.$"

PewterCity_Gym_Khanto_Text_LiamIntro::
	.string "Stop right there, kid!\p"
	.string "You're ten thousand light-years \n"
	.string "from facing BROCK!$"

PewterCity_Gym_Khanto_Text_LiamDefeat::
	.string "Darn!\p"
	.string "Light-years isn't time…\n"
	.string "It measures distance!$"

PewterCity_Gym_Khanto_Text_LiamPostBattle::
	.string "You're pretty hot.\n"
	.string "…But not as hot as BROCK!$"

PewterCity_Gym_Khanto_Text_GymGuyAdvice::
	.string "Hiya! Want some advice?\p"
	.string "BROCK uses ROCK-type POKéMON.\n"
	.string "They're rock hard and tough.\p"
	.string "But GRASS-type moves work well\n"
	.string "against ROCK-types!\p"
	.string "Try using a different party order\n"
	.string "to suit your opponent.$"

PewterCity_Gym_Khanto_Text_YoureChampMaterial::
	.string "Just as I thought!\n"
	.string "You're POKéMON champ material!$"

PewterCity_Gym_Khanto_Text_GymStatue::
	.string "PEWTER POKéMON GYM\n"
	.string "LEADER: BROCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

PewterCity_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "PEWTER POKéMON GYM\n"
	.string "LEADER: BROCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

PewterCity_Gym_Khanto_EventScript_Receptionist::
	msgbox PewterCity_Gym_Khanto_Text_Receptionist, MSGBOX_NPC
	end

PewterCity_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the PEWTER GYM!\p"
	.string "Our LEADER BROCK is a rock-solid\n"
	.string "TRAINER. Are you up to the challenge?$"
