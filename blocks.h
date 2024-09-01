//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "dwmblocks_volume",					0,		10},
    {"", "dwmblocks_battery",                   60,     0 },
    {"", "date '+ %a, %d %b %Y  %I:%M %p '",	60,		0 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
