//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{" ^c#d33682^", "", 6, 3}, 
	{"  ^c#839496^", "/home/sebastian/.dwm/scripts/fs", 6, 3}, 
	{" ^c#d33682^", "", 6, 3},   
	{"  ^c#839496^", "/home/sebastian/.dwm/scripts/memory", 6, 3 },
//	{"^c#e4e4e4^", "/home/sebastian/.dwm/scripts/cpu", 1, 3},
	{" ^c#d33682^", "", 6, 3},   //	
	{"  ^c#839496^", "/home/sebastian/.dwm/scripts/cpu_load",1,6},
	{" ^c#d33682^", "", 6, 3},     
        {"󰞀 ^c#839496^", "/home/sebastian/.dwm/scripts/ip.sh",1,3},
//	{"^c#e4e4e4^", "/home/sebastian/.dwm/scripts/kernel",100,         15},
	{" ^c#d33682^", "", 6, 3},   
  {"^c#839496^", "/home/sebastian/.dwm/scripts/wetter.sh",3600,0},
	{" ^c#d33682^", "", 6, 3},     
	{" ^c#839496^", "echo $(date +\"%a, %B %d %l:%M%p\"| sed 's/  / /g')",			   60,		          0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 150;
#define CMDLENGTH		10000
