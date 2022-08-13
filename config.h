/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const unsigned int gappih    = 20;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 20;       /* vert inner gap between windows */
static const unsigned int gappoh    = 20;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 20;       /* vert outer gap between windows and screen edge */
static const int smartgaps          = 0;        /* 1 means no outer gap when there is only one window */
static const int swallowfloating    = 1;        /* 1 means swallow floating windows by default */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const int vertpad            = 0;       /* vertical padding of bar */
static const int sidepad            = 0;       /* horizontal padding of bar */
// static const char *fonts[] = { "Fira Code:size=11", "JoyPixels:pixelsize=12:antialias=true:autohint=true" };
static const char *fonts[] = { "ComicCode-Bold:size=8.5", "JoyPixels:pixelsize=12:antialias=true:autohint=true" };
static const char dmenufont[]       = "monospace:size=10.8";
static const unsigned int baralpha = 0xff;
static const unsigned int borderalpha = OPAQUE;
static char normbgcolor[]           = "#222222";
static char normbordercolor[]       = "#333333";
static char normfgcolor[]           = "#bbbbbb";
static char selfgcolor[]            = "#eeeeee";
static char selbordercolor[]        = "#005577";
static char selbgcolor[]            = "#005577";
static char *colors[][3] = {
       /*               fg           bg           border   */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
static const unsigned int alphas[][3] = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

// #define USE_XRDB
/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5" };
static const char *tagsalt[] = { "1", "2", "3", "4", "5" };

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	*/
	/* class                    instance    title                   tags mask     iscentered,        isfloating   monitor */
    { "Nm-connection-editor",   NULL,       NULL,                   0,            0,                1,           -1 },
    { "firefox",                NULL,       NULL,                   1<<1,         0,                0,           -1 },
    { "Google-chrome",          NULL,       NULL,                   1<<1,         0,                0,           -1 },
    { "Firefox",                NULL,       "Firefox Preferences",  0,            0,                1,           -1 },
    { "Nightly",                NULL,       NULL,                   1<<1,         0,                0,           -1 },
    { "TelegramDesktop",        NULL,       NULL,                   1<<2,         0,                0,           -1 },
    { "KotatogramDesktop",      NULL,       NULL,                   1<<2,         0,                0,           -1 },
    { "Signal",                 NULL,       NULL,                   1<<2,         0,                0,           -1 },
    { "Zeal",                   NULL,       NULL,                   1<<3,         0,                0,           -1 },
    { "Anki",                   NULL,       NULL,                   1<<3,         0,                0,           -1 },
    { "Darktable",              NULL,       NULL,                   1<<3,         0,                0,           -1 },
    { "Surf",                   NULL,       NULL,                   1<<3,         0,                0,           -1 },
    { "Notion",                 NULL,       NULL,                   1<<4,         0,                0,           -1 },
    { "notion-app",             NULL,       NULL,                   1<<4,         0,                0,           -1 },
    { "Spotify",                NULL,       NULL,                   1<<4,         0,                0,           -1 },
    { "transmission",           NULL,       NULL,                   1<<4,         0,                0,           -1 },
    { "VirtualBox Machine",     NULL,       NULL,                   1<<4,         0,                0,           -1 },
    { "VirtualBox Manager",     NULL,       NULL,                   1<<4,         0,                0,           -1 },
    { "jetbrains-studio",       NULL,       NULL,                   1<<4,         0,                0,           -1 },
    { NULL,                     NULL,       "VP",                   1<<4,         1,                1,           -1 },
    { "rhythmbox",              NULL,       NULL,                   0,            1,                0,           -1 },
    { "QtPass",                 NULL,       NULL,                   0,            1,                1,           -1 },
    { "Rhythmbox",              NULL,       NULL,                   0,            1,                1,           -1 },
    { "Mavproxy",               NULL,       NULL,                   1<<3,         0,                1,           -1 },
    /* class                    instance    title                   tags mask     0,                isfloating  isterminal  noswallow  monitor */
    { "vlc",                    NULL,       NULL,                   1<<4,         0,                0,          0,          -1,        -1 },
    { "sxiv",                   NULL,       NULL,                   0,            0,                0,          0,          -1,        -1 },
    { "mpv",                    NULL,       NULL,                   0,            0,                0,          0,          -1,        -1 },
    { "St",                     NULL,       NULL,                   0,            0,                0,          1,          -1,        -1 },
    { "Chromium",               NULL,       NULL,                   1<<1,         0,                0,          -1,          1,        -1 },
    { "Brave-browser",          NULL,       NULL,                   1<<1,         0,                0,          -1,          -1,        -1 },
    { "QGroundControl",         NULL,       NULL,                   1<<3,         0,                0,          -1,          -1,        -1 },
    { "XTerm",                  NULL,       NULL,                   1<<4,         0,                0,          -1,          -1,        -1 },
    { "Cpupower-gui",           NULL,       NULL,                   0,            1,                1,          -1,          -1,        -1 },
    { NULL,                     "popup",    NULL,                   0,            1,                1,          1,          -1,        -1 },
    { "wmbubble",               NULL,       NULL,                   0,            1,                1,          1,          -1,        -1 },
    { "wmforecast",             NULL,       NULL,                   0,            1,                1,          1,          -1,        -1 },
    { "wmfishtime",             NULL,       NULL,                   0,            1,                1,          1,          -1,        -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */

#include "layouts.c"
#include "vanitygaps.c"
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },               /* first entry is default */
	{ "><>",      NULL },               /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "HHH",      grid },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
 	{ "[@]",      spiral },
 	{ "[\\]",     dwindle },
	{ "TTT",	  bstack },		        /* Master on top, slaves on bottom */
	{ "H[]",	  deck },			    /* Master on left, slaves in monocle-like mode on right */
	{ NULL,		  NULL },
};

