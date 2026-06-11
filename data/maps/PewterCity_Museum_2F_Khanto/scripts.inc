PewterCity_Museum_2F_Khanto_MapScripts::
	.byte 0

@ ----- Fossil Curator -----
PewterCity_Museum_2F_Khanto_EventScript_Curator::
	lock
	faceplayer
	@ Already got fossils? Skip quest entirely
	goto_if_set FLAG_RECEIVED_HELIX_FOSSIL, PewterCity_Museum_2F_Khanto_EventScript_GotHelixAskDome
	goto_if_set FLAG_RECEIVED_DOME_FOSSIL, PewterCity_Museum_2F_Khanto_EventScript_GotDomeAskHelix
	@ Both quests done? Reward time
	goto_if_set FLAG_DOME_QUEST_COMPLETE, PewterCity_Museum_2F_Khanto_EventScript_CheckDiglettsDone
	goto_if_set FLAG_HELIX_QUEST_COMPLETE, PewterCity_Museum_2F_Khanto_EventScript_RemindViridian
	@ Quest not started yet?
	goto_if_unset FLAG_ACCEPTED_HELIX_FOSSIL_QUEST, PewterCity_Museum_2F_Khanto_EventScript_StartQuest
	@ Accepted but Helix not complete
	goto PewterCity_Museum_2F_Khanto_EventScript_RemindDigletts

@ ----- Quest: Start -----
PewterCity_Museum_2F_Khanto_EventScript_StartQuest::
	msgbox PewterCity_Museum_2F_Khanto_Text_QuestIntro, MSGBOX_DEFAULT
	setflag FLAG_ACCEPTED_HELIX_FOSSIL_QUEST
	release
	end

@ ----- Quest: Reminders -----
PewterCity_Museum_2F_Khanto_EventScript_RemindDigletts::
	msgbox PewterCity_Museum_2F_Khanto_Text_RemindDigletts, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_RemindViridian::
	msgbox PewterCity_Museum_2F_Khanto_Text_RemindViridian, MSGBOX_DEFAULT
	release
	end

@ ----- Both quests done -> gate to fossils -----
PewterCity_Museum_2F_Khanto_EventScript_CheckDiglettsDone::
	goto_if_set FLAG_HELIX_QUEST_COMPLETE, PewterCity_Museum_2F_Khanto_EventScript_BothQuestsComplete
	msgbox PewterCity_Museum_2F_Khanto_Text_RemindDigletts, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_BothQuestsComplete::
	msgbox PewterCity_Museum_2F_Khanto_Text_BothQuestsDone, MSGBOX_DEFAULT
	goto PewterCity_Museum_2F_Khanto_EventScript_GiveHelixPrompt

@ ----- Fossil Distribution (original flow, now guarded) -----
PewterCity_Museum_2F_Khanto_EventScript_GiveHelixPrompt::
	msgbox PewterCity_Museum_2F_Khanto_Text_CuratorIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_2F_Khanto_EventScript_CuratorDecline
	goto PewterCity_Museum_2F_Khanto_EventScript_GiveHelix

PewterCity_Museum_2F_Khanto_EventScript_CuratorDecline::
	msgbox PewterCity_Museum_2F_Khanto_Text_CuratorDecline, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_GiveHelix::
	checkitemspace ITEM_HELIX_FOSSIL
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_Khanto_EventScript_NoBagSpace
	giveitem ITEM_HELIX_FOSSIL
	setflag FLAG_RECEIVED_HELIX_FOSSIL
	setflag FLAG_GOT_HELIX_FOSSIL
	msgbox PewterCity_Museum_2F_Khanto_Text_GotHelix, MSGBOX_DEFAULT
	goto PewterCity_Museum_2F_Khanto_EventScript_AskDome

PewterCity_Museum_2F_Khanto_EventScript_AskDome::
	msgbox PewterCity_Museum_2F_Khanto_Text_WantDomeToo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_2F_Khanto_EventScript_ComeBackForDome
	goto PewterCity_Museum_2F_Khanto_EventScript_GiveDome

