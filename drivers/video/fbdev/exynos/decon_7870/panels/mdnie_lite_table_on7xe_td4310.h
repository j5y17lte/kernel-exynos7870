#ifndef __MDNIE_TABLE_TD4310_H__
#define __MDNIE_TABLE_TD4310_H__

/* 2017.12.21 */

static inline int get_hbm_index(int idx)
{
	int i = 0;
	int idx_list[] = {
		20000	/* idx < 20000: HBM_OFF */
				/* idx >= 20000: HBM_ON */
	};

	while (i < ARRAY_SIZE(idx_list)) {
		if (idx < idx_list[i])
			break;
		i++;
	}

	return i;
}

static unsigned char UI_1[] = {
	0xC7,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
};

static unsigned char UI_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
};

static unsigned char UI_3[] = {
	0x55,
	0x00,
};

static unsigned char VIDEO_1[] = {
	0xC7,
	0x00,
	0x07,
	0x0D,
	0x15,
	0x22,
	0x31,
	0x50,
	0x66,
	0x76,
	0x88,
	0x3C,
	0x4C,
	0x60,
	0x7D,
	0x84,
	0x95,
	0x9D,
	0xA5,
	0xB2,
	0x00,
	0x07,
	0x0D,
	0x15,
	0x22,
	0x31,
	0x50,
	0x66,
	0x76,
	0x88,
	0x3C,
	0x4C,
	0x60,
	0x7D,
	0x84,
	0x95,
	0x9D,
	0xA5,
	0xB2,
};

static unsigned char VIDEO_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
};

static unsigned char VIDEO_3[] = {
	0x55,
	0x83,
};

static unsigned char CAMERA_1[] = {
	0xC7,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
};

static unsigned char CAMERA_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
};

static unsigned char CAMERA_3[] = {
	0x55,
	0x83,
};

static unsigned char EBOOK_1[] = {
	0xC7,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
};

static unsigned char EBOOK_2[] = {
	0xC8,
	0x03,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFE,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xC2,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x9A,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFE,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xC2,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x9A,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFE,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xC2,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x9A,
};

static unsigned char EBOOK_3[] = {
	0x55,
	0x00,
};

static unsigned char LOCAL_CE_1[] = {
	0xC7,
	0x00,
	0x0B,
	0x12,
	0x1F,
	0x2C,
	0x36,
	0x4E,
	0x5F,
	0x6E,
	0x7B,
	0x2F,
	0x3B,
	0x4A,
	0x5D,
	0x66,
	0x72,
	0x82,
	0x91,
	0xB2,
	0x00,
	0x0B,
	0x12,
	0x1F,
	0x2C,
	0x36,
	0x4E,
	0x5F,
	0x6E,
	0x7B,
	0x2F,
	0x3B,
	0x4A,
	0x5D,
	0x66,
	0x72,
	0x82,
	0x91,
	0xB2,
};

static unsigned char LOCAL_CE_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
};

static unsigned char LOCAL_CE_3[] = {
	0x55,
	0x00,
};

static unsigned char GAME_1[] = {
	0xC7,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
	0x00,
	0x0E,
	0x18,
	0x27,
	0x36,
	0x41,
	0x5A,
	0x6C,
	0x7B,
	0x89,
	0x3D,
	0x4A,
	0x5B,
	0x72,
	0x7C,
	0x89,
	0x99,
	0xA5,
	0xB2,
};

static unsigned char GAME_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
};

static unsigned char GAME_3[] = {
	0x55,
	0x83,
};

#define MDNIE_SET(id)	\
{							\
	.name		= #id,				\
	.update_flag	= {1, 2, 3},			\
	.seq		= {				\
		{	.cmd = id##_1,		.len = ARRAY_SIZE(id##_1),		.sleep = 0,},	\
		{	.cmd = id##_2,		.len = ARRAY_SIZE(id##_2),		.sleep = 0,},	\
		{	.cmd = id##_3,		.len = ARRAY_SIZE(id##_3),		.sleep = 0,},	\
	}	\
}

static struct mdnie_table bypass_table[BYPASS_MAX] = {
	[BYPASS_ON] = MDNIE_SET(UI)
};

static struct mdnie_table accessibility_table[ACCESSIBILITY_MAX] = {
	[NEGATIVE] = MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI)
};

static struct mdnie_table hbm_table[HBM_MAX] = {
	[HBM_ON] = MDNIE_SET(LOCAL_CE)
};

static struct mdnie_table dmb_table[MODE_MAX] = {
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI)
};

static struct mdnie_table main_table[SCENARIO_MAX][MODE_MAX] = {
	{
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(EBOOK),
	},
	[CAMERA_MODE] = {
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(EBOOK),
	},
	[GALLERY_MODE] = {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME)
	}, {
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME)
	}, {
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME),
		MDNIE_SET(GAME)
	}
};

#undef MDNIE_SET

static struct mdnie_tune tune_info = {
	.bypass_table = bypass_table,
	.accessibility_table = accessibility_table,
	.hbm_table = hbm_table,
	.dmb_table = dmb_table,
	.main_table = main_table,
	.get_hbm_index = get_hbm_index,
};
#endif