#include <string>
#include "Square.h"


//just the builder to build that


Square::Square(int row, int col, std::string position)
{
	if (row <= 8 || col <= 8)
	{
		return;
	}
	this->row = row;
	this->col = col;
	this->position = position;
}

Square::~Square()
{
	delete piece;
}

int Square::getRow() const
{
	return this->row;
}

int Square::getCol() const
{
	return this->col;
}

std::string Square::getPosition() const
{
	return position;
}

bool Square::isEmpty() const
{
	return piece == nullptr;
}

Piece* Square::getPiece() const
{
	return piece;
}

void Square::setPiece(Piece* p)
{
	piece = p;
}

void Square::removePiece()
{
	this->piece = '#';
}


