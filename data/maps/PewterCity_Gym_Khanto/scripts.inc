PewterCity_Gym_Khanto_MapScripts::
    .align 2
    .global PewterCity_Gym_Khanto_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word PewterCity_Gym_Khanto_MapObjects
    .word PewterCity_Gym_Khanto_MapWarps
    .word PewterCity_Gym_Khanto_MapCoordEvents
    .word PewterCity_Gym_Khanto_MapBGEvents

PewterCity_Gym_Khanto_EventScript_Receptionist::
    msgbox PewterCity_Gym_Khanto_Text_Welcome, MSGBOX_SIGN
    end

PewterCity_Gym_Khanto_Text_Welcome:
    .string "Welcome to the PewterCity_Gym_Khanto"
    .string "A place where trainers grow stronger!$"
