PewterCity_Museum_2F_Khanto_MapScripts::
	.byte 0

@ ----- Fossil Curator -----
PewterCity_Museum_2F_Khanto_EventScript_Curator::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HELIX_FOSSIL, PewterCity_Museum_2F_Khanto_EventScript_AfterHelix
	goto_if_set FLAG_ACCEPTED_HELIX_FOSSIL_QUEST, PewterCity_Museum_2F_Khanto_EventScript_HelixQuestInProgress
	msgbox PewterCity_Museum_2F_Khanto_Text_CuratorIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_2F_Khanto_EventScript_AcceptHelixQuest
	msgbox PewterCity_Museum_2F_Khanto_Text_CuratorDecline, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_AcceptHelixQuest::
	setflag FLAG_ACCEPTED_HELIX_FOSSIL_QUEST
	msgbox PewterCity_Museum_2F_Khanto_Text_HelixQuestAccepted, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_HelixQuestInProgress::
	goto_if_set FLAG_HELIX_QUEST_COMPLETE, PewterCity_Museum_2F_Khanto_EventScript_GiveHelix
	goto_if_set FLAG_RECEIVED_DOME_FOSSIL, PewterCity_Museum_2F_Khanto_EventScript_BothDone
	goto_if_set FLAG_ACCEPTED_DOME_FOSSIL_QUEST, PewterCity_Museum_2F_Khanto_EventScript_DomeQuestInProgress
	msgbox PewterCity_Museum_2F_Khanto_Text_StillNeedHelix, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_2F_Khanto_EventScript_AcceptDomeQuest
	msgbox PewterCity_Museum_2F_Khanto_Text_HelixReminder, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_AcceptDomeQuest::
	setflag FLAG_ACCEPTED_DOME_FOSSIL_QUEST
	msgbox PewterCity_Museum_2F_Khanto_Text_DomeQuestAccepted, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_DomeQuestInProgress::
	goto_if_set FLAG_DOME_QUEST_COMPLETE, PewterCity_Museum_2F_Khanto_EventScript_GiveDome
	msgbox PewterCity_Museum_2F_Khanto_Text_DomeReminder, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_BothDone::
	msgbox PewterCity_Museum_2F_Khanto_Text_AllQuestsComplete, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_AfterHelix::
	goto_if_set FLAG_RECEIVED_DOME_FOSSIL, PewterCity_Museum_2F_Khanto_EventScript_BothFossilsGiven
	goto_if_set FLAG_ACCEPTED_DOME_FOSSIL_QUEST, PewterCity_Museum_2F_Khanto_EventScript_DomeQuestInProgress
	goto_if_set FLAG_DOME_QUEST_COMPLETE, PewterCity_Museum_2F_Khanto_EventScript_GiveDome
	msgbox PewterCity_Museum_2F_Khanto_Text_HelixDoneOfferDome, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_2F_Khanto_EventScript_AcceptDomeQuest
	release
	end

@ Give Helix Fossil reward
PewterCity_Museum_2F_Khanto_EventScript_GiveHelix::
	lock
	faceplayer
	msgbox PewterCity_Museum_2F_Khanto_Text_HelixQuestComplete, MSGBOX_DEFAULT
	checkitemspace ITEM_HELIX_FOSSIL
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_Khanto_EventScript_NoBagSpace
	giveitem ITEM_HELIX_FOSSIL
	setflag FLAG_RECEIVED_HELIX_FOSSIL
	setflag FLAG_GOT_HELIX_FOSSIL
	setflag FLAG_HIDE_PEWTER_MUSEUM_AERODACTYL_SKELETON
	msgbox PewterCity_Museum_2F_Khanto_Text_HelixPostReward, MSGBOX_DEFAULT
	release
	end

@ Give Dome Fossil reward
PewterCity_Museum_2F_Khanto_EventScript_GiveDome::
	lock
	faceplayer
	msgbox PewterCity_Museum_2F_Khanto_Text_DomeQuestComplete, MSGBOX_DEFAULT
	checkitemspace ITEM_DOME_FOSSIL
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_Khanto_EventScript_NoBagSpace
	giveitem ITEM_DOME_FOSSIL
	setflag FLAG_RECEIVED_DOME_FOSSIL
	setflag FLAG_GOT_DOME_FOSSIL
	setflag FLAG_HIDE_PEWTER_MUSEUM_KABUTOPS_SKELETON
	msgbox PewterCity_Museum_2F_Khanto_Text_DomePostReward, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_NoBagSpace::
	msgbox PewterCity_Museum_2F_Khanto_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_BothFossilsGiven::
	msgbox PewterCity_Museum_2F_Khanto_Text_AllFossilsGiven, MSGBOX_DEFAULT
	release
	end

@ ----- Little Girl -----
PewterCity_Museum_2F_Khanto_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox PewterCity_Museum_2F_Khanto_Text_LittleGirl, MSGBOX_DEFAULT
	release
	end

@ ----- Skeleton Display Signs (always visible) -----
PewterCity_Museum_2F_Khanto_EventScript_AerodactylSkeleton::
	msgbox PewterCity_Museum_2F_Khanto_Text_AerodactylSkeleton, MSGBOX_SIGN
	end

PewterCity_Museum_2F_Khanto_EventScript_KabutopsSkeleton::
	msgbox PewterCity_Museum_2F_Khanto_Text_KabutopsSkeleton, MSGBOX_SIGN
	end

