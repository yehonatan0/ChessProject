#pragma once
#include "Position.h"

enum Color { WHITE, BLACK };

class Board;

class Piece
{
protected:
    Color color;
    Position pos;

public:
    Piece(Color c, Position p);
    virtual ~Piece() {}

    Color getColor() const;
    Position getPosition() const;
    void setPosition(Position p);

    virtual bool isValidMove(Board& board, Position to) = 0;
    virtual char getSymbol() const = 0;
};
