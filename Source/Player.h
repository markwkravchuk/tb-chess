#ifndef CHESS_PLAYER_H
#define CHESS_PLAYER_H

#include "Move.h"
#include "vector"

namespace Chess {
    class Player {
        public:
            Player();
            Move get_move();
            std::vector<Piece> get_pieces() const;
        private:
            std::vector<Piece> pieces;

    };
}

#endif