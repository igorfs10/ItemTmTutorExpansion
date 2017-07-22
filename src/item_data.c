#include "types.h"
#include "defines.h"
#include "functions.h"
#include "locations.h"

#define NULL 0

const struct item_struct item_table[ALL_ITEMS] =
{
    //378. {Dusk Ball}
    {
        .name = _("Dusk Ball"),
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
        .name = _("Heal Ball"),
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

    //380. {QUICK BALL}
    {
        .name = _("Quick Ball"),
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
        .name = _("Cherish Ball"),
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

    //382. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
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

    //383. {OLD GATEU}
    {
        .name = _("Old Gateau"),
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

    //384. {HONEY}
    {
        .name = _("Honey"),
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

    //385. {GROWTH MULCH}
    {
        .name = _("Growth Mulch"),
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

    //386. {DAMP MULCH}
    {
        .name = _("Damp Mulch"),
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

    //387. {STABLE MULCH}
    {
        .name = _("Stable Mulch"),
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

    //388. {GOOEY MULCH}
    {
        .name = _("Gooey Mulch"),
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

    //389. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
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

    //390. {ARMOR FOSSIL}
    {
        .name = _("Armor Fossil"),
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

    //391. {SKULL FOSSIL}
    {
        .name = _("Skull Fossil"),
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

    //392. {RARE BONE}
    {
        .name = _("Rare Bone"),
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

    //393. {SHINY STONE}
    {
        .name = _("Shiny Stone"),
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

    //394. {DUSK STONE}
    {
        .name = _("Dusk Stone"),
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

    //395. {DAWN STONE}
    {
        .name = _("Dawn Stone"),
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

    //396. {OVAL STONE}
    {
        .name = _("Oval Stone"),
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

    //397. {ODD KEYSTONE}
    {
        .name = _("Odd Keystone"),
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

    //398. {GRISEOUS ORB}
    {
        .name = _("Griseous Orb"),
        .index = ITEM_GRISEOUSORB,
        .price = 10000,
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

    //399. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
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
        .name = _("Douse Drive"),
        .index = ITEM_DOUSEDRIVE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_DRIVES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000B
    },

    //401. {SHOCK DRIVE}
    {
        .name = _("Shock Drive"),
        .index = ITEM_SHOCKDRIVE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_DRIVES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000D
    },

    //402. {BURN DRIVE}
    {
        .name = _("Burn Drive"),
        .index = ITEM_BURNDRIVE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_DRIVES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000A
    },

    //403. {CHILL DRIVE}
    {
        .name = _("Chill Drive"),
        .index = ITEM_CHILLDRIVE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_DRIVES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000F
    },

    //404. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
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

    //405. {SWEET HEART}
    {
        .name = _("Sweet Heart"),
        .index = ITEM_SWEETHEART,
        .price = 100,
        .held_effect = NULL,
        .held_effect_quality = 20,
        .desc_pointer = (void *)0x08580109,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  1,
        .field_usage_code = (void *)0x080FDEA1,
        .battle_usage = 1,
        .battle_usage_code = (void *)0x080FE591,
        .extra_param = NULL
    },

    //406. {ADAMANT ORB}
    {
        .name = _("Adamant Orb"),
        .index = ITEM_ADAMANTORB,
        .price = 10000,
        .held_effect = ITEM_EFFECT_ADAMANTORB,
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

    //407. {LUSTROUS ORB}
    {
        .name = _("Lustrous Orb"),
        .index = ITEM_LUSTROUSORB,
        .price = 10000,
        .held_effect = ITEM_EFFECT_LUSTROUSORB,
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

    //408. {GREET MAIL}
    {
        .name = _("Greet Mail"),
        .index = ITEM_GREETMAIL,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //409. {FAVORED MAIL}
    {
        .name = _("Favored Mail"),
        .index = ITEM_FAVOREDMAIL,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //410. {RSVP MAIL}
    {
        .name = _("RSVP Mail"),
        .index = ITEM_RSVPMAIL,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //411. {THANKS MAIL}
    {
        .name = _("Thanks Mail"),
        .index = ITEM_THANKSMAIL,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //412. {INQUIRY MAIL}
    {
        .name = _("Inquiry Mail"),
        .index = ITEM_INQUIRYMAIL,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //413. {LIKE MAIL}
    {
        .name = _("Like Mail"),
        .index = ITEM_LIKEMAIL,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //414. {REPLY MAIL}
    {
        .name = _("Reply Mail"),
        .index = ITEM_REPLYMAIL,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //415. {BRIDGEMAIL S}
    {
        .name = _("BridgeMail S"),
        .index = ITEM_BRIDGEMAILS,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //416. {BRIDGEMAIL D}
    {
        .name = _("BridgeMail D"),
        .index = ITEM_BRIDGEMAILD,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //417. {BRIDGEMAIL T}
    {
        .name = _("BridgeMail T"),
        .index = ITEM_BRIDGEMAILT,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //418. {BRIDGEMAIL V}
    {
        .name = _("BridgeMail V"),
        .index = ITEM_BRIDGEMAILV,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //419. {BRIDGEMAIL M}
    {
        .name = _("BridgeMail M"),
        .index = ITEM_BRIDGEMAILM,
        .price = 50,
        .held_effect = NULL,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  NULL,
        .field_usage_code = (void *)0x080FD279,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
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
