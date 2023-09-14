static const char *colorname[NUMCOLS] = {
	[BACKGROUND] 	= 	"black", 	/* after initialization */
	[INIT] 			= 	"black", 	/* after initialization */
	[INPUT] 		= 	"grey", 	/* during input */
	[FAILED] 		= 	"red", 		/* wrong password */
	[CAPS] 			= 	"white",	/* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 5;

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 40;

/* grid width and height for right center alignment*/
static const int logow = 11; // lock
static const int logoh = 13; // lock
/* static const int logow = 12; // dwm */
/* static const int logoh = 6; // dwm */

static XRectangle rectangles[12] = {
	/* x, y, 	w, h */

	// lock
	{ 4, 0, 	3, 2 },
	{ 3, 1, 	5, 1 },
	{ 2, 2, 	2, 3 },
	{ 7, 2, 	2, 3 },

	{ 1, 5, 	9, 1 },
	{ 1, 12, 	9, 1 },

	{ 0, 6, 	4, 6 },
	{ 7, 6, 	4, 6 },

	{ 4, 6, 	3, 1 },
	{ 4, 10, 	3, 2 },
	{ 4, 9, 	1, 1 },
	{ 6, 9, 	1, 1 },

	// dwm
	/* { 0,	3,	1,	3 }, */
	/* { 1,	3,	2,	1 }, */
	/* { 0,	5,	8,	1 }, */
	/* { 3,	0,	1,	5 }, */
	/* { 5,	3,	1,	2 }, */
	/* { 7,	3,	1,	2 }, */
	/* { 8,	3,	4,	1 }, */
	/* { 9,	4,	1,	2 }, */
	/* { 11,	4,	1,	2 }, */

};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "colorBackground",	STRING,  &colorname[BACKGROUND] },
		{ "colorInit", 			STRING,  &colorname[INIT] },
		{ "colorInput",     	STRING,  &colorname[INPUT] },
		{ "colorFailed", 	    STRING,  &colorname[FAILED] },
		{ "colorCaps",  	    STRING,  &colorname[CAPS] },
};
