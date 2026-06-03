FuchsiaCity_Gym_Khanto_MapScripts::
    .align 2
    .global FuchsiaCity_Gym_Khanto_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word FuchsiaCity_Gym_Khanto_MapObjects
    .word FuchsiaCity_Gym_Khanto_MapWarps
    .word FuchsiaCity_Gym_Khanto_MapCoordEvents
    .word FuchsiaCity_Gym_Khanto_MapBGEvents

FuchsiaCity_Gym_Khanto_EventScript_Receptionist::
    msgbox FuchsiaCity_Gym_Khanto_Text_Welcome, MSGBOX_SIGN
    end

FuchsiaCity_Gym_Khanto_Text_Welcome:
    .string "Welcome to the FuchsiaCity_Gym_Khanto"
    .string "A place where trainers grow stronger!$"
