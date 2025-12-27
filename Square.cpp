#include <string>
#include "Square.h"



//just the builder to build that


Square::Square(const Position& pos)
	: position(pos), piece(nullptr)
{
	if (pos.row < 0 || pos.row >= ROW || pos.col < 0 || pos.col >= COL)
		throw std::out_of_range("Square out of board");
}
Square::~Square()
{
	delete piece;
}

int Square::getRow() const
{
	return this->position.row;
}

int Square::getCol() const
{
	return this->position.col;
}

const Position& Square::getPosition() const
{
	return this->position;
}

bool Square::isEmpty() const
{
	return piece == nullptr;
}

Piece* Square::getPiece() const
{
	return this->piece;
}

void Square::setPiece(Piece* p)
{
	piece = p;
}

void Square::removePiece()
{
	this->piece = '#';
}


