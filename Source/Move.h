#ifndef CHESS_MOVE_H
#define CHESS_MOVE_H

#include "Piece.h"

namespace Chess {
    class Move {
        public:
            Move();
            void execute();
            Piece get_moved_piece();
            Piece get_taken_piece();
            bool took_a_piece() const;
            bool is_invalid() const;

        private:
            Piece moved_piece;
            Piece taken_piece;
    };
}

#endif