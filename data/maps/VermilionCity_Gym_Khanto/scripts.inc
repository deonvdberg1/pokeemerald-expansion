VermilionCity_Gym_Khanto_MapScripts::
    .align 2
    .global VermilionCity_Gym_Khanto_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word VermilionCity_Gym_Khanto_MapObjects
    .word VermilionCity_Gym_Khanto_MapWarps
    .word VermilionCity_Gym_Khanto_MapCoordEvents
    .word VermilionCity_Gym_Khanto_MapBGEvents

VermilionCity_Gym_Khanto_EventScript_Receptionist::
    msgbox VermilionCity_Gym_Khanto_Text_Welcome, MSGBOX_SIGN
    end

VermilionCity_Gym_Khanto_Text_Welcome:
    .string "Welcome to the VermilionCity_Gym_Khanto"
    .string "A place where trainers grow stronger!$"
