#pragma once
#include "Piece.h"

class Rook : public Piece
{
public:
    Rook(Color c, Position p) : Piece(c, p) {}
    bool isValidMove(Board& board, Position to) override;
    char getSymbol() const override;
};
