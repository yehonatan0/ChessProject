#include "Piece.h"

Piece::Piece(Color c, Position p) : color(c), pos(p) {}

Color Piece::getColor() const
{
    return color;
}

Position Piece::getPosition() const
{
    return pos;
}

void Piece::setPosition(Position p)
{
    pos = p;
}



