SaffronCity_Gym_Khanto_MapScripts::
	.byte 0

SaffronCity_Gym_Khanto_EventScript_Sabrina::
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Khanto_Text_SabrinaIntro, SaffronCity_Gym_Khanto_Text_SabrinaDefeat, SaffronCity_Gym_Khanto_EventScript_DefeatedSabrina, NO_MUSIC
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_Khanto_EventScript_GiveTM04
	msgbox SaffronCity_Gym_Khanto_Text_SabrinaPostBattle
	release
	end

SaffronCity_Gym_Khanto_EventScript_DefeatedSabrina::
	setflag FLAG_DEFEATED_SABRINA
	setflag FLAG_BADGE06_GET
	set_gym_trainers_frlg 6
	goto SaffronCity_Gym_Khanto_EventScript_GiveTM04
	end

SaffronCity_Gym_Khanto_EventScript_GiveTM04::
	msgbox SaffronCity_Gym_Khanto_Text_ExplainMarshBadge
	checkitemspace ITEM_TM04
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_Khanto_EventScript_NoRoomForTM04
	giveitem_msg SaffronCity_Gym_Khanto_Text_ReceivedTM04FromSabrina, ITEM_TM04
	setflag FLAG_GOT_TM04_FROM_SABRINA
	msgbox SaffronCity_Gym_Khanto_Text_ExplainTM04
	release
	end

SaffronCity_Gym_Khanto_EventScript_NoRoomForTM04::
	msgbox SaffronCity_Gym_Khanto_Text_MakeSpaceForThis
	release
	end

SaffronCity_Gym_Khanto_EventScript_Johan::
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Khanto_Text_JohanIntro, SaffronCity_Gym_Khanto_Text_JohanDefeat
	msgbox SaffronCity_Gym_Khanto_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_Khanto_EventScript_Tyron::
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Khanto_Text_TyronIntro, SaffronCity_Gym_Khanto_Text_TyronDefeat
	msgbox SaffronCity_Gym_Khanto_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_Khanto_EventScript_Cameron::
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Khanto_Text_CameronIntro, SaffronCity_Gym_Khanto_Text_CameronDefeat
	msgbox SaffronCity_Gym_Khanto_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_Khanto_EventScript_Preston::
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Khanto_Text_PrestonIntro, SaffronCity_Gym_Khanto_Text_PrestonDefeat
	msgbox SaffronCity_Gym_Khanto_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_Khanto_EventScript_Amanda::
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Khanto_Text_AmandaIntro, SaffronCity_Gym_Khanto_Text_AmandaDefeat
	msgbox SaffronCity_Gym_Khanto_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_Khanto_EventScript_Stacy::
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Khanto_Text_StacyIntro, SaffronCity_Gym_Khanto_Text_StacyDefeat
	msgbox SaffronCity_Gym_Khanto_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_Khanto_EventScript_Tasha::
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Khanto_Text_TashaIntro, SaffronCity_Gym_Khanto_Text_TashaDefeat
	msgbox SaffronCity_Gym_Khanto_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_Khanto_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_Khanto_EventScript_GymGuyPostVictory
	msgbox SaffronCity_Gym_Khanto_Text_GymGuyAdvice
	release
	end

SaffronCity_Gym_Khanto_EventScript_GymGuyPostVictory::
	msgbox SaffronCity_Gym_Khanto_Text_YoureChampMaterial
	release
	end

SaffronCity_Gym_Khanto_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_Khanto_EventScript_GymStatuePostVictory
	msgbox SaffronCity_Gym_Khanto_Text_GymStatue
	releaseall
	end

SaffronCity_Gym_Khanto_EventScript_GymStatuePostVictory::
	msgbox SaffronCity_Gym_Khanto_Text_GymStatuePlayerWon
	releaseall
	end

SaffronCity_Gym_Khanto_Text_SabrinaIntro::
	.string "I had a vision of your arrival,\n"
	.string "TRAINER.\p"
	.string "My PSYCHIC-type POKéMON allow me\n"
	.string "to see the future.\p"
	.string "And in that future, I see\n"
	.string "your defeat!\p"
	.string "My powers are beyond anything\n"
	.string "you've faced before.\p"
	.string "Come, let us see if your fate\n"
	.string "can be rewritten!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

SaffronCity_Gym_Khanto_Text_SabrinaDefeat::
	.string "Incredible…\p"
	.string "My visions did not foresee\n"
	.string "this outcome!\p"
	.string "You have earned the MARSHBADGE.\p"
	.string "{FONT_NORMAL}{PLAYER} received the MARSHBADGE\n"
	.string "from SABRINA!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}The MARSHBADGE lets your\n"
	.string "POKéMON use SURF outside of battle.\p"
	.string "Take this as well.$"

SaffronCity_Gym_Khanto_Text_ExplainMarshBadge::
	.string "I foresaw that you would need\n"
	.string "this TM.$"

SaffronCity_Gym_Khanto_Text_ReceivedTM04FromSabrina::
	.string "{PLAYER} received TM04\n"
	.string "from SABRINA.$"

