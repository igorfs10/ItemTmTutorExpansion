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

    //420. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
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

    //421. {OCCA BERRY}
    {
        .name = _("Occa Berry"),
        .index = ITEM_OCCABERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000A
    },

    //422. {PASSHO BERRY}
    {
        .name = _("Passho Berry"),
        .index = ITEM_PASSHOBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000B
    },

    //423. {WACAN BERRY}
    {
        .name = _("Wacan Berry"),
        .index = ITEM_WACANBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000D
    },

    //424. {RINDO BERRY}
    {
        .name = _("Rindo Berry"),
        .index = ITEM_RINDOBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000C
    },

    //425. {YACHE BERRY}
    {
        .name = _("Yache Berry"),
        .index = ITEM_YACHEBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000F
    },

    //426. {CHOPLE BERRY}
    {
        .name = _("Chople Berry"),
        .index = ITEM_CHOPLEBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000001
    },

    //427. {KEBIA BERRY}
    {
        .name = _("Kebia Berry"),
        .index = ITEM_KEBIABERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000003
    },

    //428. {SHUCA BERRY}
    {
        .name = _("Shuca Berry"),
        .index = ITEM_SHUCABERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000004
    },

    //429. {COBA BERRY}
    {
        .name = _("Coba Berry"),
        .index = ITEM_COBABERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000002
    },

    //430. {PAYAPA BERRY}
    {
        .name = _("Payapa Berry"),
        .index = ITEM_PAYAPABERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000E
    },

    //431. {TANGA BERRY}
    {
        .name = _("Tanga Berry"),
        .index = ITEM_TANGABERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000006
    },

    //432. {CHARTI BERRY}
    {
        .name = _("Charti Berry"),
        .index = ITEM_CHARTIBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000005
    },

    //433. {KASIB BERRY}
    {
        .name = _("Kasib Berry"),
        .index = ITEM_KASIBBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000007
    },

    //434. {HABAN BERRY}
    {
        .name = _("Haban Berry"),
        .index = ITEM_HABANBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000010
    },

    //435. {COLBUR BERRY}
    {
        .name = _("Colbur Berry"),
        .index = ITEM_COLBURBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000011
    },

    //436. {BABIRI BERRY}
    {
        .name = _("Babiri Berry"),
        .index = ITEM_BABIRIBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000008
    },

    //437. {CHILAN BERRY}
    {
        .name = _("Chilan Berry"),
        .index = ITEM_CHILANBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_DAM_REDUX_BERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //438. {MICLE BERRY}
    {
        .name = _("Micle Berry"),
        .index = ITEM_MICLEBERRY,
        .price = 20,
        .held_effect = 0,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //439. {CUSTAP BERRY}
    {
        .name = _("Custap Berry"),
        .index = ITEM_CUSTAPBERRY,
        .price = 20,
        .held_effect = ITEM_EFFECT_CUSTAPBERRY,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = NULL
    },

    //440. {JABOCA BERRY}
    {
        .name = _("Jaboca Berry"),
        .index = ITEM_JABOCABERRY,
        .price = 20,
        .held_effect = 0,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //441. {ROWAP BERRY}
    {
        .name = _("Rowap Berry"),
        .index = ITEM_ROWAPBERRY,
        .price = 20,
        .held_effect = 0,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_BERRIES,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000000
    },

    //442. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
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

    //443. {WIDE LENS}
    {
        .name = _("Wide Lens"),
        .index = ITEM_WIDELENS,
        .price = 200,
        .held_effect = ITEM_EFFECT_WIDELENS,
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

    //444. {MUSCLE BAND}
    {
        .name = _("Muscle Band"),
        .index = ITEM_MUSCLEBAND,
        .price = 200,
        .held_effect = ITEM_EFFECT_MUSCLEBAND,
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

    //445. {Wise Glasses}
    {
        .name = _("Wise Glasses"),
        .index = ITEM_WISEGLASSES,
        .price = 200,
        .held_effect = ITEM_EFFECT_WISEGLASSES,
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

    //446. {EXPERT BELT}
    {
        .name = _("Expert Belt"),
        .index = ITEM_EXPERTBELT,
        .price = 200,
        .held_effect = ITEM_EFFECT_EXPERTBELT,
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

    //447. {Light Clay}
    {
        .name = _("Light Clat"),
        .index = ITEM_LIGHTCLAY,
        .price = 200,
        .held_effect = ITEM_EFFECT_LIGHTCLAY,
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

    //448. {LIFE ORB}
    {
        .name = _("Life Orb"),
        .index = ITEM_LIFEORB,
        .price = 200,
        .held_effect = ITEM_EFFECT_LIFEORB,
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

    //449. {POWER HERB}
    {
        .name = _("Power Herb"),
        .index = ITEM_POWERHERB,
        .price = 100,
        .held_effect = ITEM_EFFECT_POWERHERB,
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

    //450. {TOXIC ORB}
    {
        .name = _("Toxic Orb"),
        .index = ITEM_TOXICORB,
        .price = 200,
        .held_effect = ITEM_EFFECT_TOXICORB,
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

    //451. {FLAME ORB}
    {
        .name = _("Flame Orb"),
        .index = ITEM_FLAMEORB,
        .price = 200,
        .held_effect = ITEM_EFFECT_FLAMEORB,
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

    //452. {QUICK POWDER}
    {
        .name = _("Quick Powder"),
        .index = ITEM_QUICKPOWDER,
        .price = 10,
        .held_effect = ITEM_EFFECT_QUICKPOWDER,
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

    //453. {FOCUS SASH}
    {
        .name = _("Focus Sash"),
        .index = ITEM_FOCUSSASH,
        .price = 200,
        .held_effect = ITEM_EFFECT_FOCUSSASH,
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

    //454. {ZOOM LENS}
    {
        .name = _("Zoom Lens"),
        .index = ITEM_ZOOMLENS,
        .price = 200,
        .held_effect = ITEM_EFFECT_ZOOMLENS,
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

    //455. {METRONOME}
    {
        .name = _("Metronome"),
        .index = ITEM_METRONOME,
        .price = 200,
        .held_effect = ITEM_EFFECT_METRONOME,
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

    //456. {IRON BALL}
    {
        .name = _("Iron Ball"),
        .index = ITEM_IRONBALL,
        .price = 200,
        .held_effect = ITEM_EFFECT_IRONBALL,
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

    //457. {LAGGINGTAIL}
    {
        .name = _("LaggingTail"),
        .index = ITEM_LAGGINGTAIL,
        .price = 200,
        .held_effect = ITEM_EFFECT_LAGGINGTAIL,
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

    //458. {DESTINY KNOT}
    {
        .name = _("Destiny Knot"),
        .index = ITEM_DESTINYKNOT,
        .price = 200,
        .held_effect = ITEM_EFFECT_DESTINYKNOT,
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

    //459. {BLACK SLUDGE}
    {
        .name = _("Black Sludge"),
        .index = ITEM_BLACKSLUDGE,
        .price = 200,
        .held_effect = ITEM_EFFECT_BLACKSLUDGE,
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

    //460. {ICY ROCK}
    {
        .name = _("Icy Rock"),
        .index = ITEM_ICYROCK,
        .price = 200,
        .held_effect = ITEM_EFFECT_ICYROCK,
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

    //461. {SMOOTH ROCK}
    {
        .name = _("Smooth Rock"),
        .index = ITEM_SMOOTHROCK,
        .price = 200,
        .held_effect = ITEM_EFFECT_SMOOTHROCK,
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

    //462. {HEAT ROCK}
    {
        .name = _("Heat Rock"),
        .index = ITEM_HEATROCK,
        .price = 200,
        .held_effect = ITEM_EFFECT_HEATROCK,
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

    //463. {DAMP ROCK}
    {
        .name = _("Damp Rock"),
        .index = ITEM_DAMPROCK,
        .price = 200,
        .held_effect = ITEM_EFFECT_DAMPROCK,
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

    //464. {GRIP CLAW}
    {
        .name = _("Grip Claw"),
        .index = ITEM_GRIPCLAW,
        .price = 200,
        .held_effect = ITEM_EFFECT_GRIPCLAW,
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

    //465. {CHOICE SCARF}
    {
        .name = _("Choice Scarf"),
        .index = ITEM_CHOICESCARF,
        .price = 200,
        .held_effect = ITEM_EFFECT_CHOICESCARF,
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

    //466. {STICKY BARB}
    {
        .name = _("Sticky Barb"),
        .index = ITEM_STICKYBARB,
        .price = 200,
        .held_effect = ITEM_EFFECT_STICKYBARB,
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

    //467. {POWER BRACER}
    {
        .name = _("Power Bracer"),
        .index = ITEM_POWERBRACER,
        .price = 3000,
        .held_effect = ITEM_EFFECT_MACHOBRACE,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000002
    },

    //468. {POWER BELT}
    {
        .name = _("Power Belt"),
        .index = ITEM_POWERBELT,
        .price = 3000,
        .held_effect = ITEM_EFFECT_MACHOBRACE,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000003
    },

    //469. {POWER LENS}
    {
        .name = _("Power Lens"),
        .index = ITEM_POWERLENS,
        .price = 3000,
        .held_effect = ITEM_EFFECT_MACHOBRACE,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000005
    },

    //470. {POWER BAND}
    {
        .name = _("Power Band"),
        .index = ITEM_POWERBAND,
        .price = 3000,
        .held_effect = ITEM_EFFECT_MACHOBRACE,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000006
    },

    //471. {POWER ANKLET}
    {
        .name = _("Power Anklet"),
        .index = ITEM_POWERANKLET,
        .price = 3000,
        .held_effect = ITEM_EFFECT_MACHOBRACE,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000004
    },

    //472. {POWER WEIGHT}
    {
        .name = _("Power Weight"),
        .index = ITEM_POWERWEIGHT,
        .price = 3000,
        .held_effect = ITEM_EFFECT_MACHOBRACE,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = POCKET_ITEMS,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000001
    },

    //473. {SHED SHELL}
    {
        .name = _("Shed Shell"),
        .index = ITEM_SHEDSHELL,
        .price = 100,
        .held_effect = ITEM_EFFECT_SHEDSHELL,
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

    //474. {BIG ROOT}
    {
        .name = _("Big Root"),
        .index = ITEM_BIGROOT,
        .price = 200,
        .held_effect = ITEM_EFFECT_BIGROOT,
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

    //475. {CHOICE SPECS}
    {
        .name = _("Choice Specs"),
        .index = ITEM_CHOICESPECS,
        .price = 200,
        .held_effect = ITEM_EFFECT_CHOICESPECS,
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

    //476. {0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xFF,0x00,0x00,0x00,0x00,0x00}
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

    //477. {FLAME PLATE}
    {
        .name = _("Flame Plate"),
        .index = ITEM_FLAMEPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000A
    },

    //478. {SPLASH PLATE}
    {
        .name = _("Splash Plate"),
        .index = ITEM_SPLASHPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000B
    },

    //479. {ZAP PLATE}
    {
        .name = _("Zap Plate"),
        .index = ITEM_ZAPPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000D
    },

    //480. {MEADOW PLATE}
    {
        .name = _("Meadow Plate"),
        .index = ITEM_MEADOWPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000C
    },

    //481. {ICICLE PLATE}
    {
        .name = _("Icicle Plate"),
        .index = ITEM_ICICLEPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000F
    },

    //482. {FIST PLATE}
    {
        .name = _("Fist Plate"),
        .index = ITEM_FISTPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000001
    },

    //483. {TOXIC PLATE}
    {
        .name = _("Toxic Plate"),
        .index = ITEM_TOXICPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000003
    },

    //484. {EARTH PLATE}
    {
        .name = _("Earth Plate"),
        .index = ITEM_EARTHPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000004
    },

    //485. {SKY PLATE}
    {
        .name = _("Sky Plate"),
        .index = ITEM_SKYPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000002
    },

    //486. {MIND PLATE}
    {
        .name = _("Mind Plate"),
        .index = ITEM_MINDPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x0000000E
    },

    //487. {INSECT PLATE}
    {
        .name = _("Insect Plate"),
        .index = ITEM_INSECTPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000006
    },

    //488. {STONE PLATE}
    {
        .name = _("Stone Plate"),
        .index = ITEM_STONEPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000005
    },

    //489. {SPOOKY PLATE}
    {
        .name = _("Spooky Plate"),
        .index = ITEM_SPOOKYPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000007
    },

    //490. {DRACO PLATE}
    {
        .name = _("Draco Plate"),
        .index = ITEM_DRACOPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000010
    },

    //491. {DREAD PLATE}
    {
        .name = _("Dread Plate"),
        .index = ITEM_DREADPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000011
    },

    //492. {IRON PLATE}
    {
        .name = _("Iron Plate"),
        .index = ITEM_IRONPLATE,
        .price = 1000,
        .held_effect = ITEM_EFFECT_PLATES,
        .held_effect_quality = NULL,
        .desc_pointer = (void *)0x00000000,
        .mystery_value = NULL,
        .pocket_no = 1,
        .type_of_item =  4,
        .field_usage_code = (void *)0x080FE821,
        .battle_usage = NULL,
        .battle_usage_code = NULL,
        .extra_param = 0x00000008
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
