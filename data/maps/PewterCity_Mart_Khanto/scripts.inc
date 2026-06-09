PewterCity_Mart_Khanto_MapScripts::
	.byte 0

PewterCity_Mart_Khanto_EventScript_Youngster::
	msgbox PewterCity_Mart_Khanto_Text_BoughtWeirdFishFromShadyGuy, MSGBOX_NPC
	end

PewterCity_Mart_Khanto_EventScript_Boy::
	msgbox PewterCity_Mart_Khanto_Text_GoodThingsIfRaiseMonsDiligently, MSGBOX_NPC
	end

PewterCity_Mart_Khanto_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart PewterCity_Mart_Khanto_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PewterCity_Mart_Khanto_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	pokemartlistend

PewterCity_Mart_Khanto_Text_BoughtWeirdFishFromShadyGuy:
	.string "I bought a weird FISH POKEMON from\n"
	.string "some shady guy.\p"
	.string "It's really weak, but I think it\n"
	.string "might be worth a lot one day.$"

PewterCity_Mart_Khanto_Text_GoodThingsIfRaiseMonsDiligently:
	.string "A POKEMON that you raise with\n"
	.string "love and care will always be strong.\p"
	.string "But I guess that's easier said\n"
	.string "than done...$"
