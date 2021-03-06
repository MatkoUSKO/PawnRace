#ifndef GEN_HEAD
#define GEN_HEAD

#define BOARDSIZE 8

#define BLACKROW 1
#define WHITEROW (BOARDSIZE - 2)

//these two are swapped according to ascii because of dark theme terminal usage
#define BLACKPAWN "\u2659"
#define WHITEPAWN "\u265F"

#define BLACKDIR 1
#define WHITEDIR (-1)

enum movetype {fwd, ffwd, capt_r, capt_l, captpass_r, captpass_l};

enum tile {none, white, black, en_pass};

#endif