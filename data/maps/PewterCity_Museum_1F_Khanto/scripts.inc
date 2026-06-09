PewterCity_Museum_1F_Khanto_MapScripts::
	.byte 0

@ ----- Receptionist (always visible) -----
PewterCity_Museum_1F_Khanto_EventScript_Receptionist::
	lock
	faceplayer
	msgbox PewterCity_Museum_1F_Khanto_Text_Welcome, MSGBOX_DEFAULT
	release
	end

@ ----- Amber Researcher (hidden after amber given) -----
PewterCity_Museum_1F_Khanto_EventScript_AmberResearcher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_AMBER, PewterCity_Museum_1F_Khanto_EventScript_AlreadyGotAmber
	goto_if_set FLAG_ACCEPTED_OLD_AMBER_QUEST, PewterCity_Museum_1F_Khanto_EventScript_QuestInProgress
	msgbox PewterCity_Museum_1F_Khanto_Text_AmberQuestIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_Khanto_EventScript_AcceptAmberQuest
	msgbox PewterCity_Museum_1F_Khanto_Text_AmberQuestDecline, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_1F_Khanto_EventScript_AcceptAmberQuest::
	setflag FLAG_ACCEPTED_OLD_AMBER_QUEST
	msgbox PewterCity_Museum_1F_Khanto_Text_AmberQuestAccepted, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_1F_Khanto_EventScript_QuestInProgress::
	msgbox PewterCity_Museum_1F_Khanto_Text_AmberQuestReminder, MSGBOX_DEFAULT
	release
	end

@ (Placeholder: when actual quest is complete, set FLAG_RECEIVED_OLD_AMBER and call this)
@ For now this is how the reward is given - triggered when FLAG_ACCEPTED + FLAG_RECEIVED are set
PewterCity_Museum_1F_Khanto_EventScript_GiveOldAmber::
	lock
	faceplayer
	msgbox PewterCity_Museum_1F_Khanto_Text_AmberQuestComplete, MSGBOX_DEFAULT
	checkitemspace ITEM_OLD_AMBER
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_Khanto_EventScript_NoBagSpace
	giveitem ITEM_OLD_AMBER
	setflag FLAG_RECEIVED_OLD_AMBER
	setflag FLAG_HIDE_PEWTER_MUSEUM_OLD_AMBER
	msgbox PewterCity_Museum_1F_Khanto_Text_AmberPostReward, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_1F_Khanto_EventScript_AlreadyGotAmber::
	msgbox PewterCity_Museum_1F_Khanto_Text_AlreadyGotAmber, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_1F_Khanto_EventScript_NoBagSpace::
	msgbox PewterCity_Museum_1F_Khanto_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

@ ----- Old Amber Display Object -----
PewterCity_Museum_1F_Khanto_EventScript_AmberDisplay::
	msgbox PewterCity_Museum_1F_Khanto_Text_AmberDisplay, MSGBOX_SIGN
	end

@ ----- TEXT -----
PewterCity_Museum_1F_Khanto_Text_Welcome:
	.string "Welcome to the PEWTER MUSEUM
"
	.string "of SCIENCE!\p"
	.string "Our fossil collection spans
"
	.string "millions of years of history.\p"
	.string "Feel free to explore both floors!$"

PewterCity_Museum_1F_Khanto_Text_AmberQuestIntro:
	.string "Ah, a TRAINER! You're just the
"
	.string "sort of person I've been hoping
"
	.string "to run into.\p"
	.string "I'm researching the genetic
"
	.string "potential of OLD AMBER.\p"
	.string "But I need a sample from deep
"
	.string "within MT. MOON to complete
"
	.string "my research.\p"
	.string "It's dangerous in there, but a
"
	.string "skilled TRAINER like you could
"
	.string "manage it easily.\p"
	.string "If you bring me what I need,
"
	.string "I'll reward you with a piece
"
	.string "of genuine OLD AMBER!\p"
	.string "What do you say — interested?$"

PewterCity_Museum_1F_Khanto_Text_AmberQuestDecline:
	.string "Oh, I see… Well, if you change
"
	.string "your mind, the offer stands.$"

PewterCity_Museum_1F_Khanto_Text_AmberQuestAccepted:
	.string "Excellent! I knew you had
"
	.string "adventurous spirit!\p"
	.string "Deep inside MT. MOON, there
"
	.string "are ancient amber deposits.\p"
	.string "Bring me some, and the OLD
"
	.string "AMBER is yours!$"

PewterCity_Museum_1F_Khanto_Text_AmberQuestReminder:
	.string "Back already? Did you find
"
	.string "the amber deposits in
"
	.string "MT. MOON?\p"
	.string "I'm counting on you!$"

PewterCity_Museum_1F_Khanto_Text_AmberQuestComplete:
	.string "You found it! This is exactly
"
	.string "what I needed!\p"
	.string "As promised, the OLD AMBER
"
	.string "is yours!$"

PewterCity_Museum_1F_Khanto_Text_NoRoom:
	.string "Oh! Your BAG is completely full.\p"
	.string "Make some room and come back
"
	.string "to claim your reward.$"

PewterCity_Museum_1F_Khanto_Text_AlreadyGotAmber:
	.string "You still have that OLD AMBER?\p"
	.string "I've heard there's a laboratory
"
	.string "in CINNABAR ISLAND that can
"
	.string "revive POKEMON from fossils!\p"
	.string "You should give it a try!$"

PewterCity_Museum_1F_Khanto_Text_AmberDisplay:
	.string "OLD AMBER\p"
	.string "A piece of petrified tree sap
"
	.string "containing ancient genetic material.\p"
	.string "Estimated age: 100 million years.\p"
	.string "Please do not touch.$"
