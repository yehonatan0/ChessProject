#include "board.h"
#include <string>


Board::Board()
{
	this->square[ROW][COL];
}

Board::~Board()
{
}

Piece* Board::getPiece(const Position& pos) const
{
	return squares[pos.row][pos.col].getPiece();
}

