/* user and group to drop privileges to */
//static const char *user  = "";
static const char *group = "slock";

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
static const int logosize = 50;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

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
