//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"$HOME/.local/bin/sb-music",	0,	11},
	{"",	"$HOME/.local/bin/sb-volume",	0,	10},
	{"",	"$HOME/.local/bin/sb-mailbox",	60,	12},
	{"",	"$HOME/.local/bin/sb-battery",	5,	3},
    {"",	"$HOME/.local/bin/sb-internet",	5,	4},
	//{"",	"$HOME/.local/bin/sb-iplocate",	2,	4},
	{"",	"$HOME/.local/bin/sb-nettraf",	1,	16},
	{"",	"$HOME/.local/bin/sb-cpu",		5,	18},
	{"",	"$HOME/.local/bin/sb-cpubars",		5,	18},
	{"",	"$HOME/.local/bin/sb-memory",	5,	14},
	{"",	"$HOME/.local/bin/sb-clock",	1,	1},
};

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 3;
