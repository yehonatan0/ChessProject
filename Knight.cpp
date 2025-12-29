#include "Knight.h"
#include <cstdlib>

bool Knight::isValidMove(Board&, Position to)
{
    int dr = abs(pos.row - to.row);
    int dc = abs(pos.col - to.col);

    return (dr == 2 && dc == 1) || (dr == 1 && dc == 2);
}

char Knight::getSymbol() const
{
    return (color == WHITE) ? 'N' : 'n';
}
