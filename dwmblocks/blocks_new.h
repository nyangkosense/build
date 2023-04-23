//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{"connection: ", "/home/void/.dwm/scripts/net", 1, 6},
	{"^c#a671ab^  ", "/home/void/.dwm/scripts/fs", 6, 3}, 
	{"^c#7D1CC2^  ", "/home/void/.dwm/scripts/memory", 6, 3 },
	{"^c#8C18CE^  ", "/home/void/.dwm/scripts/cpu", 6, 3},
	{"^c#8B21C2^  ", "/home/void/.dwm/scripts/kernel",			 0,		          15},
	{"^c#9923D9^  ", "/home/void/.dwm/scripts/upt",      20,            10},
	{"^c#AC28EB^  ", "echo $(date +\"%a, %B %d %l:%M%p\"| sed 's/  / /g')",			   60,		          0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 100;
#define CMDLENGTH		10000
