CeruleanCity_Gym_Khanto_MapScripts::
    .align 2
    .global CeruleanCity_Gym_Khanto_MapScripts
    .byte MAP_LOAD_OBJECTS
    .byte MAP_LOAD_LAYER_CHANGE_EFFECTS
    .byte MAP_LOAD_NONE
    .byte MAP_LOAD_NONE
    .word CeruleanCity_Gym_Khanto_MapObjects
    .word CeruleanCity_Gym_Khanto_MapWarps
    .word CeruleanCity_Gym_Khanto_MapCoordEvents
    .word CeruleanCity_Gym_Khanto_MapBGEvents

CeruleanCity_Gym_Khanto_EventScript_Receptionist::
    msgbox CeruleanCity_Gym_Khanto_Text_Welcome, MSGBOX_SIGN
    end

CeruleanCity_Gym_Khanto_Text_Welcome:
    .string "Welcome to the CeruleanCity_Gym_Khanto"
    .string "A place where trainers grow stronger!$"
