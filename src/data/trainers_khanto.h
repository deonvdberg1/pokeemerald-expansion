//
// Auto-extracted FRLG main character trainer data for Khanto project
// Extracted from trainers_frlg.h
//

    // BOSS_GIOVANNI (ID 248)
    [DIFFICULTY_NORMAL][248] =
    {
#line 4992
        .trainerName = _("GIOVANNI"),
#line 4993
        .trainerClass = TRAINER_CLASS_BOSS_FRLG,
#line 4994
        .trainerPic = TRAINER_PIC_FRONT_LEADER_GIOVANNI_FRLG,
#line 4995
        .gender = TRAINER_GENDER_MALE,
#line 4996
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 4997
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_GIOVANNI_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5000
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5001
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5004
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5006
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5005
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5008
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5010
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5009
            .lvl = 29,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // BOSS_GIOVANNI_2 (ID 249)
    [DIFFICULTY_NORMAL][249] =
    {
#line 5013
        .trainerName = _("GIOVANNI"),
#line 5014
        .trainerClass = TRAINER_CLASS_BOSS_FRLG,
#line 5015
        .trainerPic = TRAINER_PIC_FRONT_LEADER_GIOVANNI_FRLG,
#line 5016
        .gender = TRAINER_GENDER_MALE,
#line 5017
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5018
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_GIOVANNI_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5021
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5023
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5022
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5025
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5027
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5026
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5029
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5031
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5030
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5033
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5035
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5034
            .lvl = 41,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // LEADER_GIOVANNI (ID 250)
    [DIFFICULTY_NORMAL][250] =
    {
#line 5038
        .trainerName = _("GIOVANNI"),
#line 5039
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 5040
        .trainerPic = TRAINER_PIC_FRONT_LEADER_GIOVANNI_FRLG,
#line 5041
        .gender = TRAINER_GENDER_MALE,
#line 5042
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5043
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL },
#line 5044
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_GIOVANNI_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5047
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5048
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5050
                MOVE_TAKE_DOWN,
                MOVE_ROCK_BLAST,
                MOVE_SCARY_FACE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5055
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5056
            .lvl = 42,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5058
                MOVE_SLASH,
                MOVE_SAND_TOMB,
                MOVE_MUD_SLAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5063
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5064
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5066
                MOVE_BODY_SLAM,
                MOVE_DOUBLE_KICK,
                MOVE_POISON_STING,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5071
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5073
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5072
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5074
                MOVE_THRASH,
                MOVE_DOUBLE_KICK,
                MOVE_POISON_STING,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5079
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5080
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5082
                MOVE_TAKE_DOWN,
                MOVE_ROCK_BLAST,
                MOVE_SCARY_FACE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },

    // TEAM_ROCKET_GRUNT (ID 251)
    [DIFFICULTY_NORMAL][251] =
    {
#line 5088
        .trainerName = _("GRUNT"),
#line 5089
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5090
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5091
        .gender = TRAINER_GENDER_MALE,
#line 5092
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5093
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5096
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5097
            .lvl = 13,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5100
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5101
            .lvl = 13,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_2 (ID 252)
    [DIFFICULTY_NORMAL][252] =
    {
#line 5105
        .trainerName = _("GRUNT"),
#line 5106
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5107
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5108
        .gender = TRAINER_GENDER_MALE,
#line 5109
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5110
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5113
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5114
            .lvl = 11,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5117
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5118
            .lvl = 11,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5121
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5122
            .lvl = 11,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_3 (ID 253)
    [DIFFICULTY_NORMAL][253] =
    {
#line 5126
        .trainerName = _("GRUNT"),
#line 5127
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5128
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5129
        .gender = TRAINER_GENDER_MALE,
#line 5130
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5131
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5134
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5135
            .lvl = 11,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5138
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5139
            .lvl = 11,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_4 (ID 254)
    [DIFFICULTY_NORMAL][254] =
    {
#line 5143
        .trainerName = _("GRUNT"),
#line 5144
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5145
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5146
        .gender = TRAINER_GENDER_MALE,
#line 5147
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5148
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5151
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5152
            .lvl = 13,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5155
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5156
            .lvl = 13,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_5 (ID 255)
    [DIFFICULTY_NORMAL][255] =
    {
#line 5160
        .trainerName = _("GRUNT"),
#line 5161
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5162
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5163
        .gender = TRAINER_GENDER_MALE,
#line 5164
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5165
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5168
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5169
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5172
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5173
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_6 (ID 256)
    [DIFFICULTY_NORMAL][256] =
    {
#line 5177
        .trainerName = _("GRUNT"),
#line 5178
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5179
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5180
        .gender = TRAINER_GENDER_MALE,
#line 5181
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5182
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5185
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5186
            .lvl = 15,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5189
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5190
            .lvl = 15,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_7 (ID 257)
    [DIFFICULTY_NORMAL][257] =
    {
#line 5194
        .trainerName = _("GRUNT"),
#line 5195
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5196
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5197
        .gender = TRAINER_GENDER_MALE,
#line 5198
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5199
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5202
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5203
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5206
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5207
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_8 (ID 258)
    [DIFFICULTY_NORMAL][258] =
    {
#line 5211
        .trainerName = _("GRUNT"),
#line 5212
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5213
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5214
        .gender = TRAINER_GENDER_MALE,
#line 5215
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5216
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5219
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5220
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5223
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5224
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_9 (ID 259)
    [DIFFICULTY_NORMAL][259] =
    {
#line 5228
        .trainerName = _("GRUNT"),
#line 5229
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5230
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5231
        .gender = TRAINER_GENDER_MALE,
#line 5232
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5233
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5236
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5237
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5240
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5241
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_10 (ID 260)
    [DIFFICULTY_NORMAL][260] =
    {
#line 5245
        .trainerName = _("GRUNT"),
#line 5246
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5247
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5248
        .gender = TRAINER_GENDER_MALE,
#line 5249
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5253
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5254
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5256
                MOVE_MINIMIZE,
                MOVE_SLUDGE,
                MOVE_DISABLE,
                MOVE_HARDEN,
            },
            },
            {
#line 5261
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5262
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5264
                MOVE_SMOG,
                MOVE_TACKLE,
                MOVE_POISON_GAS,
            },
            },
            {
#line 5268
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5269
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5271
                MOVE_SMOG,
                MOVE_TACKLE,
                MOVE_POISON_GAS,
            },
            },
        },
    },

    // TEAM_ROCKET_GRUNT_11 (ID 261)
    [DIFFICULTY_NORMAL][261] =
    {
#line 5276
        .trainerName = _("GRUNT"),
#line 5277
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5278
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5279
        .gender = TRAINER_GENDER_MALE,
#line 5280
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5281
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5284
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5285
            .lvl = 19,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5288
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5289
            .lvl = 19,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5292
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5293
            .lvl = 19,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5296
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5297
            .lvl = 19,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_12 (ID 262)
    [DIFFICULTY_NORMAL][262] =
    {
#line 5301
        .trainerName = _("GRUNT"),
#line 5302
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5303
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5304
        .gender = TRAINER_GENDER_MALE,
#line 5305
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5306
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5307
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5309
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5310
            .lvl = 22,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5312
                MOVE_MINIMIZE,
                MOVE_SLUDGE,
                MOVE_DISABLE,
                MOVE_HARDEN,
            },
            },
            {
#line 5317
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5318
            .lvl = 22,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5320
                MOVE_SLUDGE,
                MOVE_SMOG,
                MOVE_TACKLE,
                MOVE_POISON_GAS,
            },
            },
        },
    },

    // TEAM_ROCKET_GRUNT_13 (ID 263)
    [DIFFICULTY_NORMAL][263] =
    {
#line 5326
        .trainerName = _("GRUNT"),
#line 5327
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5328
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5329
        .gender = TRAINER_GENDER_MALE,
#line 5330
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5331
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5334
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5335
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5337
                MOVE_BITE,
                MOVE_ASTONISH,
                MOVE_SUPERSONIC,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 5342
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5343
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5345
                MOVE_SMOG,
                MOVE_TACKLE,
                MOVE_POISON_GAS,
            },
            },
            {
#line 5349
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5350
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5352
                MOVE_SLUDGE,
                MOVE_DISABLE,
                MOVE_HARDEN,
                MOVE_POUND,
            },
            },
            {
#line 5357
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5358
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5360
                MOVE_BITE,
                MOVE_ASTONISH,
                MOVE_SUPERSONIC,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 5365
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5366
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5368
                MOVE_HYPER_FANG,
                MOVE_QUICK_ATTACK,
                MOVE_TAIL_WHIP,
                MOVE_TACKLE,
            },
            },
        },
    },

    // TEAM_ROCKET_GRUNT_14 (ID 264)
    [DIFFICULTY_NORMAL][264] =
    {
#line 5374
        .trainerName = _("GRUNT"),
#line 5375
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5376
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5377
        .gender = TRAINER_GENDER_MALE,
#line 5378
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5379
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5382
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5383
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5386
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5387
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5390
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5391
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // TEAM_ROCKET_GRUNT_15 (ID 265)
    [DIFFICULTY_NORMAL][265] =
    {
#line 5395
        .trainerName = _("GRUNT"),
#line 5396
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
#line 5397
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
#line 5398
        .gender = TRAINER_GENDER_MALE,
#line 5399
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 5400
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5403
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5404
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5407
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5408
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // RIVAL_OAKS_LAB_SQUIRTLE (ID 226)
    [DIFFICULTY_NORMAL][226] =
    {
#line 4444
        .trainerName = _("TERRY"),
#line 4445
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY_FRLG,
#line 4446
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
#line 4447
        .gender = TRAINER_GENDER_MALE,
#line 4448
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4449
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4452
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4453
            .lvl = 5,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4455
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
            },
            },
        },
    },

    // RIVAL_OAKS_LAB_BULBASAUR (ID 227)
    [DIFFICULTY_NORMAL][227] =
    {
#line 4459
        .trainerName = _("TERRY"),
#line 4460
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY_FRLG,
#line 4461
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
#line 4462
        .gender = TRAINER_GENDER_MALE,
#line 4463
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4464
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4467
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4468
            .lvl = 5,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4470
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
        },
    },

    // RIVAL_OAKS_LAB_CHARMANDER (ID 228)
    [DIFFICULTY_NORMAL][228] =
    {
#line 4474
        .trainerName = _("TERRY"),
#line 4475
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY_FRLG,
#line 4476
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
#line 4477
        .gender = TRAINER_GENDER_MALE,
#line 4478
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4479
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4482
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4483
            .lvl = 5,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4485
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
        },
    },

    // RIVAL_CERULEAN_SQUIRTLE (ID 232)
    [DIFFICULTY_NORMAL][232] =
    {
#line 4552
        .trainerName = _("TERRY"),
#line 4553
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY_FRLG,
#line 4554
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
#line 4555
        .gender = TRAINER_GENDER_MALE,
#line 4556
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4557
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4560
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4562
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4561
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4563
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4568
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4570
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4569
            .lvl = 16,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4571
                MOVE_TELEPORT,
            },
            },
            {
#line 4573
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4575
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4574
            .lvl = 15,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4576
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4580
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4581
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4583
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_WITHDRAW,
                MOVE_WATER_GUN,
            },
            },
        },
    },

    // RIVAL_CERULEAN_BULBASAUR (ID 233)
    [DIFFICULTY_NORMAL][233] =
    {
#line 4589
        .trainerName = _("TERRY"),
#line 4590
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY_FRLG,
#line 4591
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
#line 4592
        .gender = TRAINER_GENDER_MALE,
#line 4593
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4594
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4597
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4599
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4598
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4600
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4605
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4607
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4606
            .lvl = 16,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4608
                MOVE_TELEPORT,
            },
            },
            {
#line 4610
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4612
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4611
            .lvl = 15,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4613
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4617
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4619
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4618
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4620
                MOVE_SLEEP_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VINE_WHIP,
                MOVE_LEECH_SEED,
            },
            },
        },
    },

    // RIVAL_CERULEAN_CHARMANDER (ID 234)
    [DIFFICULTY_NORMAL][234] =
    {
#line 4626
        .trainerName = _("TERRY"),
#line 4627
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY_FRLG,
#line 4628
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
#line 4629
        .gender = TRAINER_GENDER_MALE,
#line 4630
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_EARLY_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4634
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4636
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4635
            .lvl = 17,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4637
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4642
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4644
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4643
            .lvl = 16,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4645
                MOVE_TELEPORT,
            },
            },
            {
#line 4647
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4649
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4648
            .lvl = 15,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4650
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4654
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4656
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4655
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4657
                MOVE_METAL_CLAW,
                MOVE_EMBER,
                MOVE_GROWL,
                MOVE_SCRATCH,
            },
            },
        },
    },

    // RIVAL_SS_ANNE_SQUIRTLE (ID 326)
    [DIFFICULTY_NORMAL][326] =
    {
#line 7369
        .trainerName = _("TERRY"),
#line 7370
        .trainerClass = TRAINER_CLASS_RIVAL_LATE_FRLG,
#line 7371
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
#line 7372
        .gender = TRAINER_GENDER_MALE,
#line 7373
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7377
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7379
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7378
            .lvl = 19,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7381
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7383
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7382
            .lvl = 16,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7385
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7387
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7386
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7389
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7391
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7390
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // RIVAL_SS_ANNE_BULBASAUR (ID 327)
    [DIFFICULTY_NORMAL][327] =
    {
#line 7394
        .trainerName = _("TERRY"),
#line 7395
        .trainerClass = TRAINER_CLASS_RIVAL_LATE_FRLG,
#line 7396
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
#line 7397
        .gender = TRAINER_GENDER_MALE,
#line 7398
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7399
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7402
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7403
            .lvl = 19,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7406
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7408
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7407
            .lvl = 16,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7410
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7412
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7411
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7414
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7416
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7415
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // RIVAL_SS_ANNE_CHARMANDER (ID 328)
    [DIFFICULTY_NORMAL][328] =
    {
#line 7419
        .trainerName = _("TERRY"),
#line 7420
        .trainerClass = TRAINER_CLASS_RIVAL_LATE_FRLG,
#line 7421
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
#line 7422
        .gender = TRAINER_GENDER_MALE,
#line 7423
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7424
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7427
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7429
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7428
            .lvl = 19,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7431
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7433
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7432
            .lvl = 16,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7435
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7437
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7436
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7439
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7440
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // RIVAL_SILPH_SQUIRTLE (ID 332)
    [DIFFICULTY_NORMAL][332] =
    {
#line 7531
        .trainerName = _("TERRY"),
#line 7532
        .trainerClass = TRAINER_CLASS_RIVAL_LATE_FRLG,
#line 7533
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
#line 7534
        .gender = TRAINER_GENDER_MALE,
#line 7535
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7536
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7539
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7540
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7543
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7545
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7544
            .lvl = 38,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7547
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7549
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7548
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7551
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7553
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7552
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7555
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7557
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7556
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // RIVAL_SILPH_BULBASAUR (ID 333)
    [DIFFICULTY_NORMAL][333] =
    {
#line 7560
        .trainerName = _("TERRY"),
#line 7561
        .trainerClass = TRAINER_CLASS_RIVAL_LATE_FRLG,
#line 7562
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
#line 7563
        .gender = TRAINER_GENDER_MALE,
#line 7564
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7565
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7568
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7570
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7569
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7572
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7574
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7573
            .lvl = 38,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7576
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7578
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7577
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7580
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7581
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7584
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7586
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7585
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // RIVAL_SILPH_CHARMANDER (ID 334)
    [DIFFICULTY_NORMAL][334] =
    {
#line 7589
        .trainerName = _("TERRY"),
#line 7590
        .trainerClass = TRAINER_CLASS_RIVAL_LATE_FRLG,
#line 7591
        .trainerPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
#line 7592
        .gender = TRAINER_GENDER_MALE,
#line 7593
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7594
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_RIVAL_LATE_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7597
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7598
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7601
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7602
            .lvl = 38,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7605
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7607
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7606
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7609
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7611
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7610
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7613
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7615
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7614
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // ELITE_FOUR_LORELEI (ID 310)
    [DIFFICULTY_NORMAL][310] =
    {
#line 6846
        .trainerName = _("LORELEI"),
#line 6847
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 6848
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_LORELEI_FRLG,
#line 6849
        .gender = TRAINER_GENDER_MALE,
#line 6850
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 6851
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6852
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 6854
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_LORELEI_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6856
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6858
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6857
            .lvl = 52,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6859
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_HAIL,
                MOVE_SAFEGUARD,
            },
            },
            {
#line 6864
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6866
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6865
            .lvl = 51,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6867
                MOVE_SPIKES,
                MOVE_PROTECT,
                MOVE_HAIL,
                MOVE_DIVE,
            },
            },
            {
#line 6872
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6874
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6873
            .lvl = 52,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6875
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_YAWN,
            },
            },
            {
#line 6880
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6882
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6881
            .lvl = 54,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6883
                MOVE_ICE_PUNCH,
                MOVE_DOUBLE_SLAP,
                MOVE_LOVELY_KISS,
                MOVE_ATTRACT,
            },
            },
            {
#line 6888
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6888
            .heldItem = ITEM_SITRUS_BERRY,
#line 6890
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6889
            .lvl = 54,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6891
                MOVE_CONFUSE_RAY,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
        },
    },

    // ELITE_FOUR_BRUNO (ID 311)
    [DIFFICULTY_NORMAL][311] =
    {
#line 6897
        .trainerName = _("BRUNO"),
#line 6898
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 6899
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_BRUNO_FRLG,
#line 6900
        .gender = TRAINER_GENDER_MALE,
#line 6901
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 6902
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6903
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 6905
        .mugshotColor = MUGSHOT_COLOR_GREEN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_BRUNO_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6907
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6909
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6908
            .lvl = 51,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6910
                MOVE_EARTHQUAKE,
                MOVE_ROCK_TOMB,
                MOVE_IRON_TAIL,
                MOVE_ROAR,
            },
            },
            {
#line 6915
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6917
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6916
            .lvl = 53,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6918
                MOVE_SKY_UPPERCUT,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_COUNTER,
            },
            },
            {
#line 6923
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6925
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6924
            .lvl = 53,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6926
                MOVE_MEGA_KICK,
                MOVE_FORESIGHT,
                MOVE_BRICK_BREAK,
                MOVE_FACADE,
            },
            },
            {
#line 6931
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6933
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6932
            .lvl = 54,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6934
                MOVE_DOUBLE_EDGE,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_SAND_TOMB,
            },
            },
            {
#line 6939
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .heldItem = ITEM_SITRUS_BERRY,
#line 6941
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6940
            .lvl = 56,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6942
                MOVE_CROSS_CHOP,
                MOVE_BULK_UP,
                MOVE_SCARY_FACE,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },

    // ELITE_FOUR_AGATHA (ID 312)
    [DIFFICULTY_NORMAL][312] =
    {
#line 6948
        .trainerName = _("AGATHA"),
#line 6949
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 6950
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_AGATHA_FRLG,
#line 6951
        .gender = TRAINER_GENDER_MALE,
#line 6952
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 6953
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6954
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 6956
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_AGATHA_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6958
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6959
            .lvl = 54,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6961
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 6966
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6968
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6967
            .lvl = 54,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6969
                MOVE_CONFUSE_RAY,
                MOVE_POISON_FANG,
                MOVE_AIR_CUTTER,
                MOVE_BITE,
            },
            },
            {
#line 6974
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6976
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6975
            .lvl = 53,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6977
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_CURSE,
                MOVE_MEAN_LOOK,
            },
            },
            {
#line 6982
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6984
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6983
            .lvl = 56,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6985
                MOVE_SLUDGE_BOMB,
                MOVE_SCREECH,
                MOVE_IRON_TAIL,
                MOVE_BITE,
            },
            },
            {
#line 6990
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6990
            .heldItem = ITEM_SITRUS_BERRY,
#line 6992
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6991
            .lvl = 58,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6993
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_BOMB,
                MOVE_HYPNOSIS,
                MOVE_NIGHTMARE,
            },
            },
        },
    },

    // ELITE_FOUR_LANCE (ID 313)
    [DIFFICULTY_NORMAL][313] =
    {
#line 6999
        .trainerName = _("LANCE"),
#line 7000
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 7001
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_LANCE_FRLG,
#line 7002
        .gender = TRAINER_GENDER_MALE,
#line 7003
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 7004
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7005
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7007
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_LANCE_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7009
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7011
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7010
            .lvl = 56,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7012
                MOVE_HYPER_BEAM,
                MOVE_DRAGON_RAGE,
                MOVE_TWISTER,
                MOVE_BITE,
            },
            },
            {
#line 7017
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7019
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7018
            .lvl = 54,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7020
                MOVE_HYPER_BEAM,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_RAGE,
                MOVE_OUTRAGE,
            },
            },
            {
#line 7025
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7027
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7026
            .lvl = 54,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7028
                MOVE_HYPER_BEAM,
                MOVE_SAFEGUARD,
                MOVE_THUNDER_WAVE,
                MOVE_OUTRAGE,
            },
            },
            {
#line 7033
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7035
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7034
            .lvl = 58,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7036
                MOVE_HYPER_BEAM,
                MOVE_ANCIENT_POWER,
                MOVE_WING_ATTACK,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 7041
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7041
            .heldItem = ITEM_SITRUS_BERRY,
#line 7043
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7042
            .lvl = 60,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7044
                MOVE_HYPER_BEAM,
                MOVE_SAFEGUARD,
                MOVE_OUTRAGE,
                MOVE_WING_ATTACK,
            },
            },
        },
    },

    // LEADER_BROCK (ID 314)
    [DIFFICULTY_NORMAL][314] =
    {
#line 7050
        .trainerName = _("BROCK"),
#line 7051
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 7052
        .trainerPic = TRAINER_PIC_FRONT_LEADER_BROCK_FRLG,
#line 7053
        .gender = TRAINER_GENDER_MALE,
#line 7054
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7055
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_BROCK_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7058
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7059
            .lvl = 12,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7061
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 7064
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7065
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7067
                MOVE_TACKLE,
                MOVE_BIND,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },

    // LEADER_MISTY (ID 315)
    [DIFFICULTY_NORMAL][315] =
    {
#line 7072
        .trainerName = _("MISTY"),
#line 7073
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 7074
        .trainerPic = TRAINER_PIC_FRONT_LEADER_MISTY_FRLG,
#line 7075
        .gender = TRAINER_GENDER_MALE,
#line 7076
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7077
        .items = { ITEM_SUPER_POTION },
#line 7078
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_MISTY_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7081
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7082
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7084
                MOVE_TACKLE,
                MOVE_HARDEN,
                MOVE_RECOVER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 7089
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7090
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7092
                MOVE_SWIFT,
                MOVE_RECOVER,
                MOVE_RAPID_SPIN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },

    // LEADER_LT_SURGE (ID 316)
    [DIFFICULTY_NORMAL][316] =
    {
#line 7098
        .trainerName = _("LT. SURGE"),
#line 7099
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 7100
        .trainerPic = TRAINER_PIC_FRONT_LEADER_LT_SURGE_FRLG,
#line 7101
        .gender = TRAINER_GENDER_MALE,
#line 7102
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7103
        .items = { ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 7104
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_LT_SURGE_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7107
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7108
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7110
                MOVE_SONIC_BOOM,
                MOVE_TACKLE,
                MOVE_SCREECH,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 7115
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7116
            .lvl = 18,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7118
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_DOUBLE_TEAM,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 7123
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7124
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7126
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_DOUBLE_TEAM,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },

    // LEADER_ERIKA (ID 317)
    [DIFFICULTY_NORMAL][317] =
    {
#line 7132
        .trainerName = _("ERIKA"),
#line 7133
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 7134
        .trainerPic = TRAINER_PIC_FRONT_LEADER_ERIKA_FRLG,
#line 7135
        .gender = TRAINER_GENDER_MALE,
#line 7136
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7137
        .items = { ITEM_HYPER_POTION, ITEM_FULL_HEAL },
#line 7138
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_ERIKA_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7141
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7142
            .lvl = 29,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7144
                MOVE_STUN_SPORE,
                MOVE_ACID,
                MOVE_POISON_POWDER,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 7149
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7150
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7152
                MOVE_POISON_POWDER,
                MOVE_CONSTRICT,
                MOVE_INGRAIN,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 7157
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7158
            .lvl = 29,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7160
                MOVE_SLEEP_POWDER,
                MOVE_ACID,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
        },
    },

    // LEADER_KOGA (ID 318)
    [DIFFICULTY_NORMAL][318] =
    {
#line 7166
        .trainerName = _("KOGA"),
#line 7167
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 7168
        .trainerPic = TRAINER_PIC_FRONT_LEADER_KOGA_FRLG,
#line 7169
        .gender = TRAINER_GENDER_MALE,
#line 7170
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7171
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL },
#line 7172
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_KOGA_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7175
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7176
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7178
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
                MOVE_TOXIC,
            },
            },
            {
#line 7183
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7184
            .lvl = 39,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7186
                MOVE_MINIMIZE,
                MOVE_SLUDGE,
                MOVE_ACID_ARMOR,
                MOVE_TOXIC,
            },
            },
            {
#line 7191
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7192
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7194
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
                MOVE_TOXIC,
            },
            },
            {
#line 7199
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7200
            .lvl = 43,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7202
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
                MOVE_TOXIC,
            },
            },
        },
    },

    // LEADER_BLAINE (ID 319)
    [DIFFICULTY_NORMAL][319] =
    {
#line 7208
        .trainerName = _("BLAINE"),
#line 7209
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 7210
        .trainerPic = TRAINER_PIC_FRONT_LEADER_BLAINE_FRLG,
#line 7211
        .gender = TRAINER_GENDER_MALE,
#line 7212
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7213
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL },
#line 7214
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_BLAINE_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7217
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7218
            .lvl = 42,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7220
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_TAKE_DOWN,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 7225
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7226
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7228
                MOVE_STOMP,
                MOVE_BOUNCE,
                MOVE_FIRE_SPIN,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 7233
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7234
            .lvl = 42,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7236
                MOVE_STOMP,
                MOVE_BOUNCE,
                MOVE_FIRE_SPIN,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 7241
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7242
            .lvl = 47,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7244
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_TAKE_DOWN,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },

    // LEADER_SABRINA (ID 320)
    [DIFFICULTY_NORMAL][320] =
    {
#line 7250
        .trainerName = _("SABRINA"),
#line 7251
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
#line 7252
        .trainerPic = TRAINER_PIC_FRONT_LEADER_SABRINA_FRLG,
#line 7253
        .gender = TRAINER_GENDER_MALE,
#line 7254
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7255
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL },
#line 7256
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_SABRINA_FRLG,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7259
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7260
            .lvl = 38,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7262
                MOVE_PSYBEAM,
                MOVE_REFLECT,
                MOVE_FUTURE_SIGHT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 7267
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7268
            .lvl = 37,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7270
                MOVE_BARRIER,
                MOVE_PSYBEAM,
                MOVE_BATON_PASS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 7275
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7276
            .lvl = 38,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7278
                MOVE_PSYBEAM,
                MOVE_GUST,
                MOVE_LEECH_LIFE,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 7283
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7284
            .lvl = 43,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7286
                MOVE_PSYCHIC,
                MOVE_RECOVER,
                MOVE_FUTURE_SIGHT,
                MOVE_CALM_MIND,
            },
            },
        },
    },

    // CHAMPION_FIRST_SQUIRTLE (ID 338)
    [DIFFICULTY_NORMAL][338] =
    {
#line 7789
        .trainerName = _("TERRY"),
#line 7790
        .trainerClass = TRAINER_CLASS_CHAMPION_FRLG,
#line 7791
        .trainerPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
#line 7792
        .gender = TRAINER_GENDER_MALE,
#line 7793
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7794
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7795
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7797
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7799
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7800
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7802
                MOVE_AERIAL_ACE,
                MOVE_FEATHER_DANCE,
                MOVE_SAND_ATTACK,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 7807
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7808
            .lvl = 57,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7810
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
                MOVE_RECOVER,
                MOVE_REFLECT,
            },
            },
            {
#line 7815
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7816
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7818
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_TOMB,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 7823
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7824
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7826
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_BITE,
            },
            },
            {
#line 7831
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7832
            .lvl = 61,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7834
                MOVE_GIGA_DRAIN,
                MOVE_EGG_BOMB,
                MOVE_SLEEP_POWDER,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 7839
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7839
            .heldItem = ITEM_SITRUS_BERRY,
#line 7841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7840
            .lvl = 63,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7842
                MOVE_HYDRO_PUMP,
                MOVE_RAIN_DANCE,
                MOVE_SKULL_BASH,
                MOVE_BITE,
            },
            },
        },
    },

    // CHAMPION_FIRST_BULBASAUR (ID 339)
    [DIFFICULTY_NORMAL][339] =
    {
#line 7848
        .trainerName = _("TERRY"),
#line 7849
        .trainerClass = TRAINER_CLASS_CHAMPION_FRLG,
#line 7850
        .trainerPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
#line 7851
        .gender = TRAINER_GENDER_MALE,
#line 7852
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7853
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7856
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7858
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7859
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7861
                MOVE_AERIAL_ACE,
                MOVE_FEATHER_DANCE,
                MOVE_SAND_ATTACK,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 7866
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7867
            .lvl = 57,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7869
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
                MOVE_RECOVER,
                MOVE_REFLECT,
            },
            },
            {
#line 7874
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7875
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7877
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_TOMB,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 7882
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7883
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7885
                MOVE_HYDRO_PUMP,
                MOVE_DRAGON_RAGE,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 7890
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7891
            .lvl = 61,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7893
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_BITE,
            },
            },
            {
#line 7898
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7898
            .heldItem = ITEM_SITRUS_BERRY,
#line 7900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7899
            .lvl = 63,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7901
                MOVE_SOLAR_BEAM,
                MOVE_SYNTHESIS,
                MOVE_SUNNY_DAY,
                MOVE_GROWTH,
            },
            },
        },
    },

    // CHAMPION_FIRST_CHARMANDER (ID 340)
    [DIFFICULTY_NORMAL][340] =
    {
#line 7907
        .trainerName = _("TERRY"),
#line 7908
        .trainerClass = TRAINER_CLASS_CHAMPION_FRLG,
#line 7909
        .trainerPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
#line 7910
        .gender = TRAINER_GENDER_MALE,
#line 7911
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7912
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7913
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7915
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7917
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7918
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7920
                MOVE_AERIAL_ACE,
                MOVE_FEATHER_DANCE,
                MOVE_SAND_ATTACK,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 7925
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7927
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7926
            .lvl = 57,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7928
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
                MOVE_RECOVER,
                MOVE_REFLECT,
            },
            },
            {
#line 7933
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7935
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7934
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7936
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_TOMB,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 7941
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7942
            .lvl = 59,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7944
                MOVE_GIGA_DRAIN,
                MOVE_EGG_BOMB,
                MOVE_SLEEP_POWDER,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 7949
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7950
            .lvl = 61,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7952
                MOVE_HYDRO_PUMP,
                MOVE_DRAGON_RAGE,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 7957
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7957
            .heldItem = ITEM_SITRUS_BERRY,
#line 7959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7958
            .lvl = 63,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7960
                MOVE_FIRE_BLAST,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
                MOVE_FIRE_SPIN,
            },
            },
        },
    },

    // ELITE_FOUR_LORELEI_2 (ID 616)
    [DIFFICULTY_NORMAL][616] =
    {
#line 13406
        .trainerName = _("LORELEI"),
#line 13407
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 13408
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_LORELEI_FRLG,
#line 13409
        .gender = TRAINER_GENDER_MALE,
#line 13410
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 13411
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 13412
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 13414
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_LORELEI_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13416
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13417
            .lvl = 64,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13419
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SIGNAL_BEAM,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13424
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13425
            .lvl = 63,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13427
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 13432
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13433
            .lvl = 63,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13435
                MOVE_BLIZZARD,
                MOVE_EARTHQUAKE,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13440
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13441
            .lvl = 66,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13443
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
                MOVE_LOVELY_KISS,
                MOVE_ATTRACT,
            },
            },
            {
#line 13448
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13448
            .heldItem = ITEM_CHERI_BERRY,
#line 13450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13449
            .lvl = 66,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13451
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_PSYCHIC,
                MOVE_THUNDER,
            },
            },
        },
    },

    // ELITE_FOUR_BRUNO_2 (ID 617)
    [DIFFICULTY_NORMAL][617] =
    {
#line 13457
        .trainerName = _("BRUNO"),
#line 13458
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 13459
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_BRUNO_FRLG,
#line 13460
        .gender = TRAINER_GENDER_MALE,
#line 13461
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 13462
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 13463
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 13465
        .mugshotColor = MUGSHOT_COLOR_GREEN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_BRUNO_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13467
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13468
            .lvl = 65,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13470
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 13475
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13476
            .lvl = 65,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13478
                MOVE_SKY_UPPERCUT,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_SLIDE,
                MOVE_COUNTER,
            },
            },
            {
#line 13483
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13484
            .lvl = 65,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13486
                MOVE_MEGA_KICK,
                MOVE_FORESIGHT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13491
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13492
            .lvl = 66,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13494
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 13499
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13499
            .heldItem = ITEM_PERSIM_BERRY,
#line 13501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13500
            .lvl = 68,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13502
                MOVE_CROSS_CHOP,
                MOVE_EARTHQUAKE,
                MOVE_BRICK_BREAK,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },

    // ELITE_FOUR_AGATHA_2 (ID 618)
    [DIFFICULTY_NORMAL][618] =
    {
#line 13508
        .trainerName = _("AGATHA"),
#line 13509
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 13510
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_AGATHA_FRLG,
#line 13511
        .gender = TRAINER_GENDER_MALE,
#line 13512
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 13513
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 13514
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13515
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 13516
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_AGATHA_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13518
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13519
            .lvl = 66,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13521
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_CONFUSE_RAY,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13526
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13527
            .lvl = 66,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13529
                MOVE_SLUDGE_BOMB,
                MOVE_AIR_CUTTER,
                MOVE_SHADOW_BALL,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 13534
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13535
            .lvl = 65,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13537
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_ATTRACT,
            },
            },
            {
#line 13542
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13543
            .lvl = 68,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13545
                MOVE_SLUDGE_BOMB,
                MOVE_EARTHQUAKE,
                MOVE_GIGA_DRAIN,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13550
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13550
            .heldItem = ITEM_CHESTO_BERRY,
#line 13552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13551
            .lvl = 70,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13553
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },

    // ELITE_FOUR_LANCE_2 (ID 619)
    [DIFFICULTY_NORMAL][619] =
    {
#line 13559
        .trainerName = _("LANCE"),
#line 13560
        .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
#line 13561
        .trainerPic = TRAINER_PIC_FRONT_ELITE_FOUR_LANCE_FRLG,
#line 13562
        .gender = TRAINER_GENDER_MALE,
#line 13563
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 13564
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 13565
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 13567
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELITE_FOUR_LANCE_FRLG,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13569
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13570
            .lvl = 68,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13572
                MOVE_HYPER_BEAM,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 13577
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13578
            .lvl = 66,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13580
                MOVE_HYPER_BEAM,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_CLAW,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 13585
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13586
            .lvl = 66,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13588
                MOVE_HYPER_BEAM,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13593
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13594
            .lvl = 70,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13596
                MOVE_HYPER_BEAM,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13601
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13601
            .heldItem = ITEM_PERSIM_BERRY,
#line 13603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13602
            .lvl = 72,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13604
                MOVE_HYPER_BEAM,
                MOVE_OUTRAGE,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
            },
            },
        },
    },

    // CHAMPION_REMATCH_SQUIRTLE (ID 620)
    [DIFFICULTY_NORMAL][620] =
    {
#line 13610
        .trainerName = _("TERRY"),
#line 13611
        .trainerClass = TRAINER_CLASS_CHAMPION_FRLG,
#line 13612
        .trainerPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
#line 13613
        .gender = TRAINER_GENDER_MALE,
#line 13614
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13615
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 13616
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 13618
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13620
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13621
            .lvl = 72,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13623
                MOVE_MEGAHORN,
                MOVE_EARTHQUAKE,
                MOVE_COUNTER,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 13628
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13629
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13631
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_REFLECT,
            },
            },
            {
#line 13636
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13637
            .lvl = 72,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13639
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_THUNDERBOLT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13644
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13645
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13647
                MOVE_EXTREME_SPEED,
                MOVE_OVERHEAT,
                MOVE_AERIAL_ACE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 13652
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13653
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13655
                MOVE_GIGA_DRAIN,
                MOVE_PSYCHIC,
                MOVE_SLEEP_POWDER,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13660
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13660
            .heldItem = ITEM_SITRUS_BERRY,
#line 13662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13661
            .lvl = 75,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13663
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_EARTHQUAKE,
                MOVE_RAIN_DANCE,
            },
            },
        },
    },

    // CHAMPION_REMATCH_BULBASAUR (ID 621)
    [DIFFICULTY_NORMAL][621] =
    {
#line 13669
        .trainerName = _("TERRY"),
#line 13670
        .trainerClass = TRAINER_CLASS_CHAMPION_FRLG,
#line 13671
        .trainerPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
#line 13672
        .gender = TRAINER_GENDER_MALE,
#line 13673
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13674
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 13675
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 13677
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13679
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13680
            .lvl = 72,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13682
                MOVE_MEGAHORN,
                MOVE_EARTHQUAKE,
                MOVE_COUNTER,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 13687
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13688
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13690
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_REFLECT,
            },
            },
            {
#line 13695
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13696
            .lvl = 72,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13698
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_THUNDERBOLT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13703
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13704
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13706
                MOVE_HYDRO_PUMP,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 13711
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13712
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13714
                MOVE_EXTREME_SPEED,
                MOVE_OVERHEAT,
                MOVE_AERIAL_ACE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 13719
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13719
            .heldItem = ITEM_SITRUS_BERRY,
#line 13721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13720
            .lvl = 75,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13722
                MOVE_SOLAR_BEAM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTHQUAKE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },

    // CHAMPION_REMATCH_CHARMANDER (ID 622)
    [DIFFICULTY_NORMAL][622] =
    {
#line 13728
        .trainerName = _("TERRY"),
#line 13729
        .trainerClass = TRAINER_CLASS_CHAMPION_FRLG,
#line 13730
        .trainerPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
#line 13731
        .gender = TRAINER_GENDER_MALE,
#line 13732
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13733
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 13734
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 13736
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHAMPION_RIVAL_FRLG,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13738
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13739
            .lvl = 72,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13741
                MOVE_MEGAHORN,
                MOVE_EARTHQUAKE,
                MOVE_COUNTER,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 13746
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13747
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13749
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_REFLECT,
            },
            },
            {
#line 13754
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13755
            .lvl = 72,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13757
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_THUNDERBOLT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13762
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13763
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13765
                MOVE_GIGA_DRAIN,
                MOVE_PSYCHIC,
                MOVE_SLEEP_POWDER,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13770
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13771
            .lvl = 73,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13773
                MOVE_HYDRO_PUMP,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 13778
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13778
            .heldItem = ITEM_SITRUS_BERRY,
#line 13780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 13779
            .lvl = 75,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13781
                MOVE_FIRE_BLAST,
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },

    // ROCKET_GRUNT_1 (ID 858) - Viridian Forest Grunt 1
    [DIFFICULTY_NORMAL][858] =
    {
        .trainerName = _("GRUNT"),
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // ROCKET_GRUNT_2 (ID 859) - Viridian Forest Grunt 2
    [DIFFICULTY_NORMAL][859] =
    {
        .trainerName = _("GRUNT"),
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_ROCKET_GRUNT_M_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

    // HIKER_NORTH (ID 624) - Pewter Gym
    [DIFFICULTY_NORMAL][624] =
    {
        .trainerName = _("NORTH"),
        .trainerClass = TRAINER_CLASS_HIKER_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_HIKER_FRLG,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_HIKER_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 10,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MUD_SLAP, MOVE_ROCK_THROW },
            },
            {
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 10,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MUD_SLAP, MOVE_ROCK_THROW },
            },
        },
    },

    // YOUNGSTER_SAM (ID 626) - Pewter Gym
    [DIFFICULTY_NORMAL][626] =
    {
        .trainerName = _("SAM"),
        .trainerClass = TRAINER_CLASS_YOUNGSTER_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_YOUNGSTER_FRLG,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_YOUNGSTER_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 11,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_SCRATCH, MOVE_SAND_ATTACK, MOVE_MUD_SLAP, MOVE_ROCK_TOMB },
            },
            {
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 11,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_BONE_CLUB, MOVE_GROWL, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY },
            },
        },
    },

    // HIKER_TROY (ID 627) - Pewter Gym
    [DIFFICULTY_NORMAL][627] =
    {
        .trainerName = _("TROY"),
        .trainerClass = TRAINER_CLASS_HIKER_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_HIKER_FRLG,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_HIKER_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 12,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_SCRATCH, MOVE_SAND_ATTACK, MOVE_MUD_SLAP, MOVE_DIG },
            },
            {
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 12,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MUD_SLAP, MOVE_ROCK_THROW },
            },
        },
    },

    // CAMPER_LIAM (ID 52) - Pewter Gym (override - Rock/Ground team)
    [DIFFICULTY_NORMAL][52] =
    {
        .trainerName = _("LIAM"),
        .trainerClass = TRAINER_CLASS_CAMPER_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_CAMPER_FRLG,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_CAMPER_FRLG,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 9,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MUD_SLAP, MOVE_ROCK_THROW },
            },
        },
    },

    // LEADER_BROCK (ID 314) - Pewter Gym (override - add Rhyhorn)
    [DIFFICULTY_NORMAL][314] =
    {
        .trainerName = _("BROCK"),
        .trainerClass = TRAINER_CLASS_LEADER_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_LEADER_BROCK_FRLG,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_LEADER_BROCK_FRLG,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 12,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MUD_SLAP, MOVE_ROCK_THROW },
            },
            {
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 13,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_HORN_ATTACK, MOVE_STOMP, MOVE_TAIL_WHIP, MOVE_SCARY_FACE },
            },
            {
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 14,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_TACKLE, MOVE_SCREECH, MOVE_BIND, MOVE_ROCK_THROW },
            },
        },
    },

    // LASS_DAWN (ID 37) - Pewter Gym (override - Rock/Ground team)
    [DIFFICULTY_NORMAL][37] =
    {
        .trainerName = _("DAWN"),
        .trainerClass = TRAINER_CLASS_LASS_FRLG,
        .trainerPic = TRAINER_PIC_FRONT_LASS_FRLG,
        .gender = TRAINER_GENDER_FEMALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_PIC_FRONT_LASS_FRLG,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 10,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_SCRATCH, MOVE_SAND_ATTACK, MOVE_MUD_SLAP, MOVE_ROCK_TOMB },
            },
            {
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 10,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = { MOVE_SCRATCH, MOVE_SAND_ATTACK, MOVE_MUD_SLAP, MOVE_DIG },
            },
        },
    },
