#ifndef __MC_ID_H_INCLUDED__
#define __MC_ID_H_INCLUDED__

#include <stdint.h>

enum mc_block_id {
    block_air = 0,
    block_stone = 1,
    block_grass = 2,
    block_dirt = 3,
    block_cobblestone = 4,
    block_planks = 5,
    block_sapling = 6,
    block_bedrock = 7,
    block_flowing_water = 8,
    block_water = 9,
    block_flowing_lava = 10,
    block_lava = 11,
    block_sand = 12,
    block_gravel = 13,
    block_gold_ore = 14,
    block_iron_ore = 15,
    block_coal_ore = 16,
    block_log = 17,
    block_leaves = 18,
    block_sponge = 19,
    block_glass = 20,
    block_lapis_ore = 21,
    block_lapis_block = 22,
    block_dispenser = 23,
    block_sandstone = 24,
    block_noteblock = 25,
    block_bed = 26,
    block_golden_rail = 27,
    block_detector_rail = 28,
    block_sticky_piston = 29,
    block_web = 30,
    block_tallgrass = 31,
    block_deadbush = 32,
    block_piston = 33,
    block_piston_head = 34,
    block_wool = 35,
    block_yellow_flower = 37,
    block_red_flower = 38,
    block_brown_mushroom = 39,
    block_red_mushroom = 40,
    block_gold_block = 41,
    block_iron_block = 42,
    block_double_stone_slab = 43,
    block_stone_slab = 44,
    block_brick_block = 45,
    block_tnt = 46,
    block_bookshelf = 47,
    block_mossy_cobblestone = 48,
    block_obsidian = 49,
    block_torch = 50,
    block_fire = 51,
    block_mob_spawner = 52,
    block_oak_stairs = 53,
    block_chest = 54,
    block_redstone_wire = 55,
    block_diamond_ore = 56,
    block_diamond_block = 57,
    block_crafting_table = 58,
    block_wheat = 59,
    block_farmland = 60,
    block_furnace = 61,
    block_lit_furnace = 62,
    block_standing_sign = 63,
    block_wooden_door = 64,
    block_ladder = 65,
    block_rail = 66,
    block_cobblestone_stairs = 67,
    block_wall_sign = 68,
    block_lever = 69,
    block_stone_pressure_plate = 70,
    block_iron_door = 71,
    block_wooden_pressure_plate = 72,
    block_redstone_ore = 73,
    block_lit_redstone_ore = 74,
    block_unlit_redstone_torch = 75,
    block_redstone_torch = 76,
    block_stone_button = 77,
    block_snow_layer = 78,
    block_ice = 79,
    block_snow = 80,
    block_cactus = 81,
    block_clay = 82,
    block_reeds = 83,
    block_jukebox = 84,
    block_fence = 85,
    block_pumpkin = 86,
    block_netherrack = 87,
    block_soul_sand = 88,
    block_glowstone = 89,
    block_portal = 90,
    block_lit_pumpkin = 91,
    block_cake = 92,
    block_unpowered_repeater = 93,
    block_powered_repeater = 94,
    block_stained_glass = 95,
    block_trapdoor = 96,
    block_monster_egg = 97,
    block_stonebrick = 98,
    block_brown_mushroom_block = 99,
    block_red_mushroom_block = 100,
    block_iron_bars = 101,
    block_glass_pane = 102,
    block_melon_block = 103,
    block_pumpkin_stem = 104,
    block_melon_stem = 105,
    block_vine = 106,
    block_fence_gate = 107,
    block_brick_stairs = 108,
    block_stone_brick_stairs = 109,
    block_mycelium = 110,
    block_waterlily = 111,
    block_nether_brick = 112,
    block_nether_brick_fence = 113,
    block_nether_brick_stairs = 114,
    block_nether_wart = 115,
    block_enchanting_table = 116,
    block_brewing_stand = 117,
    block_cauldron = 118,
    block_end_portal = 119,
    block_end_portal_frame = 120,
    block_end_stone = 121,
    block_dragon_egg = 122,
    block_redstone_lamp = 123,
    block_lit_redstone_lamp = 124,
    block_double_wooden_slab = 125,
    block_wooden_slab = 126,
    block_cocoa = 127,
    block_sandstone_stairs = 128,
    block_emerald_ore = 129,
    block_ender_chest = 130,
    block_tripwire_hook = 131,
    block_tripwire_wire = 132,
    block_emerald_block = 133,
    block_spruce_stairs = 134,
    block_birch_stairs = 135,
    block_jungle_stairs = 136,
    block_command_block = 137,
    block_beacon = 138,
    block_mushroom_stem = 139,
    block_flower_pot = 140,
    block_carrots = 141,
    block_potatoes = 142,
    block_wooden_button = 143,
    block_skull = 144,
    block_anvil = 145,
    block_trapped_chest = 146,
    block_light_weighted_pressure_plate = 147,
    block_heavy_weighted_pressure_plate = 148,
    block_unpowered_comparator = 149,
    block_powered_comparator = 150,
    block_daylight_detector = 151,
    block_redstone_block = 152,
    block_quartz_ore = 153,
    block_hopper = 154,
    block_quartz_block = 155,
    block_quartz_stairs = 156,
    block_activator_rail = 157,
    block_dropper = 158,
    block_stained_hardened_clay = 159,
    block_stained_glass_pane = 160,
    block_leaves2 = 161,
    block_log2 = 162,
    block_acacia_stairs = 163,
    block_dark_oak_stairs = 164,
    block_crimson_stairs = 509,
    block_warped_stairs = 510,
    block_slime = 165,
    block_barrier = 166,
    block_iron_trapdoor = 167,
    block_prismarine = 168,
    block_sea_lantern = 169,
    block_hay_block = 170,
    block_carpet = 171,
    block_hardened_clay = 172,
    block_coal_block = 173,
    block_packed_ice = 174,
    block_double_plant = 175,
    block_standing_banner = 176,
    block_wall_banner = 177,
    block_daylight_detector_inverted = 178,
    block_red_sandstone = 179,
    block_red_sandstone_stairs = 180,
    block_smooth_red_sandstone_stairs = 11415,
    block_double_stone_slab2 = 181,
    block_stone_slab2 = 182,
    block_spruce_fence_gate = 183,
    block_birch_fence_gate = 184,
    block_jungle_fence_gate = 185,
    block_dark_oak_fence_gate = 186,
    block_acacia_fence_gate = 187,
    block_crimson_fence_gate = 513,
    block_warped_fence_gate = 514,
    block_spruce_fence = 188,
    block_birch_fence = 189,
    block_jungle_fence = 190,
    block_dark_oak_fence = 191,
    block_acacia_fence = 192,
    block_crimson_fence = 511,
    block_warped_fence = 512,
    block_spruce_door = 193,
    block_birch_door = 194,
    block_jungle_door = 195,
    block_acacia_door = 196,
    block_crimson_door = 499,
    block_warped_door = 500,
    block_dark_oak_door = 197,
    block_end_rod = 198,
    block_chorus_plant = 199,
    block_chorus_flower = 200,
    block_purpur_block = 201,
    block_purpur_pillar = 202,
    block_purpur_stairs = 203,
    block_purpur_double_slab = 204,
    block_purpur_slab = 205,
    block_end_bricks = 206,
    block_beetroots = 207,
    block_dirt_path = 208,
    block_end_gateway = 209,
    block_repeating_command_block = 210,
    block_chain_command_block = 211,
    block_frosted_ice = 212,
    block_magma = 213,
    block_nether_wart_block = 214,
    block_red_nether_brick = 215,
    block_bone_block = 216,
    block_structure_void = 217,
    block_observer = 218,
    block_white_shulker_box = 219,
    block_orange_shulker_box = 220,
    block_magenta_shulker_box = 221,
    block_light_blue_shulker_box = 222,
    block_yellow_shulker_box = 223,
    block_lime_shulker_box = 224,
    block_pink_shulker_box = 225,
    block_gray_shulker_box = 226,
    block_silver_shulker_box = 227,
    block_cyan_shulker_box = 228,
    block_purple_shulker_box = 229,
    block_blue_shulker_box = 230,
    block_brown_shulker_box = 231,
    block_green_shulker_box = 232,
    block_red_shulker_box = 233,
    block_black_shulker_box = 234,
    block_white_glazed_terracotta = 235,
    block_orange_glazed_terracotta = 236,
    block_magenta_glazed_terracotta = 237,
    block_light_blue_glazed_terracotta = 238,
    block_yellow_glazed_terracotta = 239,
    block_lime_glazed_terracotta = 240,
    block_pink_glazed_terracotta = 241,
    block_gray_glazed_terracotta = 242,
    block_light_gray_glazed_terracotta = 243,
    block_cyan_glazed_terracotta = 244,
    block_purple_glazed_terracotta = 245,
    block_blue_glazed_terracotta = 246,
    block_brown_glazed_terracotta = 247,
    block_green_glazed_terracotta = 248,
    block_red_glazed_terracotta = 249,
    block_black_glazed_terracotta = 250,
    block_concrete = 251,
    block_concrete_powder = 252,
    block_structure_block = 255,
    block_jigsaw = 256,
    block_shulker_box = 257,
    // 1.16 stuff
    block_ancient_debris = 1000,
    block_basalt = 1001,
    block_polished_basalt = 1002,
    block_soul_campfire = 1003,
    block_blackstone = 1004,
    block_netherite_block = 1005,
    block_warped_nylium = 1006,
    block_crimson_nylium = 1007,
    block_warped_wart_block = 1010,
    block_shroomlight = 1011,
    block_twisting_vines = 1012,
    block_twisting_vines_plant = 1013,
    block_weeping_vines = 1014,
    block_weeping_vines_plant = 1015,
    block_warped_fungus = 1016,
    block_crimson_fungus = 1017,
    block_warped_roots = 1018,
    block_crimson_roots = 1019,
    block_soul_soil = 1020,
    block_nether_gold_ore = 1021,
    // Solid Nether stone blocks
    block_polished_blackstone = 1022,
    block_chiseled_polished_blackstone = 1023,
    block_gilded_blackstone = 1024,
    block_cracked_polished_blackstone_bricks = 1025,
    block_polished_blackstone_bricks = 1026,
    block_quartz_bricks = 1041,
    // Nether stone stairs
    block_blackstone_stairs = 1030,
    block_polished_blackstone_stairs = 1031,
    block_polished_blackstone_brick_stairs = 1032,
    // nether redstone blocks
    block_polished_blackstone_pressure_plate = 1033,
    block_polished_blackstone_button = 1034,
    // advanced nether blocks
    block_crying_obsidian = 1035,
    block_lodestone = 1036,
    block_respawn_anchor = 1037,
    // soul lightning
    block_soul_lantern = 1038,
    block_soul_torch = 1039,
    block_soul_fire = 1040,