PewterCity_Museum_2F_Khanto_EventScript_ComeBackForDome::
	msgbox PewterCity_Museum_2F_Khanto_Text_ComeBackForDome, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_GiveDome::
	checkitemspace ITEM_DOME_FOSSIL
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_Khanto_EventScript_NoBagSpace
	giveitem ITEM_DOME_FOSSIL
	setflag FLAG_RECEIVED_DOME_FOSSIL
	setflag FLAG_GOT_DOME_FOSSIL
	setflag FLAG_HIDE_PEWTER_MUSEUM_AERODACTYL_SKELETON
	setflag FLAG_HIDE_PEWTER_MUSEUM_KABUTOPS_SKELETON
	fadescreen FADE_TO_BLACK
	removeobject 3
	removeobject 4
	fadescreen FADE_FROM_BLACK
	msgbox PewterCity_Museum_2F_Khanto_Text_GotBoth, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_GotHelixAskDome::
	goto_if_set FLAG_RECEIVED_DOME_FOSSIL, PewterCity_Museum_2F_Khanto_EventScript_AlreadyGotBoth
	goto PewterCity_Museum_2F_Khanto_EventScript_AskDome

PewterCity_Museum_2F_Khanto_EventScript_AlreadyGotBoth::
	msgbox PewterCity_Museum_2F_Khanto_Text_AlreadyGotBoth, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_GotDomeAskHelix::
	msgbox PewterCity_Museum_2F_Khanto_Text_AlreadyGotDome, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_2F_Khanto_EventScript_DeclineHelixEnd
	goto PewterCity_Museum_2F_Khanto_EventScript_GiveHelix

PewterCity_Museum_2F_Khanto_EventScript_DeclineHelixEnd::
	msgbox PewterCity_Museum_2F_Khanto_Text_ComeBackAnytime, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_Khanto_EventScript_NoBagSpace::
	msgbox PewterCity_Museum_2F_Khanto_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

@ ----- Little Girl -----
PewterCity_Museum_2F_Khanto_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox PewterCity_Museum_2F_Khanto_Text_LittleGirl, MSGBOX_DEFAULT
	release
	end

@ ----- Skeleton Display Signs -----
PewterCity_Museum_2F_Khanto_EventScript_AerodactylSkeleton::
	goto_if_set FLAG_HIDE_PEWTER_MUSEUM_AERODACTYL_SKELETON, PewterCity_Museum_2F_Khanto_EventScript_EmptyDisplay
	msgbox PewterCity_Museum_2F_Khanto_Text_AerodactylSkeleton, MSGBOX_SIGN
	end

PewterCity_Museum_2F_Khanto_EventScript_KabutopsSkeleton::
	goto_if_set FLAG_HIDE_PEWTER_MUSEUM_KABUTOPS_SKELETON, PewterCity_Museum_2F_Khanto_EventScript_EmptyDisplay
	msgbox PewterCity_Museum_2F_Khanto_Text_KabutopsSkeleton, MSGBOX_SIGN
	end

PewterCity_Museum_2F_Khanto_EventScript_EmptyDisplay::
	msgbox PewterCity_Museum_2F_Khanto_Text_EmptyDisplay, MSGBOX_SIGN
	end

@ ----- TEXT -----
PewterCity_Museum_2F_Khanto_Text_QuestIntro:
	.string "Ah, welcome to our fossil gallery!\p"
	.string "I'm the curator of the prehistoric\n"
	.string "collection here at the museum.\p"
	.string "Listen, I'm in a bit of a bind...\p"
	.string "I've got two remarkable fossils - a HELIX\n"
	.string "and a DOME FOSSIL - that need to go\n"
	.string "to the lab on CINNABAR ISLAND.\p"
	.string "But I need a favour first before I can\n"
	.string "entrust them to you. Actually, two favours.\p"
	.string "First - our excavation team in DIGLETT'S\n"
	.string "CAVE unearthed something strange.\p"
	.string "They've sealed off the dig site and won't\n"
	.string "let anyone near it without my permission.\p"
	.string "Take this authorization letter and find\n"
	.string "out what they've discovered.\p"
	.string "Second - I've heard reports of suspicious\n"
	.string "types lurking deep in VIRIDIAN FOREST,\n"
	.string "trying to poach a rare POKEMON.\p"
	.string "The path past the BUG CATCHERS' UNION\n"
	.string "checkpoint leads there, but they only\n"
	.string "let certified TRAINERS through.\p"
	.string "Beat the PEWTER GYM LEADER to get\n"
	.string "their respect, then investigate.\p"
	.string "Do both these things for me, and the\n"
	.string "fossils are yours to take to CINNABAR!$"

