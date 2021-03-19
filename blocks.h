static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ " ",		"cpu.block",		2,			8 },
	{ " ",		"memory.block",		2,			9 },
	{ " ",		"keymap.block",		0,			2 },
	{ "",		"volume.block",		0,			1 }, /* no icon because it's calculated in volume.block */
	{ "",		"battery.block",	60,			6 }, /* ^^^ same here but battery.block */
	{ " ",		"date.block",		1,			7 },
};

static char delim[] = " | "; /* NULL character means no delimeter */
static unsigned int delimLen = 5;
