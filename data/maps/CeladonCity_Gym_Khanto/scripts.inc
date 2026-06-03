CeladonCity_Gym_Khanto_MapScripts::
    .align 2
    .global CeladonCity_Gym_Khanto_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word CeladonCity_Gym_Khanto_MapObjects
    .word CeladonCity_Gym_Khanto_MapWarps
    .word CeladonCity_Gym_Khanto_MapCoordEvents
    .word CeladonCity_Gym_Khanto_MapBGEvents

CeladonCity_Gym_Khanto_EventScript_Receptionist::
    msgbox CeladonCity_Gym_Khanto_Text_Welcome, MSGBOX_SIGN
    end

CeladonCity_Gym_Khanto_Text_Welcome:
    .string "Welcome to the CeladonCity_Gym_Khanto"
    .string "A place where trainers grow stronger!$"
