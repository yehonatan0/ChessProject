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

void Board::movePiece(const Position& from, const Position& to)
{
	Square& src = getSquare(from);
	Square& dst = getSquare(to);

	if (src.isEmpty())
	{
		throw std::runtime_error("You choose an empty square");
	}

	if (!dst.isEmpty())
	{
		delete dst.getPiece(); 
	}
	dst.setPiece(src.getPiece());
	src.setPiece(nullptr);
}

