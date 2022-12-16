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
    // Get a valid move from a player, execute it, then update
    // each piece in the game
    Move move;
    do {
        move = get_curr_player().get_move();
    } while (move.is_invalid());
    move.execute();
    update_piece_information(move);
}

void Chess::Game::switch_player() {
    curr_player = (get_curr_player() + 1) % active_players.size();
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

void Chess::Game::update_piece_information(const Move& move) {
    // First, update the location of the piece that was moved
    move.get_moved_piece().set_location(move);

    // If the move caused another piece to be taken, delete the taken piece;
    if (move.took_a_piece()) {
        move.get_taken_piece().remove_from_game();
    }

    // For each piece of all of the players, examine the current game state
    // and update the possible squares that piece could move to
    for (auto player : active_players) { 
        for (auto piece : player.get_pieces()) {
            piece.set_possible_squares();
        }
    }
}

int Chess::Game::get_curr_player() {
    return curr_player;
}