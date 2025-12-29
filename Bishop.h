#pragma once
#include "Piece.h"

class Bishop : public Piece
{
public:
    Bishop(Color c, Position p) : Piece(c, p) {}
    bool isValidMove(Board& board, Position to) override;
    char getSymbol() const override;
};