@ ----- TEXT -----
PewterCity_Museum_2F_Khanto_Text_CuratorIntro:
	.string "Ah, welcome to our fossil gallery!\p"
	.string "I'm the curator of the prehistoric\n"
	.string "collection here at the museum.\p"
	.string "As you can see, we have remarkable\n"
	.string "skeletons of ancient POKEMON.\p"
	.string "But they're only replicas... We're\n"
	.string "missing the real fossils themselves.\p"
	.string "I've been trying to acquire genuine\n"
	.string "HELIX and DOME FOSSILS for years.\p"
	.string "They're said to be hidden deep in\n"
	.string "the caves of the region.\p"
	.string "Say, you look like an adventurous\n"
	.string "sort! Would you help me retrieve\n"
	.string "the HELIX FOSSIL?$"

PewterCity_Museum_2F_Khanto_Text_CuratorDecline:
	.string "Oh... Well, if you ever change your\n"
	.string "mind, the offer stands!$"

PewterCity_Museum_2F_Khanto_Text_HelixQuestAccepted:
	.string "Wonderful! The HELIX FOSSIL is said\n"
	.string "to be hidden in the depths of\n"
	.string "MT. MOON.\p"
	.string "It's a spiral-shaped fossil of an\n"
	.string "ancient sea creature.\p"
	.string "Bring it back to me, and I'll make\n"
	.string "sure you're well rewarded!$"

PewterCity_Museum_2F_Khanto_Text_StillNeedHelix:
	.string "Any luck finding that HELIX FOSSIL?\p"
	.string "I've also heard rumors of the\n"
	.string "DOME FOSSIL being out there.\p"
	.string "Would you like to take on that\n"
	.string "mission as well?$"

PewterCity_Museum_2F_Khanto_Text_HelixReminder:
	.string "Keep searching those caves!\n"
	.string "The HELIX FOSSIL is out there\n"
	.string "somewhere, I'm sure of it.$"

PewterCity_Museum_2F_Khanto_Text_DomeQuestAccepted:
	.string "Excellent! The DOME FOSSIL is\n"
	.string "believed to be in the GRANITE CAVE\n"
	.string "area - a shelter-shaped fossil.\p"
	.string "Two fossils, two adventures!\n"
	.string "Best of luck, TRAINER!$"

PewterCity_Museum_2F_Khanto_Text_DomeReminder:
	.string "Don't forget about the DOME FOSSIL!\n"
	.string "The GRANITE CAVE area is your\n"
	.string "best bet for finding it.$"

PewterCity_Museum_2F_Khanto_Text_AllQuestsComplete:
	.string "You've accepted both fossil quests!\p"
	.string "The HELIX FOSSIL is in MT. MOON,\n"
	.string "and the DOME FOSSIL is near\n"
	.string "GRANITE CAVE.\p"
	.string "Good luck on your expeditions!$"

PewterCity_Museum_2F_Khanto_Text_HelixDoneOfferDome:
	.string "You found the HELIX FOSSIL!\p"
	.string "That's one down! Now, what about\n"
	.string "the DOME FOSSIL?\p"
	.string "Would you like to search for that\n"
	.string "one too?$"

PewterCity_Museum_2F_Khanto_Text_HelixQuestComplete:
	.string "You found the HELIX FOSSIL!\p"
	.string "Incredible! This spiral fossil is\n"
	.string "perfectly preserved!\p"
	.string "As promised, this genuine HELIX\n"
	.string "FOSSIL is yours!$"

PewterCity_Museum_2F_Khanto_Text_HelixPostReward:
	.string "The HELIX FOSSIL can be revived\n"
	.string "into a POKEMON at the lab in\n"
	.string "CINNABAR ISLAND.\p"
	.string "I can't wait to see it come\n"
	.string "back to life!$"

PewterCity_Museum_2F_Khanto_Text_DomeQuestComplete:
	.string "You found the DOME FOSSIL!\p"
	.string "Splendid! This fossilized shell\n"
	.string "is in remarkable condition!\p"
	.string "Take it - you've earned it!$"

PewterCity_Museum_2F_Khanto_Text_DomePostReward:
	.string "With this DOME FOSSIL, you can\n"
	.string "revive an ancient POKEMON at\n"
	.string "the CINNABAR ISLAND lab.\p"
	.string "Two fossils down - what a\n"
	.string "collection you'll have!$"

PewterCity_Museum_2F_Khanto_Text_AllFossilsGiven:
	.string "You've collected both the HELIX\n"
	.string "and DOME FOSSILS!\p"
	.string "Take them to CINNABAR ISLAND and\n"
	.string "bring those ancient POKEMON back\n"
	.string "to life!$"

PewterCity_Museum_2F_Khanto_Text_NoRoom:
	.string "Your BAG is full!\p"
	.string "Make some room and come back\n"
	.string "to collect your fossil.$"

PewterCity_Museum_2F_Khanto_Text_LittleGirl:
	.string "My daddy says those skeletons\n"
	.string "are millions of years old!\p"
	.string "I can't believe POKEMON used to\n"
	.string "be that big!$"

PewterCity_Museum_2F_Khanto_Text_AerodactylSkeleton:
	.string "SKELETON OF AERODACTYL\p"
	.string "A vicious prehistoric POKEMON that\n"
	.string "flew through the skies.\p"
	.string "Sharp fangs and powerful wings\n"
	.string "made it a fearsome predator.\p"
	.string "Lived approximately 100 million\n"
	.string "years ago.$"

PewterCity_Museum_2F_Khanto_Text_KabutopsSkeleton:
	.string "SKELETON OF KABUTOPS\p"
	.string "A prehistoric POKEMON that swam\n"
	.string "the ancient seas.\p"
	.string "Its sharp scythes could slice\n"
	.string "through prey effortlessly.\p"
	.string "A fierce predator of the deep.$"
