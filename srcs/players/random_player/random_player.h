#ifndef RANDOMPLAYER_H
#define RANDOMPLAYER_H

//libs includes
#include <vector>
#include <random>
#include <utility>
#include <sys/time.h>

//project includes
// #include "board.h"
// #include "tile.h"
// #include "move.h"
#include "../player.h"
#include "../../header_files/bitboard.h"
#include "../../header_files/utility.h"

class Random_Player : public Player {
  private:
    //enum movetype {fwd, ffwd, capt, captpass}
    std::vector <Move> get_all_possible_moves(std::vector<unsigned long long> move_ll);
    template<typename T>
    T random_element(std::vector<T> & v);
    int random_int(int min, int max);
  public:
    Random_Player(tile color);
    Move get_move(Board board);
    ~Random_Player() {
        //empty
    }
};

#endif