SaffronCity_Gym_Khanto_Text_ExplainTM04::
	.string "TM04 contains CALM MIND.\p"
	.string "It raises the user's SP. ATK\n"
	.string "and SP. DEF in battle.$"

SaffronCity_Gym_Khanto_Text_MakeSpaceForThis::
	.string "You don't have room for this.$"

SaffronCity_Gym_Khanto_Text_SabrinaPostBattle::
	.string "Your future is bright, TRAINER.\p"
	.string "You have overcome the challenges\n"
	.string "that I placed before you.\p"
	.string "Go forth and claim your destiny!$"

SaffronCity_Gym_Khanto_Text_JohanIntro::
	.string "SABRINA can see the future.\n"
	.string "Can you see my attack coming?$"

SaffronCity_Gym_Khanto_Text_JohanDefeat::
	.string "I saw that coming… not!$"

SaffronCity_Gym_Khanto_Text_JohanPostBattle::
	.string "Maybe I should train my psychic\n"
	.string "abilities too.$"

SaffronCity_Gym_Khanto_Text_TyronIntro::
	.string "The teleporters in this gym\n"
	.string "lead to dead ends and pitfalls.\p"
	.string "Can you find your way?$"

SaffronCity_Gym_Khanto_Text_TyronDefeat::
	.string "You navigated right to me!$"

SaffronCity_Gym_Khanto_Text_TyronPostBattle::
	.string "SABRINA awaits at the heart\n"
	.string "of the teleporter maze.$"

SaffronCity_Gym_Khanto_Text_CameronIntro::
	.string "My PSYCHIC powers are weak,\n"
	.string "but my POKéMON are strong!$"

SaffronCity_Gym_Khanto_Text_CameronDefeat::
	.string "My POKéMON weren't enough!$"

SaffronCity_Gym_Khanto_Text_CameronPostBattle::
	.string "SABRINA's powers are on a whole\n"
	.string "other level. Be careful!$"

SaffronCity_Gym_Khanto_Text_PrestonIntro::
	.string "Can you sense where you need\n"
	.string "to go? Follow your instincts!$"

SaffronCity_Gym_Khanto_Text_PrestonDefeat::
	.string "Your instincts are sharp!$"

SaffronCity_Gym_Khanto_Text_PrestonPostBattle::
	.string "The right teleporter will take\n"
	.string "you to SABRINA.$"

SaffronCity_Gym_Khanto_Text_AmandaIntro::
	.string "The spirits guide me. They say\n"
	.string "you will fall here!$"

SaffronCity_Gym_Khanto_Text_AmandaDefeat::
	.string "The spirits were wrong!$"

SaffronCity_Gym_Khanto_Text_AmandaPostBattle::
	.string "Perhaps you are guided by\n"
	.string "powerful spirits yourself.$"

SaffronCity_Gym_Khanto_Text_StacyIntro::
	.string "Channeling my energy…\n"
	.string "I sense you're a strong TRAINER!$"

SaffronCity_Gym_Khanto_Text_StacyDefeat::
	.string "My energy is depleted!$"

SaffronCity_Gym_Khanto_Text_StacyPostBattle::
	.string "SABRINA's energy is far beyond\n"
	.string "anything you can imagine.$"

SaffronCity_Gym_Khanto_Text_TashaIntro::
	.string "The warp tiles in this gym\n"
	.string "can disorient anyone!$"

SaffronCity_Gym_Khanto_Text_TashaDefeat::
	.string "I'm the one who's disoriented!$"

SaffronCity_Gym_Khanto_Text_TashaPostBattle::
	.string "Follow the warps carefully.\n"
	.string "SABRINA is at the end!$"

SaffronCity_Gym_Khanto_Text_GymGuyAdvice::
	.string "Hey! Listen up!\p"
	.string "SABRINA uses PSYCHIC-type\n"
	.string "POKéMON.\p"
	.string "They're powerful and have\n"
	.string "incredible SP. ATK.\p"
	.string "DARK, GHOST, and BUG moves\n"
	.string "are super effective!\p"
	.string "Navigate the teleporters\n"
	.string "carefully to reach SABRINA!$"

SaffronCity_Gym_Khanto_Text_YoureChampMaterial::
	.string "You navigated the teleporter\n"
	.string "maze and defeated SABRINA!$"

SaffronCity_Gym_Khanto_Text_GymStatue::
	.string "SAFFRON POKéMON GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

SaffronCity_Gym_Khanto_Text_GymStatuePlayerWon::
	.string "SAFFRON POKéMON GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

SaffronCity_Gym_Khanto_EventScript_Receptionist::
	msgbox SaffronCity_Gym_Khanto_Text_Receptionist, MSGBOX_NPC
	end

SaffronCity_Gym_Khanto_Text_Receptionist::
	.string "Welcome to the SAFFRON GYM!\p"
	.string "Our LEADER SABRINA has mastered\n"
	.string "the art of psychic warfare.$"
