#include "Game.h"

void Chess::Game::play() {
    while (not is_game_over()) {
        curr_player_takes_turn();
        switch_player();
    }
    declare_results();
}

bool Chess::Game::is_game_over() const {
    return is_checkmate() or is_draw();
}

void Chess::Game::curr_player_takes_turn() {
    Move move = curr_player.get_move();
    move.execute();
    update_piece_information();
}

void Chess::Game::switch_player(int curr_player) {
    curr_player = (curr_player + 1) % active_players.size();
}

void Chess::Game::declare_results() const {

}

bool Chess::Game::is_checkmate() const {

}

bool Chess::Game::is_draw() const {
    return is_stalemate() or insufficient_material();
}

bool Chess::Game::is_stalemate() const {

}

bool Chess::Game::insufficient_material() const {

}