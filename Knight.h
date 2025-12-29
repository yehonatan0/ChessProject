#pragma once
#include "Piece.h"

class Knight : public Piece
{
public:
    Knight(Color c, Position p) : Piece(c, p) {}
    bool isValidMove(Board&, Position to) override;
    char getSymbol() const override;
};
