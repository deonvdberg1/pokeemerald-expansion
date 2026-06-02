Route2_ViridianForest_Khanto_MapScripts::
	.byte 0

@ ========== NPCs (non-trainer) ==========

Route2_ViridianForest_Khanto_EventScript_Youngster::
	msgbox Route2_ViridianForest_Khanto_Text_Youngster, MSGBOX_NPC
	end

Route2_ViridianForest_Khanto_Text_Youngster:
	.string "I came to explore the forest, but{newline}it's easy to get lost in here!{newline}Make sure you have enough POKé BALLS!$"

Route2_ViridianForest_Khanto_EventScript_Boy::
	msgbox Route2_ViridianForest_Khanto_Text_Boy, MSGBOX_NPC
	end

Route2_ViridianForest_Khanto_Text_Boy:
	.string "BUG CATCHERS are experts at{newline}catching bugs! They use weak POKéMON{newline}but never underestimate them!$"

@ ========== Bug Catcher Trainer Battles ==========

Route2_ViridianForest_Khanto_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route2_ViridianForest_Khanto_Text_RickIntro, Route2_ViridianForest_Khanto_Text_RickDefeat
	msgbox Route2_ViridianForest_Khanto_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_RickIntro:
	.string "Let me show you what my{newline}BUG POKéMON can do!$"

Route2_ViridianForest_Khanto_Text_RickDefeat:
	.string "No! My bug hunt failed!$"

Route2_ViridianForest_Khanto_Text_RickPostBattle:
	.string "You're tough! But my bugs will{newline}get stronger! You'll see!$"

Route2_ViridianForest_Khanto_EventScript_Jose::
	trainerbattle_single TRAINER_JOSE, Route2_ViridianForest_Khanto_Text_JoseIntro, Route2_ViridianForest_Khanto_Text_JoseDefeat
	msgbox Route2_ViridianForest_Khanto_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_JoseIntro:
	.string "Hohoho! You wandered into my{newline}web of BUG POKéMON!$"

Route2_ViridianForest_Khanto_Text_JoseDefeat:
	.string "My web has been torn apart!$"

Route2_ViridianForest_Khanto_Text_JosePostBattle:
	.string "Don't underestimate bug POKéMON!{newline}They evolve into powerful forms!$"

Route2_ViridianForest_Khanto_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE, Route2_ViridianForest_Khanto_Text_LyleIntro, Route2_ViridianForest_Khanto_Text_LyleDefeat
	msgbox Route2_ViridianForest_Khanto_Text_LylePostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_LyleIntro:
	.string "I caught a bunch of bug POKéMON!{newline}Want to see?$"

Route2_ViridianForest_Khanto_Text_LyleDefeat:
	.string "Aww, they're not strong enough yet!$"

Route2_ViridianForest_Khanto_Text_LylePostBattle:
	.string "I'll raise my bugs to be the best!{newline}You'll see them evolve one day!$"

@ Anthony is a Youngster trainer (Tommy - Geodude lv8)
Route2_ViridianForest_Khanto_EventScript_Anthony::
	trainerbattle_single TRAINER_TOMMY, Route2_ViridianForest_Khanto_Text_AnthonyIntro, Route2_ViridianForest_Khanto_Text_AnthonyDefeat
	msgbox Route2_ViridianForest_Khanto_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_AnthonyIntro:
	.string "Hey! I heard there are strong{newline}POKéMON deeper in the forest!$"

Route2_ViridianForest_Khanto_Text_AnthonyDefeat:
	.string "Whoa! You're stronger than I thought!$"

Route2_ViridianForest_Khanto_Text_AnthonyPostBattle:
	.string "Be careful going deeper!{newline}There are lots of trainers ahead!$"

@ Charlie is a Youngster trainer (Joey - Machop lv9)
Route2_ViridianForest_Khanto_EventScript_Charlie::
	trainerbattle_single TRAINER_JOEY, Route2_ViridianForest_Khanto_Text_CharlieIntro, Route2_ViridianForest_Khanto_Text_CharlieDefeat
	msgbox Route2_ViridianForest_Khanto_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

Route2_ViridianForest_Khanto_Text_CharlieIntro:
	.string "I'm gonna be the world's greatest{newline}POKéMON trainer! Starting with you!$"

Route2_ViridianForest_Khanto_Text_CharlieDefeat:
	.string "I still have a long way to go...$"

Route2_ViridianForest_Khanto_Text_CharliePostBattle:
	.string "This forest is the perfect place{newline}to train! I'll come back stronger!$"

@ ========== Sign Messages ==========

Route2_ViridianForest_Khanto_EventScript_TrainerTips1:
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips1, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips1:
	.string "TRAINER TIPS{newline}Weaken POKéMON before you catch them!{newline}They're easier to catch when hurt!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips2:
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips2, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips2:
	.string "TRAINER TIPS{newline}Some POKéMON evolve at certain levels.{newline}Keep training them to see!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips3:
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips3, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips3:
	.string "TRAINER TIPS{newline}POKéMON are easier to catch when{newline}they are asleep or poisoned!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips4:
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips4, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips4:
	.string "TRAINER TIPS{newline}Heal your POKéMON at a POKéMON CENTER{newline}before venturing into tall grass!$"

Route2_ViridianForest_Khanto_EventScript_TrainerTips5:
	msgbox Route2_ViridianForest_Khanto_Text_TrainerTips5, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_TrainerTips5:
	.string "TRAINER TIPS{newline}Use ANTIDOTES to cure poisoning{newline}from BUG POKéMON attacks!$"

Route2_ViridianForest_Khanto_EventScript_ExitSign:
	msgbox Route2_ViridianForest_Khanto_Text_ExitSign, MSGBOX_SIGN
	end

Route2_ViridianForest_Khanto_Text_ExitSign:
	.string "VIRIDIAN FOREST{newline}LEAVE THROUGH HERE{newline}TO ROUTE 2$"
