#ifndef CHESS_GAME_H
#define CHESS_GAME_H

namespace Chess {
    class Game {
        public:
            Game();
            void play();
        private:
            bool is_game_over() const;
            void curr_player_takes_turn();
            void declare_results() const;
            bool is_checkmate() const;
            bool is_draw() const;
            bool is_stalemate() const;
            bool insufficient_material() const;
    };
}
#endif