    // 1.17
    block_amethyst = 1042,
    block_raw_iron = 1043,
    block_raw_gold = 1044,
    block_budding_amethyst = 1045,
    block_copper = 1046,
    block_exposed_copper = 1047,
    block_weathered_copper = 1048,
    block_oxidized_copper = 1049,
    block_waxed_copper = 1050,
    block_waxed_exposed_copper = 1051,
    block_waxed_weathered_copper = 1052,
    block_waxed_oxidized_copper = 1053,

    block_cut_copper = 1054,
    block_exposed_cut_copper = 1055,
    block_weathered_cut_copper = 1056,
    block_oxidized_cut_copper = 1057,
    block_waxed_cut_copper = 1058,
    block_waxed_exposed_cut_copper = 1059,
    block_waxed_weathered_cut_copper = 1060,
    block_waxed_oxidized_cut_copper = 1061,

    block_raw_copper = 1062,
    block_copper_ore = 1063,

    block_cut_copper_stairs = 1064,
    block_exposed_cut_copper_stairs = 1065,
    block_weathered_cut_copper_stairs = 1066,
    block_oxidized_cut_copper_stairs = 1067,

    block_waxed_cut_copper_stairs = 1068,
    block_waxed_exposed_cut_copper_stairs = 1069,
    block_waxed_weathered_cut_copper_stairs = 1070,
    block_waxed_oxidized_cut_copper_stairs = 1071,

