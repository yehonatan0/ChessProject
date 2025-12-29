#include "Pawn.h"
#include "Board.h"
#include <cstdlib>

bool Pawn::isValidMove(Board& board, Position to)
{
    int dir = (color == WHITE) ? -1 : 1;

    if (to.col == pos.col &&
        to.row == pos.row + dir &&
        board.getPiece(to) == nullptr)
        return true;

    if (abs(to.col - pos.col) == 1 &&
        to.row == pos.row + dir &&
        board.getPiece(to) &&
        board.getPiece(to)->getColor() != color)
        return true;

    return false;
}

char Pawn::getSymbol() const
{
    return (color == WHITE) ? 'P' : 'p';
}