PewterCity_Museum_2F_Khanto_Text_CuratorIntro:
	.string "Excellent work, TRAINER!\p"
	.string "You investigated the DIGLETT'S CAVE\n"
	.string "excavation AND dealt with those\n"
	.string "poachers in VIRIDIAN FOREST?\p"
	.string "A DITTO at the dig site and TEAM\n"
	.string "ROCKET poaching a SCYTHER...\p"
	.string "You've proven yourself reliable.\p"
	.string "I'd say you've earned the right to\n"
	.string "take these fossils to CINNABAR.\p"
	.string "Would you like the HELIX FOSSIL?$"

PewterCity_Museum_2F_Khanto_Text_RemindDigletts:
	.string "Still waiting on that excavation\n"
	.string "report from DIGLETT'S CAVE.\p"
	.string "Remember - show the excavators my\n"
	.string "authorization to get past and see\n"
	.string "what they've unearthed!$"

PewterCity_Museum_2F_Khanto_Text_RemindViridian:
	.string "Don't forget about VIRIDIAN FOREST!\p"
	.string "Those suspicious types were spotted\n"
	.string "past the BUG CATCHERS' UNION\n"
	.string "checkpoint.\p"
	.string "You'll need to beat BROCK at the\n"
	.string "PEWTER GYM first to get through.$"

PewterCity_Museum_2F_Khanto_Text_BothQuestsDone:
	.string "You've done it? You investigated\n"
	.string "the excavation AND handled the\n"
	.string "forest?\p"
	.string "A DITTO in the dig site? And TEAM\n"
	.string "ROCKET poaching a SCYTHER?\n"
	.string "Remarkable!\p"
	.string "The PEWTER MUSEUM is grateful for\n"
	.string "your help, TRAINER. You've earned\n"
	.string "this.$"

PewterCity_Museum_2F_Khanto_Text_CuratorDecline:
	.string "Oh, I understand. Well, the offer\n"
	.string "is always open if you change\n"
	.string "your mind!$"

PewterCity_Museum_2F_Khanto_Text_GotHelix:
	.string "There you go - the HELIX FOSSIL!\p"
	.string "It's a spiral-shaped fossil from\n"
	.string "an ancient sea creature.\p"
	.string "The CINNABAR ISLAND lab will know\n"
	.string "what to do with it.$"

PewterCity_Museum_2F_Khanto_Text_WantDomeToo:
	.string "Would you like the DOME FOSSIL\n"
	.string "as well, while you're at it?$"

PewterCity_Museum_2F_Khanto_Text_ComeBackForDome:
	.string "No problem! I'll hold onto the\n"
	.string "DOME FOSSIL for you.\p"
	.string "Come back anytime to pick it up.$"

PewterCity_Museum_2F_Khanto_Text_ComeBackAnytime:
	.string "Alright, the HELIX FOSSIL will be\n"
	.string "here whenever you want it!$"

PewterCity_Museum_2F_Khanto_Text_GotBoth:
	.string "Splendid! Now you have both the\n"
	.string "HELIX and DOME FOSSILS!\p"
	.string "Take them to the POKEMON LAB on\n"
	.string "CINNABAR ISLAND and revive them.\p"
	.string "Imagine seeing ancient POKEMON\n"
	.string "come back to life!$"

PewterCity_Museum_2F_Khanto_Text_StillNeedHelix:
	.string "Back for the HELIX FOSSIL?\p"
	.string "It's still here waiting for you.$"

PewterCity_Museum_2F_Khanto_Text_AlreadyGotDome:
	.string "Oh, you already took the DOME\n"
	.string "FOSSIL before!\p"
	.string "Would you like the HELIX FOSSIL\n"
	.string "now?$"

PewterCity_Museum_2F_Khanto_Text_AlreadyGotBoth:
	.string "You've already got both fossils!\p"
	.string "Get going to CINNABAR ISLAND\n"
	.string "and revive those ancient POKEMON!\p"
	.string "I can't wait to hear about it!$"

PewterCity_Museum_2F_Khanto_Text_NoRoom:
	.string "Your BAG is completely full!\p"
	.string "Make some room and come back.$"

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

PewterCity_Museum_2F_Khanto_Text_EmptyDisplay:
	.string "This display case is now empty.\p"
	.string "The fossil was removed for\n"
	.string "transport to CINNABAR ISLAND.$"