    block_cut_copper_slab = 1072,
    block_exposed_cut_copper_slab = 1073,
    block_weathered_cut_copper_slab = 1074,
    block_oxidized_cut_copper_slab = 1075,

    block_waxed_cut_copper_slab = 1076,
    block_waxed_exposed_cut_copper_slab = 1077,
    block_waxed_weathered_cut_copper_slab = 1078,
    block_waxed_oxidized_cut_copper_slab = 1079,

    block_moss = 1080,
    block_calcite = 1081,
    block_rooted_dirt = 1082,

    block_deepslate = 1083,
    block_cobbled_deepslate = 1084,
    block_polished_deepslate = 1085,
    block_deepslate_coal_ore = 1086,
    block_deepslate_iron_ore = 1087,
    block_deepslate_copper_ore = 1088,
    block_deepslate_gold_ore = 1089,
    block_deepslate_emerald_ore = 1090,
    block_deepslate_lapis_ore = 1091,
    block_deepslate_diamond_ore = 1092,
    block_deepslate_redstone_ore = 1093,
    block_deepslate_bricks = 1094,
    block_cracked_deepslate_bricks = 1095,
    block_deepslate_tiles = 1096,
    block_cracked_deepslate_tiles = 1097,
    block_chiseled_deepslate = 1098,

