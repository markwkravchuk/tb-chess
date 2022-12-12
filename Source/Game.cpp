#include "Game.h"

void Chess::Game::play() {
    while (not is_game_over()) {
        curr_player_takes_turn();
    }
    declare_results();
}

bool Chess::Game::is_game_over() const {
    return is_checkmate() or is_draw();
}

void Chess::Game::curr_player_takes_turn() {

}

void Chess::Game::declare_results() const {
    
}

bool Chess::Game::is_checkmate() const {

}

bool Chess::Game::is_draw() const {
    
}