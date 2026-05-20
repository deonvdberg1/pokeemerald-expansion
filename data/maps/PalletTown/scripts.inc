PalletTown_MapScripts::
# 5 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PalletTown_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PalletTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

PalletTown_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


PalletTown_ProfOak::
# 20 "data/maps/PalletTown/scripts.pory"
	lock
# 21 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 22 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_ProfOak_Text_0
# 25 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_Mom::
# 31 "data/maps/PalletTown/scripts.pory"
	lock
# 32 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 33 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Mom_Text_0
# 35 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_Rival::
# 41 "data/maps/PalletTown/scripts.pory"
	lock
# 42 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 43 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Rival_Text_0
# 47 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_Woman::
# 53 "data/maps/PalletTown/scripts.pory"
	lock
# 54 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 55 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Woman_Text_0
# 58 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_Man::
# 63 "data/maps/PalletTown/scripts.pory"
	lock
# 64 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 65 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Man_Text_0
# 67 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_Fisherman::
# 72 "data/maps/PalletTown/scripts.pory"
	lock
# 73 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 74 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Fisherman_Text_0
# 77 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_TownSign::
# 86 "data/maps/PalletTown/scripts.pory"
	lock
# 87 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 88 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_TownSign_Text_0
# 89 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_OakLabSign::
# 94 "data/maps/PalletTown/scripts.pory"
	lock
# 95 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 96 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_OakLabSign_Text_0
# 97 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_ProfOak_Text_0:
# 22 "data/maps/PalletTown/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "I was hoping you'd come by.\l"
	.string "Come see me in my lab when you're ready!$"

PalletTown_Mom_Text_0:
# 33 "data/maps/PalletTown/scripts.pory"
	.string "Hello, dear! \n"
	.string "Take a rest before you head out.$"

PalletTown_Rival_Text_0:
# 43 "data/maps/PalletTown/scripts.pory"
	.string "{PLAYER}! \n"
	.string "You're still here?\l"
	.string "I'm going to be the very best,\l"
	.string "you know!$"

PalletTown_Woman_Text_0:
# 55 "data/maps/PalletTown/scripts.pory"
	.string "Welcome to Pallet Town!\n"
	.string "It's a quiet little town,\l"
	.string "but we love it.$"

PalletTown_Man_Text_0:
# 65 "data/maps/PalletTown/scripts.pory"
	.string "Prof. Oak's lab is up ahead.\n"
	.string "He's a world-famous Pokémon researcher!$"

PalletTown_Fisherman_Text_0:
# 74 "data/maps/PalletTown/scripts.pory"
	.string "If you walk in tall grass,\n"
	.string "wild Pokémon will appear.\l"
	.string "Be sure to have some Pokéballs handy!$"

PalletTown_TownSign_Text_0:
# 88 "data/maps/PalletTown/scripts.pory"
	.string "PALLET TOWN\lA place of new beginnings.$"

PalletTown_OakLabSign_Text_0:
# 96 "data/maps/PalletTown/scripts.pory"
	.string "OAK POKÉMON RESEARCH LAB\lWhere dreams begin.$"
