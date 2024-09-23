//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"   ", "sh ~/.bin/volstat",	5,		10},
	{"   ", "sh ~/.bin/getwifi",	5,		0},
	{"   ", "sh ~/.bin/cpustat",	5,		0},
	{"   ", "sh ~/.bin/ramstat",	30,		0},
	{"   ", "date '+%b %d '",					5,		0},

	{"   ", "date '+%I:%M %p '",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "|";
static unsigned int delimLen = 5;
