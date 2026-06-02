Route2_Khanto_MapScripts::
	.byte 0

@ ========== Bug Catcher Trainers (Kanto Pokémon) ==========

Route2_Khanto_EventScript_Trainer1::
	trainerbattle_single TRAINER_BUG_CATCHER_RICK_KHANTO, Route2_Khanto_Text_Trainer1Intro, Route2_Khanto_Text_Trainer1Defeat
	msgbox Route2_Khanto_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end

Route2_Khanto_Text_Trainer1Intro:
	.string "I'm protecting the entrance to\n"
	.string "VIRIDIAN FOREST! You can't get past!$"

Route2_Khanto_Text_Trainer1Defeat:
	.string "I couldn't protect it...$"

Route2_Khanto_Text_Trainer1PostBattle:
	.string "The forest is full of bug POKéMON!\n"
	.string "Be careful going in there!$"

Route2_Khanto_EventScript_Trainer2::
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG_KHANTO, Route2_Khanto_Text_Trainer2Intro, Route2_Khanto_Text_Trainer2Defeat
	msgbox Route2_Khanto_Text_Trainer2PostBattle, MSGBOX_AUTOCLOSE
	end

Route2_Khanto_Text_Trainer2Intro:
	.string "I've been training here all day!\n"
	.string "I'm ready for any challenger!$"

Route2_Khanto_Text_Trainer2Defeat:
	.string "Maybe I need more training...$"

Route2_Khanto_Text_Trainer2PostBattle:
	.string "This route has lots of tall grass.\n"
	.string "Different POKéMON appear here!$"

@ ========== Signs ==========

Route2_Khanto_EventScript_DiglettsCaveSign::
	msgbox Route2_Khanto_Text_DiglettsCaveSign, MSGBOX_SIGN
	end

Route2_Khanto_Text_DiglettsCaveSign:
	.string "DIGLETT'S CAVE\n"
	.string "VIRIDIAN CITY - PEWTER CITY$"

Route2_Khanto_EventScript_RouteSign::
	msgbox Route2_Khanto_Text_RouteSign, MSGBOX_SIGN
	end

Route2_Khanto_Text_RouteSign:
	.string "ROUTE 2\n"
	.string "VIRIDIAN FOREST - PEWTER CITY$"
