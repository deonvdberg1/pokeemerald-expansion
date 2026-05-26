LittlerootCave_MapScripts::
# 3 "data/maps/LittlerootCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/LittlerootCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LittlerootCave_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

LittlerootCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/LittlerootCave/scripts.pory"
	goto_if FLAG_TEMP_7, LittlerootCave_EventScript_HideBagon
	return

LittlerootCave_MapScripts_MAP_SCRIPT_ON_RESUME:
	return


LittlerootCave_EventScript_HideBagon::
# 14 "data/maps/LittlerootCave/scripts.pory"
	setflag FLAG_TEMP_7
	end


LittlerootCave_EventScript_Bagon::
# 20 "data/maps/LittlerootCave/scripts.pory"
	lock
# 21 "data/maps/LittlerootCave/scripts.pory"
	faceplayer
# 22 "data/maps/LittlerootCave/scripts.pory"
	waitse
# 23 "data/maps/LittlerootCave/scripts.pory"
	playmoncry SPECIES_BAGON, CRY_MODE_ENCOUNTER
# 24 "data/maps/LittlerootCave/scripts.pory"
	delay 40
# 25 "data/maps/LittlerootCave/scripts.pory"
	waitmoncry
# 26 "data/maps/LittlerootCave/scripts.pory"
	setwildbattle SPECIES_BAGON, 30
# 27 "data/maps/LittlerootCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/LittlerootCave/scripts.pory"
	dowildbattle
# 29 "data/maps/LittlerootCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/LittlerootCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/LittlerootCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, LittlerootCave_EventScript_DefeatedBagon
# 32 "data/maps/LittlerootCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, LittlerootCave_EventScript_RanFromBagon
# 33 "data/maps/LittlerootCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, LittlerootCave_EventScript_RanFromBagon
# 34 "data/maps/LittlerootCave/scripts.pory"
	setflag FLAG_TEMP_7
# 35 "data/maps/LittlerootCave/scripts.pory"
	release
	end


LittlerootCave_EventScript_DefeatedBagon::
# 40 "data/maps/LittlerootCave/scripts.pory"
	setflag FLAG_TEMP_7
# 41 "data/maps/LittlerootCave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


LittlerootCave_EventScript_RanFromBagon::
# 46 "data/maps/LittlerootCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_BAGON
# 47 "data/maps/LittlerootCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

