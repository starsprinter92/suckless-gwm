/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static const int user_bh = 20;               /* add an defined amount of pixels to the bar height */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static unsigned int border_width = 3;
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetbrainsMono NF:size=12"
};
static const char *prompt      = "apps";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
            	/*     fg         bg       */
	[SchemeNorm] = { "#cdd6f4", "#11111b" },
	[SchemeSel] = { "#11111b", "#89b4fa" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
