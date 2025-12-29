#include "Queen.h"
#include "Board.h"
#include <cmath>

Queen::Queen(Color c, Position p) : Piece(c, p) {}

bool Queen::isValidMove(Board& board, Position to) {
    bool isStraight = (pos.row == to.row || pos.col == to.col);
    bool isDiagonal = (std::abs(pos.row - to.row) == std::abs(pos.col - to.col));

    if (!isStraight && !isDiagonal)
        return false;

    if (isStraight)
        return board.isClearStraight(pos, to) && board.canMoveTo(pos, to, color);

    if (isDiagonal)
        return board.isClearDiagonal(pos, to) && board.canMoveTo(pos, to, color);

    return false;
}

char Queen::getSymbol() const { return color == WHITE ? 'Q' : 'q'; }
