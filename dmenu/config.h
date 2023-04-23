/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 250;                    /* minimum width when centered */
static int instant = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
                           /*     fg         bg       */
    [SchemeNorm]          = { "#839496", "#002b36" },
    [SchemeSel]           = { "#839496", "#073642" },
//    [SchemeOut]           = { "#268bd2", "#00ffff" },
    [SchemeSelHighlight]  = { "#2aa198", "#002b36" },
    [SchemeNormHighlight] = { "#2aa198", "#002b36" },
};


/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 3;
static unsigned int columns    = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