    block_cobbled_deepslate_stairs = 1099,
    block_polished_deepslate_stairs = 1100,
    block_deepslate_brick_stairs = 1101,
    block_deepslate_tile_stairs = 1102,

    block_cobbled_deepslate_slab = 1103,
    block_polished_deepslate_slab = 1104,
    block_deepslate_brick_slab = 1105,
    block_deepslate_tile_slab = 1106,

    block_dripstone = 1107,
    block_smooth_basalt = 1108,
    block_tuff = 1109,
    block_pointed_dripstone = 1110,

    block_powder_snow = 1111,
    block_hanging_roots = 1112,
    block_small_amethyst_bud = 1113,
    block_medium_amethyst_bud = 1114,
    block_large_amethyst_bud = 1115,
    block_cave_vines_plant = 1116,
    block_cave_vines = 1117,
    block_lightning_rod = 1118,
    block_glow_lichen = 1119,
    block_spore_blossom = 1120,

    block_mud = 1121,
    block_packed_mud = 1122,
    block_mud_bricks = 1123,
    block_mud_brick_slab = 1124,
    block_mangrove_roots = 1125,
    block_mangrove_log = 1126,
    block_muddy_mangrove_roots = 1127,

    // adding a gap in the numbering of walls to keep them all
    // in one numbering block starting at 1792
    // all blocks between 1792 and 2047 are considered walls
    // this is because our check looks for the prefix 0b11100000000
    block_andesite_wall = 1792,
    block_brick_wall = 1793,
    block_cobblestone_wall = 1794,
    block_diorite_wall = 1795,
    block_end_stone_brick_wall = 1796,
    block_granite_wall = 1797,
    block_mossy_cobblestone_wall = 1798,
    block_mossy_stone_brick_wall = 1799,
    block_nether_brick_wall = 1800,
    block_prismarine_wall = 1801,
    block_red_nether_brick_wall = 1802,
    block_red_sandstone_wall = 1803,
    block_sandstone_wall = 1804,
    block_stone_brick_wall = 1805,
    block_blackstone_wall = 1806,
    block_polished_blackstone_wall = 1807,
    block_polished_blackstone_brick_wall = 1808,
    block_cobbled_deepslate_wall = 1809,
    block_polished_deepslate_wall = 1810,
    block_deepslate_brick_wall = 1811,
    block_deepslate_tile_wall = 1812,
    // end of walls

    block_prismarine_stairs = 11337,
    block_dark_prismarine_stairs = 11338,
    block_prismarine_brick_stairs = 11339,
    block_prismarine_slab = 11340,
    block_dark_prismarine_slab = 11341,
    block_prismarine_brick_slab = 11342,
    block_andesite_slab = 11343,
    block_diorite_slab = 11344,
    block_granite_slab = 11345,
    block_polished_andesite_slab = 11346,
    block_polished_diorite_slab = 11347,
    block_polished_granite_slab = 11348,
    block_red_nether_brick_slab = 11349,
    block_smooth_sandstone_slab = 11350,
    block_cut_sandstone_slab = 11351,
    block_smooth_red_sandstone_slab = 11352,
    block_cut_red_sandstone_slab = 11353,
    block_end_stone_brick_slab = 11354,
    block_blackstone_slab = 1027,
    block_polished_blackstone_slab = 1028,
    block_polished_blackstone_brick_slab = 1029,
    block_mossy_cobblestone_slab = 11355,
    block_mossy_stone_brick_slab = 11356,
    block_smooth_quartz_slab = 11357,
    block_smooth_stone_slab = 11358,
    block_fletching_table = 11359,
    block_cartography_table = 11360,
    block_smithing_table = 11361,
    block_blast_furnace = 11362,
    // block_blast_furnace lit 11363
    block_smoker = 11364,
    // block_smoker lit = 11365,
    block_lectern = 11366,
    block_loom = 11367,
    block_stonecutter = 11368,
    block_grindstone = 11369,
    block_mossy_stone_brick_stairs = 11370,
    block_mossy_cobblestone_stairs = 11371,
    block_lantern = 11373,
    block_smooth_sandstone_stairs = 11374,
    block_smooth_quartz_stairs = 11375,
    block_polished_granite_stairs = 11376,
    block_polished_diorite_stairs = 11377,
    block_polished_andesite_stairs = 11378,
    block_stone_stairs = 11379,
    block_granite_stairs = 11380,
    block_diorite_stairs = 11381,
    block_andesite_stairs = 11382,
    block_end_stone_brick_stairs = 11383,
    block_red_nether_brick_stairs = 11384,
    block_oak_sapling = 11385,
    block_spruce_sapling = 11386,
    block_birch_sapling = 11387,
    block_jungle_sapling = 11388,
    block_acacia_sapling = 11389,
    block_dark_oak_sapling = 11390,
    block_oak_sign = 11401,
    block_spruce_sign = 11402,
    block_birch_sign = 11403,
    block_jungle_sign = 11404,
    block_acacia_sign = 11405,
    block_dark_oak_sign = 11406,
    block_crimson_sign = 12505,
    block_warped_sign = 12506,
    block_oak_wall_sign = 11407,
    block_spruce_wall_sign = 11408,
    block_birch_wall_sign = 11409,
    block_jungle_wall_sign = 11410,
    block_acacia_wall_sign = 11411,
    block_dark_oak_wall_sign = 11412,
    block_crimson_wall_sign = 12507,
    block_warped_wall_sign = 12508,
    block_bamboo_sapling = 11413,
    block_scaffolding = 11414,
    block_bamboo = 11416,
    block_composter = 11417,
    // 1.15 blocks below
    block_beehive = 11501,
    block_bee_nest = 11502,
    block_honeycomb_block = 11503,
    block_honey_block = 11504,
    block_sweet_berry_bush = 11505,
    block_campfire = 11506,
    block_bell = 11507,

