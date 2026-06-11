Route21_Khanto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route21_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, Route21_Khanto_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route21_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

Route21_Khanto_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


Route21_Khanto_EventScript_Sailor::
	lock
	faceplayer
	msgbox Route21_Khanto_Text_SailorQuestion, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq VAR_RESULT, NO, Route21_Khanto_EventScript_SailorDecline
	msgbox Route21_Khanto_Text_SailorDepart, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	warp MAP_LITTLEROOT_TOWN, 13, 18
	fadescreen FADE_FROM_BLACK
	release
	end

Route21_Khanto_EventScript_SailorDecline::
	msgbox Route21_Khanto_Text_SailorDecline, MSGBOX_DEFAULT
	release
	end

Route21_Khanto_Text_SailorQuestion:
	.string "Hail, TRAINER! Are you heading\n"
	.string "back to HOENN?\p"
	.string "The sea's a bit rough today, but\n"
	.string "I can take you to LITTLEROOT TOWN!$"

Route21_Khanto_Text_SailorDepart:
	.string "Watch your step!\n"
	.string "Next stop... HOENN!$"

Route21_Khanto_Text_SailorDecline:
	.string "Arr, the sea'll still be here\n"
	.string "when you need it!$"
