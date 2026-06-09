@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PalletTown_ProfessorOaksLab/map.json
@

	.align 2

PalletTown_ProfessorOaksLab_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PROF_OAK, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_ProfessorOaksLab_EventScript_Oak, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 8, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 9, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_ProfessorOaksLab_EventScript_CharmanderBall, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 10, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_ProfessorOaksLab_EventScript_SquirtleBall, 0

PalletTown_ProfessorOaksLab_MapWarps:
	warp_def 6, 12, 0, 1, MAP_PALLET_TOWN_KHANTO
	warp_def 7, 12, 0, 1, MAP_PALLET_TOWN_KHANTO

PalletTown_ProfessorOaksLab_MapBGEvents:
	bg_sign_event 0, 7, 0, BG_EVENT_PLAYER_FACING_ANY, 0x0

PalletTown_ProfessorOaksLab_MapEvents::
	map_events PalletTown_ProfessorOaksLab_ObjectEvents, PalletTown_ProfessorOaksLab_MapWarps, NULL, PalletTown_ProfessorOaksLab_MapBGEvents

