PalletTown_ProfessorOaksLab_Khanto_MapScripts::
# 5 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PalletTown_ProfessorOaksLab_Khanto_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


PalletTown_ProfessorOaksLab_EventScript_Oak::
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 15 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 16 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_Oak_Text_0
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Bookshelf::
# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_Bookshelf_Text_0
# 35 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Oak_Text_0:
# 16 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oak: Ah, {PLAYER}!\n"
	.string "Welcome to my laboratory!\l"
	.string "I've been studying Pokémon\l"
	.string "here in Pallet Town for years.\l"
	.string "Tell me, have you ever caught\l"
	.string "a Pokémon before?$"

PalletTown_ProfessorOaksLab_EventScript_Bookshelf_Text_0:
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's filled with Pokémon research\n"
	.string "journals and data.$"
