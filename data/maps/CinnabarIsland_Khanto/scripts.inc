CinnabarIsland_Khanto_MapScripts::
	.byte 0

CinnabarIsland_Khanto_EventScript_OldMan::
	lock
	faceplayer
	msgbox CinnabarIsland_Khanto_Text_OldMan, MSGBOX_DEFAULT
	release
	end

CinnabarIsland_Khanto_EventScript_Woman::
	lock
	faceplayer
	msgbox CinnabarIsland_Khanto_Text_Woman, MSGBOX_DEFAULT
	release
	end

CinnabarIsland_Khanto_EventScript_GymSign::
	msgbox CinnabarIsland_Khanto_Text_GymSign, MSGBOX_SIGN
	end

CinnabarIsland_Khanto_EventScript_LabSign::
	msgbox CinnabarIsland_Khanto_Text_LabSign, MSGBOX_SIGN
	end

CinnabarIsland_Khanto_EventScript_CitySign::
	msgbox CinnabarIsland_Khanto_Text_CitySign, MSGBOX_SIGN
	end

CinnabarIsland_Khanto_EventScript_CenterSign::
	msgbox CinnabarIsland_Khanto_Text_CenterSign, MSGBOX_SIGN
	end

CinnabarIsland_Khanto_EventScript_MartSign::
	msgbox CinnabarIsland_Khanto_Text_MartSign, MSGBOX_SIGN
	end

CinnabarIsland_Khanto_Text_OldMan:
	.string "CINNABAR ISLAND is a volcanic island.\p"
	.string "The soil here is rich in minerals\n"
	.string "from the ancient volcano.\p"
	.string "That's why the POKEMON LAB was\n"
	.string "built here - for research!$"

CinnabarIsland_Khanto_Text_Woman:
	.string "The POKEMON LAB here is world-famous!\p"
	.string "They can revive POKEMON from\n"
	.string "old fossils, you know.$"

CinnabarIsland_Khanto_Text_GymSign:
	.string "CINNABAR ISLAND POKEMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "The red-hot POKEMON TRADER!$"

CinnabarIsland_Khanto_Text_LabSign:
	.string "CINNABAR ISLAND POKEMON LAB\p"
	.string "Where the past comes back to life!$"

CinnabarIsland_Khanto_Text_CitySign:
	.string "CINNABAR ISLAND\p"
	.string "The Fiery Island of Intrigue$"

CinnabarIsland_Khanto_Text_CenterSign:
	.string "POKEMON CENTER$"

CinnabarIsland_Khanto_Text_MartSign:
	.string "POKEMON MART$"
