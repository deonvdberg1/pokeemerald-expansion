Route1_Khanto_MapScripts::
	.byte 0

@ ========== NPC ==========

Route1_Khanto_EventScript_Girl::
	msgbox Route1_Khanto_Text_Girl, MSGBOX_NPC
	end

Route1_Khanto_Text_Girl:
	.string "ROUTE 1 is a short path between\n"
	.string "PALLET TOWN and VIRIDIAN CITY.\p"
	.string "The grass here has wild POKéMON,\n"
	.string "so it's a great place to train!$"

@ ========== Signs ==========

Route1_Khanto_EventScript_ViridianSign:
	msgbox Route1_Khanto_Text_ViridianSign, MSGBOX_SIGN
	end

Route1_Khanto_Text_ViridianSign:
	.string "ROUTE 1\n"
	.string "- VIRIDIAN CITY AHEAD -$"

Route1_Khanto_EventScript_PalletSign:
	msgbox Route1_Khanto_Text_PalletSign, MSGBOX_SIGN
	end

Route1_Khanto_Text_PalletSign:
	.string "ROUTE 1\n"
	.string "- PALLET TOWN AHEAD -$"
