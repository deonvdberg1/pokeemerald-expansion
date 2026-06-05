PewterCity_Khanto_MapScripts::
	.byte 0

PewterCity_Khanto_EventScript_Lass::
	lock
	faceplayer
	msgbox PewterCity_Khanto_Text_Lass, MSGBOX_DEFAULT
	release
	end

PewterCity_Khanto_EventScript_MuseumGuide::
	lock
	faceplayer
	msgbox PewterCity_Khanto_Text_MuseumGuide, MSGBOX_DEFAULT
	release
	end

PewterCity_Khanto_EventScript_FatMan::
	lock
	faceplayer
	msgbox PewterCity_Khanto_Text_FatMan, MSGBOX_DEFAULT
	release
	end

PewterCity_Khanto_EventScript_BugCatcher::
	lock
	faceplayer
	msgbox PewterCity_Khanto_Text_BugCatcher, MSGBOX_DEFAULT
	release
	end

PewterCity_Khanto_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, PewterCity_Khanto_EventScript_GymGuidePost
	msgbox PewterCity_Khanto_Text_GymGuide, MSGBOX_DEFAULT
	release
	end

PewterCity_Khanto_EventScript_GymGuidePost::
	msgbox PewterCity_Khanto_Text_GymGuidePost, MSGBOX_DEFAULT
	release
	end

PewterCity_Khanto_EventScript_RunningShoesAide::
	lock
	faceplayer
	msgbox PewterCity_Khanto_Text_RunningShoesAide, MSGBOX_DEFAULT
	release
	end

PewterCity_Khanto_Text_Lass:
	.string "Have you been to the PEWTER MUSEUM?\p"
	.string "There are all kinds of scientific\n"
	.string "exhibits on display!$"

PewterCity_Khanto_Text_MuseumGuide:
	.string "The PEWTER MUSEUM of SCIENCE\n"
	.string "has many fascinating exhibits.\p"
	.string "Be sure to visit the second floor\n"
	.string "for the space exhibit!$"

PewterCity_Khanto_Text_FatMan:
	.string "Huff... puff...\p"
	.string "I'm walking all over this city\n"
	.string "to find rare POKEMON!\p"
	.string "But all I find are PIDGEY and\n"
	.string "RATTATA...$"

PewterCity_Khanto_Text_BugCatcher:
	.string "I'm going to catch a POKEMON\n"
	.string "that's as tough as a rock!\p"
	.string "But I can't find any in this city...$"

PewterCity_Khanto_Text_GymGuide:
	.string "Hey! Want some advice?\p"
	.string "The PEWTER GYM's BROCK uses\n"
	.string "rock-hard ROCK-type POKEMON.\p"
	.string "GRASS and WATER moves work best\n"
	.string "against them. Good luck!$"

PewterCity_Khanto_Text_GymGuidePost:
	.string "You beat BROCK?\p"
	.string "That's awesome! Next up is\n"
	.string "the CERULEAN GYM!$"

PewterCity_Khanto_Text_RunningShoesAide:
	.string "I'm PROF. OAK's AIDE.\p"
	.string "I'm here to help beginning\n"
	.string "TRAINERS get started.\p"
	.string "Have you registered your\n"
	.string "POKEDEX yet?\p"
	.string "Once you do, you'll be able\n"
	.string "to run with the RUNNING SHOES!$"

PewterCity_Khanto_EventScript_GymSign::
	msgbox PewterCity_Khanto_Text_GymSign, MSGBOX_SIGN
	end

PewterCity_Khanto_Text_GymSign:
	.string "PEWTER CITY POKEMON GYM\n"
	.string "LEADER: BROCK\p"
	.string "The Rock-Solid POKEMON\n"
	.string "TRAINER!$"

PewterCity_Khanto_EventScript_MuseumSign::
	msgbox PewterCity_Khanto_Text_MuseumSign, MSGBOX_SIGN
	end

PewterCity_Khanto_Text_MuseumSign:
	.string "PEWTER MUSEUM of SCIENCE$"

PewterCity_Khanto_EventScript_MartSign::
	msgbox PewterCity_Khanto_Text_MartSign, MSGBOX_SIGN
	end

PewterCity_Khanto_Text_MartSign:
	.string "PEWTER CITY MART\p"
	.string "We sell a wide variety of goods!$"

PewterCity_Khanto_EventScript_PokemonCenterSign::
	msgbox PewterCity_Khanto_Text_PokemonCenterSign, MSGBOX_SIGN
	end

PewterCity_Khanto_Text_PokemonCenterSign:
	.string "PEWTER CITY POKEMON CENTER$"

PewterCity_Khanto_EventScript_CitySign::
	msgbox PewterCity_Khanto_Text_CitySign, MSGBOX_SIGN
	end

PewterCity_Khanto_Text_CitySign:
	.string "PEWTER CITY\p"
	.string "A Stone Gray City$"
