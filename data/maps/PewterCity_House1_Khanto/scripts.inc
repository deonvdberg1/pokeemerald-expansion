PewterCity_House1_Khanto_MapScripts::
	.byte 0

PewterCity_House1_Khanto_EventScript_BaldingMan::
	msgbox PewterCity_House1_Khanto_Text_TradeMonsAreFinicky, MSGBOX_NPC
	end

PewterCity_House1_Khanto_EventScript_LittleBoy::
	lock
	msgbox PewterCity_House1_Khanto_Text_NidoranSit
	call PewterCity_House1_Khanto_EventScript_DoNidoranCry
	release
	end

PewterCity_House1_Khanto_EventScript_Nidoran::
	lock
	faceplayer
	call PewterCity_House1_Khanto_EventScript_DoNidoranCry
	release
	end

PewterCity_House1_Khanto_EventScript_DoNidoranCry::
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
	msgbox PewterCity_House1_Khanto_Text_NidoranPurr
	waitmoncry
	end

PewterCity_House1_Khanto_Text_TradeMonsAreFinicky:
	.string "POKEMON you get in trades grow faster\n"
	.string "than ones you catch yourself.\p"
	.string "But they're finicky, too.\p"
	.string "They may not obey you if you don't\n"
	.string "have the GYM BADGE that they respect.$"

PewterCity_House1_Khanto_Text_NidoranSit:
	.string "NIDORAN, sit!$"

PewterCity_House1_Khanto_Text_NidoranPurr:
	.string "NIDORAN: Puuurrrrrr!$"
