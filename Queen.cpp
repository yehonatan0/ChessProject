#include "Queen.h"
#include "Board.h"
#include <cstdlib>

bool Queen::isValidMove(Board& board, Position to)
{
    if (pos.row == to.row || pos.col == to.col)
        return board.isClearStraight(pos, to);

    if (abs(pos.row - to.row) == abs(pos.col - to.col))
        return board.isClearDiagonal(pos, to);

    return false;
}

char Queen::getSymbol() const
{
    return (color == WHITE) ? 'Q' : 'q';
}
