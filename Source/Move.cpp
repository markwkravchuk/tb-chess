#include "Move.h"

void Chess::Move::execute() {
    // Actually move the piece
}

Chess::Piece Chess::Move::get_moved_piece() {
    return moved_piece;
}

Chess::Piece Chess::Move::get_taken_piece() {
    return taken_piece;
}