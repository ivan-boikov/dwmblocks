//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	//{"",	"$HOME/.local/bin/statusbar/sb-tasks",	10,	26},
	{"",	"$HOME/.local/bin/statusbar/sb-music",	0,	11},
	//{"",	"$HOME/.local/bin/statusbar/sb-pacpackages",	0,	8},
	//{"",	"$HOME/.local/bin/statusbar/sb-news",		0,	6},
	// {"",	"$HOME/.local/bin/statusbar/sb-torrent",	20,	7},
	/* {"",	"$HOME/.local/bin/statusbar/sb-moonphase",	18000,	17}, */
	// {"",	"$HOME/.local/bin/statusbar/sb-forecast",	18000,	5},
	{"",	"$HOME/.local/bin/statusbar/sb-volume",	0,	10},
	{"",	"$HOME/.local/bin/statusbar/sb-mailbox",	60,	12},
	{"",	"$HOME/.local/bin/statusbar/sb-battery",	5,	3},
    {"",	"$HOME/.local/bin/statusbar/sb-internet",	5,	4},
	//{"",	"$HOME/.local/bin/statusbar/sb-iplocate",	2,	4},
	{"",	"$HOME/.local/bin/statusbar/sb-nettraf",	1,	16},
    //{"",   "$HOME/.local/bin/statusbar/sb-kbselect", 0, 30},
	{"",	"$HOME/.local/bin/statusbar/sb-cpu",		5,	18},
	{"",	"$HOME/.local/bin/statusbar/sb-cpubars",		5,	18},
	{"",	"$HOME/.local/bin/statusbar/sb-memory",	5,	14},
	{"",	"$HOME/.local/bin/statusbar/sb-clock",	1,	1},
	//{"",	"$HOME/.local/bin/statusbar/sb-help-icon",	0,	15},
};

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 3;
