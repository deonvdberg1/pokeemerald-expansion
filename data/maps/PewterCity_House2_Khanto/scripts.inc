PewterCity_House2_Khanto_MapScripts::
	.byte 0

PewterCity_House2_Khanto_EventScript_OldMan::
	msgbox PewterCity_House2_Khanto_Text_MonsLearnTechniquesAsTheyGrow, MSGBOX_NPC
	end

PewterCity_House2_Khanto_EventScript_LittleBoy::
	msgbox PewterCity_House2_Khanto_Text_MonsEasierCatchIfStatused, MSGBOX_NPC
	end

PewterCity_House2_Khanto_Text_MonsLearnTechniquesAsTheyGrow:
	.string "POKEMON learn new techniques as\n"
	.string "they grow.\p"
	.string "But some moves must be taught to\n"
	.string "them by their TRAINER.$"

PewterCity_House2_Khanto_Text_MonsEasierCatchIfStatused:
	.string "If a POKEMON is weakened or has a\n"
	.string "status condition, it's easier to\l"
	.string "catch it.\p"
	.string "But it still won't be easy to get\n"
	.string "the ones with tough bodies!$"
