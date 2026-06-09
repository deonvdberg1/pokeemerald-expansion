Route2_ViridianForest_Khanto_MapScripts::
	.byte 0

@ ========== NPCs (non-trainer) ==========

Route2_ViridianForest_Khanto_EventScript_Youngster::
	msgbox Route2_ViridianForest_Khanto_Text_Youngster, MSGBOX_NPC
	end

Route2_ViridianForest_Khanto_Text_Youngster:
	.string "I came to explore the forest, but\n"
	.string "it's easy to get lost in here!\n"
	.string "Make sure you have enough POKé BALLS!$"

Route2_ViridianForest_Khanto_EventScript_Boy::
	msgbox Route2_ViridianForest_Khanto_Text_Boy, MSGBOX_NPC
	end

Route2_ViridianForest_Khanto_Text_Boy:
	.string "BUG CATCHERS are experts at\n"
	.string "catching bugs! They use weak POKéMON\n"
	.string "but never underestimate them!$"

@ ========== Bug Catcher Trainer Battles ==========

Route2_ViridianForest_Khanto_EventScript_Rick::
	trainerbattle_single TRAINER_BUG_CATCHER_RICK_KHANTO, Route2_ViridianForest_Khanto_Text_RickIntro, Route2_ViridianForest_Khanto_Text_RickDefeat
	msgbox Route2_ViridianForest_Khanto_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_RickIntro:
	.string "Let me show you what my\n"
	.string "BUG POKéMON can do!$"

Route2_ViridianForest_Khanto_Text_RickDefeat:
	.string "No! My bug hunt failed!$"

Route2_ViridianForest_Khanto_Text_RickPostBattle:
	.string "You're tough! But my bugs will\n"
	.string "get stronger! You'll see!$"

Route2_ViridianForest_Khanto_EventScript_Jose::
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG_KHANTO, Route2_ViridianForest_Khanto_Text_JoseIntro, Route2_ViridianForest_Khanto_Text_JoseDefeat
	msgbox Route2_ViridianForest_Khanto_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_JoseIntro:
	.string "Hohoho! You wandered into my\n"
	.string "web of BUG POKéMON!$"

Route2_ViridianForest_Khanto_Text_JoseDefeat:
	.string "My web has been torn apart!$"

Route2_ViridianForest_Khanto_Text_JosePostBattle:
	.string "Don't underestimate bug POKéMON!\n"
	.string "They evolve into powerful forms!$"

Route2_ViridianForest_Khanto_EventScript_Lyle::
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY_KHANTO, Route2_ViridianForest_Khanto_Text_LyleIntro, Route2_ViridianForest_Khanto_Text_LyleDefeat
	msgbox Route2_ViridianForest_Khanto_Text_LylePostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_LyleIntro:
	.string "I caught a bunch of bug POKéMON!\n"
	.string "Want to see?$"

Route2_ViridianForest_Khanto_Text_LyleDefeat:
	.string "Aww, they're not strong enough yet!$"

Route2_ViridianForest_Khanto_Text_LylePostBattle:
	.string "I'll raise my bugs to be the best!\n"
	.string "You'll see them evolve one day!$"

@ Anthony is a Youngster trainer (Tommy - Geodude lv8)
Route2_ViridianForest_Khanto_EventScript_Anthony::
	trainerbattle_single TRAINER_TOMMY, Route2_ViridianForest_Khanto_Text_AnthonyIntro, Route2_ViridianForest_Khanto_Text_AnthonyDefeat
	msgbox Route2_ViridianForest_Khanto_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_AnthonyIntro:
	.string "Hey! I heard there are strong\n"
	.string "POKéMON deeper in the forest!$"

Route2_ViridianForest_Khanto_Text_AnthonyDefeat:
	.string "Whoa! You're stronger than I thought!$"

Route2_ViridianForest_Khanto_Text_AnthonyPostBattle:
	.string "Be careful going deeper!\n"
	.string "There are lots of trainers ahead!$"

