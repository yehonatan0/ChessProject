#include "board.h"
#include <string>
#include <stdexcept>


Board::Board()
{
	for (int r = 0; r < ROW; r++)
		for (int c = 0; c < COL; c++)
			square[r][c] = Square(Position(r, c));
}

Board::~Board()
{
}

Square& Board::getSquare(const Position& pos)
{
	if (pos.row < 0 || pos.row >= ROW || pos.col < 0 || pos.col >= COL)
	{
		throw std::out_of_range("Position out of board");
	}
	return this->square[pos.row][pos.col];
}

Piece* Board::getPiece(const Position& pos) const
{
	return square[pos.row][pos.col].getPiece();
}

void Board::applyMove(const Move& move)
{
	Square& src = getSquare(move.getFrom());
	Square& dst = getSquare(move.getTo());

	if (src.isEmpty())
	{
		throw std::runtime_error("You choose an empty square");
	}
	if (dst.getPiece() != '#')
	{
		throw std::runtime_error("There is alredy a piace there");
	}

	if (!dst.isEmpty())
	{
		delete dst.getPiece(); 
	}
	dst.setPiece(src.getPiece());
	src.setPiece(nullptr);
}

bool Board::isClearStraight(Position from, Position to)
{
    if (from.row == to.row)
    {
        int step = (to.col > from.col) ? 1 : -1;
        for (int c = from.col + step; c != to.col; c += step)
            if (board[from.row][c].getPiece())
                return false;
    }
    else
    {
        int step = (to.row > from.row) ? 1 : -1;
        for (int r = from.row + step; r != to.row; r += step)
            if (board[r][from.col].getPiece())
                return false;
    }
    return true;
}

bool Board::isClearDiagonal(Position from, Position to)
{
    int rStep = (to.row > from.row) ? 1 : -1;
    int cStep = (to.col > from.col) ? 1 : -1;

    int r = from.row + rStep;
    int c = from.col + cStep;

    while (r != to.row && c != to.col)
    {
        if (board[r][c].getPiece())
            return false;
        r += rStep;
        c += cStep;
    }
    return true;
}

