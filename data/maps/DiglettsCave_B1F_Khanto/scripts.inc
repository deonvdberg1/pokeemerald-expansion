DiglettsCave_B1F_Khanto_MapScripts::
	.byte 0

@ Hiker trainer (Alan - Geodude/Nosepass/Graveler lv22)
DiglettsCave_B1F_Khanto_EventScript_Hiker::
	trainerbattle_single TRAINER_ALAN, DiglettsCave_B1F_Khanto_Text_HikerIntro, DiglettsCave_B1F_Khanto_Text_HikerDefeat
	msgbox DiglettsCave_B1F_Khanto_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end

DiglettsCave_B1F_Khanto_Text_HikerIntro:
	.string "Heheh! This cave is full of\n"
	.string "DIGLETT! Don't step on them!$"

DiglettsCave_B1F_Khanto_Text_HikerDefeat:
	.string "Yowch! You're tougher than\n"
	.string "a DIGLETT's head!$"

DiglettsCave_B1F_Khanto_Text_HikerPostBattle:
	.string "I've been digging in this cave\n"
	.string "for years. The DIGLETT here are\n"
	.string "unusually feisty today!$"
