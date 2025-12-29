#pragma once
#include "Piece.h"

class Pawn : public Piece
{
public:
    Pawn(Color c, Position p) : Piece(c, p) {}
    bool isValidMove(Board& board, Position to) override;
    char getSymbol() const override;
};