@ Charlie is a Youngster trainer (Joey - Machop lv9)
Route2_ViridianForest_Khanto_EventScript_Charlie::
	trainerbattle_single TRAINER_JOEY, Route2_ViridianForest_Khanto_Text_CharlieIntro, Route2_ViridianForest_Khanto_Text_CharlieDefeat
	msgbox Route2_ViridianForest_Khanto_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_CharlieIntro:
	.string "I'm gonna be the world's greatest\n"
	.string "POKéMON trainer! Starting with you!$"

Route2_ViridianForest_Khanto_Text_CharlieDefeat:
	.string "I still have a long way to go...$"

Route2_ViridianForest_Khanto_Text_CharliePostBattle:
	.string "This forest is the perfect place\n"
	.string "to train! I'll come back stronger!$"

@ ========== Sign Messages ==========

Route2_ViridianForest_Khanto_EventScript_TrainerTips1::
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips1, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips1:
	.string "TRAINER TIPS\n"
	.string "Weaken POKéMON before you catch them!\n"
	.string "They're easier to catch when hurt!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips2::
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips2, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips2:
	.string "TRAINER TIPS\n"
	.string "Some POKéMON evolve at certain levels.\n"
	.string "Keep training them to see!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips3::
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips3, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips3:
	.string "TRAINER TIPS\n"
	.string "POKéMON are easier to catch when\n"
	.string "they are asleep or poisoned!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips4::
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips4, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips4:
	.string "TRAINER TIPS\n"
	.string "Heal your POKéMON at a POKéMON CENTER\n"
	.string "before venturing into tall grass!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips5::
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips5, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips5:
	.string "TRAINER TIPS\n"
	.string "Use ANTIDOTES to cure poisoning\n"
	.string "from BUG POKéMON attacks!$"

Route2_ViridianForest_Khanto_EventScript_ExitSign::
	msgbox Route2_ViridianForest_Khanto_Text_ExitSign, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_ExitSign:
	.string "VIRIDIAN FOREST\n"
	.string "LEAVE THROUGH HERE\n"
	.string "TO ROUTE 2$"

@ ----- Secret Area Guard Trigger (Dome Quest gate - checks Boulder Badge) -----
@ Trigger tile is at (52,5) - guard stands at (52,4)
Route2_ViridianForest_Khanto_EventScript_GuardTrigger::
	lockall
	goto_if_set FLAG_BADGE01_GET, Route2_ViridianForest_Khanto_EventScript_GuardTriggerPass
	msgbox Route2_ViridianForest_Khanto_Text_GuardBlock, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route2_ViridianForest_Khanto_Movement_PushLeft
	waitmovement 0
	releaseall
	end

Route2_ViridianForest_Khanto_EventScript_GuardTriggerPass::
	msgbox Route2_ViridianForest_Khanto_Text_GuardPass, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_1, 1
	releaseall
	end

@ Also respond to A-press for convenience
Route2_ViridianForest_Khanto_EventScript_SecretGuard::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, Route2_ViridianForest_Khanto_EventScript_GuardPressedPass
	msgbox Route2_ViridianForest_Khanto_Text_GuardBlock, MSGBOX_DEFAULT
	release
	end

Route2_ViridianForest_Khanto_EventScript_GuardPressedPass::
	msgbox Route2_ViridianForest_Khanto_Text_GuardPass, MSGBOX_DEFAULT
	release
	end

Route2_ViridianForest_Khanto_Movement_PushLeft:
	walk_left
	walk_left
	step_end

Route2_ViridianForest_Khanto_Text_GuardBlock:
	.string "Hey! This area is off-limits to\n"
	.string "rookie TRAINERS!\p"
	.string "The BUG CATCHERS' UNION only lets\n"
	.string "trainers who've beaten the PEWTER\n"
	.string "GYM pass through here.$"

Route2_ViridianForest_Khanto_Text_GuardPass:
	.string "Oh! You've got the BOULDER BADGE!\p"
	.string "That means you're a certified\n"
	.string "TRAINER. Go right ahead!$"

