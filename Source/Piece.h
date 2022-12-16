#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

namespace Chess {
    class Piece {
        public:
            Piece();
            void set_location(const Move& move);
            void set_possible_squares();
            void remove_from_game();
        private:
            std::pair<int, int> location;
    };
}

#endif