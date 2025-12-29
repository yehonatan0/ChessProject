#include "King.h"
#include <cstdlib>

bool King::isValidMove(Board&, Position to)
{
    int dr = abs(pos.row - to.row);
    int dc = abs(pos.col - to.col);

    return dr <= 1 && dc <= 1;
}

char King::getSymbol() const
{
    return (color == WHITE) ? 'K' : 'k';
}
