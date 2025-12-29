#include "Rook.h"
#include "Board.h"

bool Rook::isValidMove(Board& board, Position to)
{
    if (pos.row != to.row && pos.col != to.col)
        return false;

    return board.isClearStraight(pos, to);
}

char Rook::getSymbol() const
{
    return (color == WHITE) ? 'R' : 'r';
}
