@
@ Route 2 House - Khanto
@ Scientist who researches evolution items
@

Route2_House_Khanto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_Khanto_OnTransition
	.byte 0

Route2_House_Khanto_OnTransition:
	setflag FLAG_SYS_POKEMON_GET
	end

Route2_House_Khanto_EventScript_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_GOT_METAL_COAT_FROM_SCYTHER, Route2_House_Khanto_EventScript_ScientistHasMetalCoat
	msgbox Route2_House_Khanto_Text_ScientistIntro, MSGBOX_DEFAULT
	release
	end

Route2_House_Khanto_EventScript_ScientistHasMetalCoat::
	msgbox Route2_House_Khanto_Text_ScientistMetalCoat, MSGBOX_DEFAULT
	release
	end

Route2_House_Khanto_Text_ScientistIntro:
	.string "I'm researching items that cause\n"
	.string "certain Pokémon to evolve.\p"
	.string "I've heard rumors of a wild\n"
	.string "SCYTHER in VIRIDIAN FOREST that\n"
	.string "carries a special metallic coating.\p"
	.string "If you ever come across a\n"
	.string "METAL COAT, I'd love to\n"
	.string "study it!$"

Route2_House_Khanto_Text_ScientistMetalCoat:
	.string "You found a METAL COAT?\p"
	.string "That's incredible! The SCYTHER\n"
	.string "must have trusted you.\p"
	.string "If you give that METAL COAT to\n"
	.string "a SCYTHER while trading, it'll\n"
	.string "evolve into SCIZOR!\p"
	.string "Fascinating stuff!$"
