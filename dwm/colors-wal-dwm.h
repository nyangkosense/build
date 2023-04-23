static const char norm_fg[] = "#839496";
static const char norm_bg[] = "#002b36";
static const char norm_border[] = "#002b36";

static const char sel_fg[] = "#839496";
static const char sel_bg[] = "#002b36";
static const char sel_border[] = "#002b36";

static const char urg_fg[] = "#bebaae";
static const char urg_bg[] = "#0e0e10";
static const char urg_border[] = "#0e0e10";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
