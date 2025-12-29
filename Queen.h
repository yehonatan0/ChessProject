#pragma once
#include "Piece.h"

class Queen : public Piece
{
public:
    Queen(Color c, Position p) : Piece(c, p) {}

    bool isValidMove(Board& board, Position to) override;
    char getSymbol() const override;
};
