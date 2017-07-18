#include "types.h"
#include "defines.h"
#include "functions.h"
#include "locations.h"

#define NULL 0

const struct item_struct item_table[ALL_ITEMS] =
{
    //378. {Dusk Ball}
    {
        .name = {_("Dusk Ball")},
        .index = ITEM_DUSKBALL,
        .price = 1000,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BALLS,
        .type_of_item =  BALL_DUSK,
        .field_usage_code = NULL,
        .battle_usage = 0x2,
        .battle_usage_code = (void *)0x080FE395,
        .extra_param = NULL
    },
	
	    //379. {Heal Ball}
    {
        .name = {_("Heal Ball")},
        .index = ITEM_HEALBALL,
        .price = 300,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BALLS,
        .type_of_item =  BALL_HEAL,
        .field_usage_code = NULL,
        .battle_usage = 0x2,
        .battle_usage_code = (void *)0x080FE395,
        .extra_param = NULL
    },

    //380. {QUICK BALL}}
    {
        .name = {_("Quick Ball")},
        .index = ITEM_QUICKBALL,
        .price = 1000,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BALLS,
        .type_of_item =  BALL_QUICK,
        .field_usage_code = NULL,
        .battle_usage = 0x2,
        .battle_usage_code = (void *)0x080FE395,
        .extra_param = NULL
    },

    //381. {CHERISH BALL}
    {
        .name = {_("Cherish Ball")},
        .index = ITEM_CHERISHBALL,
        .price = 1000,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BALLS,
        .type_of_item =  BALL_CHERISH,
        .field_usage_code = NULL,
        .battle_usage = 0x2,
        .battle_usage_code = (void *)0x080FE395,
        .extra_param = NULL
    },

    //382. {OLD GATEU}}
    {
        .name = {_("Old Gateau")},
        .index = ITEM_OLDGATEAU,
        .price = 350,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x08580263,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  0x1,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = 0x1,
        .battle_usage_code = (void *)0x080FE591,
        .extra_param = NULL
    },

    //383. {HONEY}
    {
        .name = {_("Honey")},
        .index = ITEM_HONEY,
        .price = 100,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x00000000,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //384. {GROWTH MULCH}
    {
        .name = {_("Growth Mulch")},
        .index = ITEM_GROWTHMULCH,
        .price = 200,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x00000000,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //385. {DAMP MULCH}
    {
        .name = {_("Damp Mulch")},
        .index = ITEM_DAMPMULCH,
        .price = 200,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x00000000,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //386. {STABLE MULCH}
    {
        .name = {_("Stable Mulch")},
        .index = ITEM_STABLEMULCH,
        .price = 200,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x00000000,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //387. {GOOEY MULCH}
    {
        .name = {_("Gooey Mulch")},
        .index = ITEM_GOOEYMULCH,
        .price = 200,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x00000000,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //388. {ARMOR FOSSIL}
    {
        .name = {_("Armor Fossil")},
        .index = ITEM_ARMORFOSSIL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_KEYITEMS,
        .type_of_item =  0x4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //389. {SKULL FOSSIL}
    {
        .name = {_("Skull Fossil")},
        .index = ITEM_SKULLFOSSIL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_KEYITEMS,
        .type_of_item =  0x4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //390. {RARE BONE}
    {
        .name = {_("Rare Bone")},
        .index = ITEM_RAREBONE,
        .price = 5000,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //391. {SHINY STONE}
    {
        .name = {_("Shiny Stone")},
        .index = ITEM_SHINYSTONE,
        .price = 2100,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  1,
        .field_usage_code = (void *)0x080FE379,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //392. {DUSK STONE}
    {
        .name = {_("Dusk Stone")},
        .index = ITEM_DUSKSTONE,
        .price = 2100,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  1,
        .field_usage_code = (void *)0x080FE379,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //393. {DAWN STONE}
    {
        .name = {_("Dawn Stone")},
        .index = ITEM_DAWNSTONE,
        .price = 2100,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  1,
        .field_usage_code = (void *)0x080FE379,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //394. {OVAL STONE}
    {
        .name = {_("Oval Stone")},
        .index = ITEM_OVALSTONE,
        .price = 2100,
        .held_effect = 0x0,
        .held_effect_quality = 0x0,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //395. {ODD KEYSTONE}
    {
        .name = {_("Odd Keystone")},
        .index = ITEM_ODDKEYSTONE,
        .price = 2100,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //396. {GRISEOUS ORB}
    {
        .name = {_("Griseous Orb")},
        .index = ITEM_GRISEOUSORB,
        .price = NULL,
        .held_effect = ITEM_EFFECT_GRISEOUSORB,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //397. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //400. {DOUSE DRIVE}
    {
        .name = {_("Douse Drive")},
        .index = ITEM_DOUSEDRIVE,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //398. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
    {
        .name = {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00},
        .index = NULL,
        .price = NULL,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x0857FEA0,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

};