/* key definitions */
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", selbordercolor, "-sf", selfgcolor, NULL };
// static const char *termcmd[]  = { "st", NULL };

static const char *layoutmenu_cmd = "layoutmenu.sh";

#include <X11/XF86keysym.h>
static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY|ShiftMask,             XK_j,      rotatestack,    {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,      rotatestack,    {.i = -1 } },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	// { MODKEY,                       XK_w,      incnmaster,     {.i = +1 } },
	// { MODKEY|ShiftMask,             XK_w,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_s,      incrgaps,       {.i = +15 } },
	{ MODKEY|ShiftMask,             XK_s,      incrgaps,       {.i = -15 } },
	{ MODKEY,                       XK_z,      incrgaps,       {.i = +10 } },
	{ MODKEY|ShiftMask,             XK_z,      incrgaps,       {.i = -10 } },
	{ MODKEY,                       XK_g,      togglegaps,     {0} },
	// { MODKEY|ShiftMask,             XK_t,      defaultgaps,    {0} },
#ifdef USE_XRDB
	{ MODKEY|ShiftMask,             XK_w,     xrdb,           {.v = NULL } },
#endif
	{ MODKEY,                       XK_space,  zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY|ShiftMask,             XK_Tab,    view,           {1} },
	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} }, // title
	{ MODKEY|ShiftMask,             XK_t,      setlayout,      {.v = &layouts[8]} }, // bstack
	{ MODKEY,                       XK_n,      setlayout,      {.v = &layouts[1]} }, // ?floating
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} }, // monocle
	{ MODKEY,                       XK_d,      setlayout,      {.v = &layouts[9]} }, // deck
	{ MODKEY,                       XK_i,      setlayout,      {.v = &layouts[4]} }, // centeredmaster
	{ MODKEY|ShiftMask,             XK_i,      setlayout,      {.v = &layouts[5]} }, // centeredfloatingmaster
	{ MODKEY,                       XK_y,      setlayout,      {.v = &layouts[6]} }, // spiral
	{ MODKEY|ShiftMask,             XK_y,      setlayout,      {.v = &layouts[7]} }, // dwindle
	// { MODKEY,                       XK_g,      setlayout,      {.v = &layouts[3]} }, // grid
	{ MODKEY,			XK_f,		togglefullscr,	{0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	// { MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_n,      togglealttag,   {0} },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	// TAGKEYS(                        XK_6,                      5)
	// TAGKEYS(                        XK_7,                      6)
	// TAGKEYS(                        XK_8,                      7)
	// TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
	{ MODKEY,                       XK_quoteleft, scratchpad_show,  {0} },
	{ MODKEY|ShiftMask,             XK_quoteleft, scratchpad_hide,  {0} },
	{ MODKEY,                       XK_equal, scratchpad_remove,{0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
    { ClkStatusText,        0,              Button1,        sigdwmblocks,   {.i = 1} },
	{ ClkStatusText,        0,              Button2,        sigdwmblocks,   {.i = 2} },
	{ ClkStatusText,        0,              Button3,        sigdwmblocks,   {.i = 3} },
    { ClkStatusText,        0,              Button4,        sigdwmblocks,   {.i = 4} },
	{ ClkStatusText,        0,              Button5,        sigdwmblocks,   {.i = 5} },
	{ ClkStatusText,        ShiftMask,      Button1,        sigdwmblocks,   {.i = 6} },
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        layoutmenu,     {0} },	
	{ ClkWinTitle,          0,              Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	// { ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY|ShiftMask,         Button1,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};