    block_spruce_trapdoor = 11332,
    block_birch_trapdoor = 11333,
    block_jungle_trapdoor = 11334,
    block_acacia_trapdoor = 11335,
    block_dark_oak_trapdoor = 11336,

    // The Game of Noobs blocks below
    block_noob_chest = 11508,
    block_noob_ore = 11509
};

typedef uint16_t mc_block_t;

enum mc_item_id {
    item_iron_shovel = 256,
    item_iron_pickaxe = 257,
    item_iron_axe = 258,
    item_flint_and_steel = 259,
    item_apple = 260,
    item_bow = 261,
    item_arrow = 262,
    item_coal = 263,
    item_diamond = 264,
    item_iron_ingot = 265,
    item_gold_ingot = 266,
    item_iron_sword = 267,
    item_wooden_sword = 268,
    item_wooden_shovel = 269,
    item_wooden_pickaxe = 270,
    item_wooden_axe = 271,
    item_stone_sword = 272,
    item_stone_shovel = 273,
    item_stone_pickaxe = 274,
    item_stone_axe = 275,
    item_diamond_sword = 276,
    item_diamond_shovel = 277,
    item_diamond_pickaxe = 278,
    item_diamond_axe = 279,
    item_stick = 280,
    item_bowl = 281,
    item_mushroom_stew = 282,
    item_golden_sword = 283,
    item_golden_shovel = 284,
    item_golden_pickaxe = 285,
    item_golden_axe = 286,
    item_string = 287,
    item_feather = 288,
    item_gunpowder = 289,
    item_wooden_hoe = 290,
    item_stone_hoe = 291,
    item_iron_hoe = 292,
    item_diamond_hoe = 293,
    item_golden_hoe = 294,
    item_wheat_seeds = 295,
    item_wheat = 296,
    item_bread = 297,
    item_leather_helmet = 298,
    item_leather_chestplate = 299,
    item_leather_leggings = 300,
    item_leather_boots = 301,
    item_chainmail_helmet = 302,
    item_chainmail_chestplate = 303,
    item_chainmail_leggings = 304,
    item_chainmail_boots = 305,
    item_iron_helmet = 306,
    item_iron_chestplate = 307,
    item_iron_leggings = 308,
    item_iron_boots = 309,
    item_diamond_helmet = 310,
    item_diamond_chestplate = 311,
    item_diamond_leggings = 312,
    item_diamond_boots = 313,
    item_golden_helmet = 314,
    item_golden_chestplate = 315,
    item_golden_leggings = 316,
    item_golden_boots = 317,
    item_flint = 318,
    item_porkchop = 319,
    item_cooked_porkchop = 320,
    item_painting = 321,
    item_golden_apple = 322,
    item_sign = 323,
    item_wooden_door = 324,
    item_bucket = 325,
    item_water_bucket = 326,
    item_lava_bucket = 327,
    item_minecart = 328,
    item_saddle = 329,
    item_iron_door = 330,
    item_redstone = 331,
    item_snowball = 332,
    item_boat = 333,
    item_leather = 334,
    item_milk_bucket = 335,
    item_brick = 336,
    item_clay_ball = 337,
    item_reeds = 338,
    item_paper = 339,
    item_book = 340,
    item_slime_ball = 341,
    item_chest_minecart = 342,
    item_furnace_minecart = 343,
    item_egg = 344,
    item_compass = 345,
    item_fishing_rod = 346,
    item_clock = 347,
    item_glowstone_dust = 348,
    item_fish = 349,
    item_cooked_fish = 350,
    item_dye = 351,
    item_bone = 352,
    item_sugar = 353,
    item_cake = 354,
    item_bed = 355,
    item_repeater = 356,
    item_cookie = 357,
    item_filled_map = 358,
    item_shears = 359,
    item_melon = 360,
    item_pumpkin_seeds = 361,
    item_melon_seeds = 362,
    item_beef = 363,
    item_cooked_beef = 364,
    item_chicken = 365,
    item_cooked_chicken = 366,
    item_rotten_flesh = 367,
    item_ender_pearl = 368,
    item_blaze_rod = 369,
    item_ghast_tear = 370,
    item_gold_nugget = 371,
    item_nether_wart = 372,
    item_potion = 373,
    item_glass_bottle = 374,
    item_spider_eye = 375,
    item_fermented_spider_eye = 376,
    item_blaze_powder = 377,
    item_magma_cream = 378,
    item_brewing_stand = 379,
    item_cauldron = 380,
    item_ender_eye = 381,
    item_speckled_melon = 382,
    item_spawn_egg = 383,
    item_experience_bottle = 384,
    item_fire_charge = 385,
    item_writable_book = 386,
    item_written_book = 387,
    item_emerald = 388,
    item_item_frame = 389,
    item_flower_pot = 390,
    item_carrot = 391,
    item_potato = 392,
    item_baked_potato = 393,
    item_poisonous_potato = 394,
    item_map = 395,
    item_golden_carrot = 396,
    item_skull = 397,
    item_carrot_on_a_stick = 398,
    item_nether_star = 399,
    item_pumpkin_pie = 400,
    item_fireworks = 401,
    item_firework_charge = 402,
    item_enchanted_book = 403,
    item_comparator = 404,
    item_netherbrick = 405,
    item_quartz = 406,
    item_tnt_minecart = 407,
    item_hopper_minecart = 408,
    item_prismarine_shard = 409,
    item_prismarine_crystals = 410,
    item_rabbit = 411,
    item_cooked_rabbit = 412,
    item_rabbit_stew = 413,
    item_rabbit_foot = 414,
    item_rabbit_hide = 415,
    item_armor_stand = 416,
    item_iron_horse_armor = 417,
    item_golden_horse_armor = 418,
    item_diamond_horse_armor = 419,
    item_lead = 420,
    item_name_tag = 421,
    item_command_block_minecart = 422,
    item_mutton = 423,
    item_cooked_mutton = 424,
    item_banner = 425,
    item_end_crystal = 426,
    item_spruce_door = 427,
    item_birch_door = 428,
    item_jungle_door = 429,
    item_acacia_door = 430,
    item_dark_oak_door = 431,
    item_crimson_door = 755,
    item_warped_door = 756,
    item_chorus_fruit = 432,
    item_popped_chorus_fruit = 433,
    item_beetroot = 434,
    item_beetroot_seeds = 435,
    item_beetroot_soup = 436,
    item_dragon_breath = 437,
    item_splash_potion = 438,
    item_spectral_arrow = 439,
    item_tipped_arrow = 440,
    item_lingering_potion = 441,
    item_shield = 442,
    item_elytra = 443,
    item_spruce_boat = 444,
    item_birch_boat = 445,
    item_jungle_boat = 446,
    item_acacia_boat = 447,
    item_dark_oak_boat = 448,
    item_totem_of_undying = 449,
    item_shulker_shell = 450,
    item_iron_nugget = 452,
    item_knowledge_book = 453,
    item_record_13 = 2256,
    item_record_cat = 2257,
    item_record_blocks = 2258,
    item_record_chirp = 2259,
    item_record_far = 2260,
    item_record_mall = 2261,
    item_record_mellohi = 2262,
    item_record_stal = 2263,
    item_record_strad = 2264,
    item_record_ward = 2265,
    item_record_11 = 2266,
    item_record_wait = 2267,
};

typedef uint16_t mc_item_t;
#endif
