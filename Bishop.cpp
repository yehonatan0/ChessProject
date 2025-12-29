#include "Bishop.h"
#include "Board.h"
#include <cstdlib>

bool Bishop::isValidMove(Board& board, Position to)
{
    if (abs(pos.row - to.row) != abs(pos.col - to.col))
        return false;

    return board.isClearDiagonal(pos, to);
}

char Bishop::getSymbol() const
{
    return (color == WHITE) ? 'B' : 'b';
}