@ ----- Team Rocket Grunts (capturing Scyther) -----
Route2_ViridianForest_Khanto_EventScript_Rocket1::
	trainerbattle_single TRAINER_ROCKET_GRUNT_1, Route2_ViridianForest_Khanto_Text_Rocket1Intro, Route2_ViridianForest_Khanto_Text_Rocket1Defeat
	msgbox Route2_ViridianForest_Khanto_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
	call Route2_ViridianForest_Khanto_EventScript_CheckRocketsDefeated
	end

Route2_ViridianForest_Khanto_EventScript_Rocket2::
	trainerbattle_single TRAINER_ROCKET_GRUNT_2, Route2_ViridianForest_Khanto_Text_Rocket2Intro, Route2_ViridianForest_Khanto_Text_Rocket2Defeat
	msgbox Route2_ViridianForest_Khanto_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	call Route2_ViridianForest_Khanto_EventScript_CheckRocketsDefeated
	end

Route2_ViridianForest_Khanto_EventScript_CheckRocketsDefeated::
	goto_if_not_defeated TRAINER_ROCKET_GRUNT_1, Route2_ViridianForest_Khanto_EventScript_RocketsStillActive
	goto_if_not_defeated TRAINER_ROCKET_GRUNT_2, Route2_ViridianForest_Khanto_EventScript_RocketsStillActive
	removeobject 13
	removeobject 14
	clearflag FLAG_HIDE_VIRIDIAN_FOREST_SCYTHER
	msgbox Route2_ViridianForest_Khanto_Text_RocketsGone, MSGBOX_DEFAULT
	return

Route2_ViridianForest_Khanto_EventScript_RocketsStillActive::
	return

Route2_ViridianForest_Khanto_Text_Rocket1Intro:
	.string "Heh heh heh! This rare SCYTHER\n"
	.string "will fetch a high price on the\n"
	.string "BLACK MARKET! Stay out of this!$"

Route2_ViridianForest_Khanto_Text_Rocket1Defeat:
	.string "Grrr! You'll pay for this!$"

Route2_ViridianForest_Khanto_Text_Rocket1PostBattle:
	.string "This isn't over... The boss will\n"
	.string "hear about this!$"

Route2_ViridianForest_Khanto_Text_Rocket2Intro:
	.string "Intruder! This operation is\n"
	.string "strictly TEAM ROCKET business!$"

Route2_ViridianForest_Khanto_Text_Rocket2Defeat:
	.string "Urgh! Our plans foiled!$"

Route2_ViridianForest_Khanto_Text_Rocket2PostBattle:
	.string "The SCYTHER got away thanks\n"
	.string "to you! TEAM ROCKET won't\n"
	.string "forget this!$"

Route2_ViridianForest_Khanto_Text_RocketsGone:
	.string "The TEAM ROCKET members fled!\p"
	.string "The SCYTHER is safe now...\n"
	.string "It looks at you gratefully.$"

@ ----- Scyther (Dome Quest completion) -----
Route2_ViridianForest_Khanto_EventScript_Scyther::
	lock
	faceplayer
	goto_if_set FLAG_DOME_QUEST_COMPLETE, Route2_ViridianForest_Khanto_EventScript_ScytherAlreadySaved
	msgbox Route2_ViridianForest_Khanto_Text_ScytherGrateful, MSGBOX_DEFAULT
	setflag FLAG_DOME_QUEST_COMPLETE
	setflag FLAG_HIDE_VIRIDIAN_FOREST_SCYTHER
	release
	end

Route2_ViridianForest_Khanto_EventScript_ScytherAlreadySaved::
	msgbox Route2_ViridianForest_Khanto_Text_ScytherGone, MSGBOX_DEFAULT
	release
	end

Route2_ViridianForest_Khanto_Text_ScytherGrateful:
	.string "The SCYTHER approaches you\n"
	.string "and nudges your hand gently.\p"
	.string "It seems grateful to be free\n"
	.string "from TEAM ROCKET.\p"
	.string "It drops a strange metallic\n"
	.string "coating at your feet and\n"
	.string "disappears into the trees...\p"
	.string "You got a glimpse of a\n"
	.string "METAL COAT!$"

Route2_ViridianForest_Khanto_Text_ScytherGone:
	.string "The forest is quiet now...\n"
	.string "The SCYTHER made it out safely.$"
