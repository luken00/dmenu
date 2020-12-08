/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

static char titlefgcolor[] = "#555555";
static char titlebgcolor[] = "#222222";
static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[] = "#eeeeee";
static char selbgcolor[] = "#005577";
static char outfgcolor[] = "#000000";
static char outbgcolor[] = "#00ffff";


static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static char *colors[][2] = {
	/*     fg         bg       */
	[SchemeTitle] = {titlefgcolor, titlebgcolor},
	[SchemeNorm] = {normfgcolor, normbgcolor},
	[SchemeSel] = {selfgcolor, selbgcolor},
	[SchemeOut] = {outfgcolor, outbgcolor},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static int __padding = 8;
static unsigned int border_width = 5;


/* Xresources preferences to load at startup */
ResourcePref resources[] = {
	{ "titlefgcolor", STRING, &titlefgcolor },
	{ "titlebgcolor", STRING, &titlebgcolor },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor", STRING, &selfgcolor },
	{ "selbgcolor", STRING, &selbgcolor },
	{ "outfgcolor", STRING, &outfgcolor },
	{ "outbgcolor", STRING, &outbgcolor },
	{ "padding", INTEGER, &__padding },
	{ "borderwidth", INTEGER, &border_width }
};