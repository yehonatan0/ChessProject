#pragma once
#include "Piece.h"

class King : public Piece
{
public:
    King(Color c, Position p) : Piece(c, p) {}
    bool isValidMove(Board&, Position to) override;
    char getSymbol() const override;
};
