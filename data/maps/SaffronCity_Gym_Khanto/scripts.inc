SaffronCity_Gym_Khanto_MapScripts::
    .align 2
    .global SaffronCity_Gym_Khanto_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word SaffronCity_Gym_Khanto_MapObjects
    .word SaffronCity_Gym_Khanto_MapWarps
    .word SaffronCity_Gym_Khanto_MapCoordEvents
    .word SaffronCity_Gym_Khanto_MapBGEvents

SaffronCity_Gym_Khanto_EventScript_Receptionist::
    msgbox SaffronCity_Gym_Khanto_Text_Welcome, MSGBOX_SIGN
    end

SaffronCity_Gym_Khanto_Text_Welcome:
    .string "Welcome to the SaffronCity_Gym_Khanto"
    .string "A place where trainers grow stronger!$"
