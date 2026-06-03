CinnabarIsland_Gym_Khanto_MapScripts::
    .align 2
    .global CinnabarIsland_Gym_Khanto_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word CinnabarIsland_Gym_Khanto_MapObjects
    .word CinnabarIsland_Gym_Khanto_MapWarps
    .word CinnabarIsland_Gym_Khanto_MapCoordEvents
    .word CinnabarIsland_Gym_Khanto_MapBGEvents

CinnabarIsland_Gym_Khanto_EventScript_Receptionist::
    msgbox CinnabarIsland_Gym_Khanto_Text_Welcome, MSGBOX_SIGN
    end

CinnabarIsland_Gym_Khanto_Text_Welcome:
    .string "Welcome to the CinnabarIsland_Gym_Khanto"
    .string "A place where trainers grow stronger!$"
