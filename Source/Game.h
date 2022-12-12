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
    };
}
#endif