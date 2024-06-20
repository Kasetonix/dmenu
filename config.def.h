// DMENU - suckless's dynamic menu

static int topbar = 1;
static const unsigned int alpha = 0xcc; // Opacity in hex 0x00-0xFF (0xCC is 80%)
// static const unsigned int alpha = 0xff;

// static const char *prompt = "➜"; 
static const char *prompt = ""; 
static int draw_input = 1; // Should the input box exist or not 

// static const char *fonts[] = { "JetBrainsMono Nerd Font:size=16" };
static const char *fonts[] = { "Victor Mono:weight=SemiBold:size=16:antialias=true:autohint=true" };

// Colorschemes and opacity
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#5c6370", "#1e2228" },
	[SchemeSel] = { "#abb2bf", "#1e2228" },
	[SchemeOut] = { "#31343f", "#abb2bf" },
    [SchemeBd] = { "#abb2bf", "#1e2228" },
	[SchemeCaret] = { "#5c6370", "#1e2228" },
	// [SchemeNorm] = { "#abb2bf", "#262b32" },
	// [SchemeNorm] = { "#5c6370", "#262b32" },
	// [SchemeSel] = { "#abb2bf", "#262b32" },
    // [SchemeBd] = { "#abb2bf", "#5c6370" },
    // [SchemeBd] = { "#abb2bf", "#262b32" },
	// [SchemeCaret] = { "#5c6370", "#262b32" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

static unsigned int border_width = 10;

static unsigned int lines = 10;
static unsigned int lineheight = 40;
static unsigned int min_lineheight = 32;

static const char worddelimiters[] = " ";

static int centered = 1; 
static int min_width = 640; 

static int fuzzy = 1; // Fuzzy finding
