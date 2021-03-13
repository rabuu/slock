/* user and group to drop privileges to */
//static const char *user  = "";
static const char *group = "slock";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     	/* after initialization */
	[INPUT] =  "grey", 		   	/* during input */
	[FAILED] = "red",   		/* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 5;

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "colorInit", 			STRING,  &colorname[INIT] },
		{ "colorInput",     	STRING,  &colorname[INPUT] },
		{ "colorFailed", 	    STRING,  &colorname[FAILED] },
};
