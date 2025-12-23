#include <string>
#include "Square.h"


//just the builder to build that
Square::Square(int row, int col)
{
	this->row = row;
	this->col = col;
}

Square::~Square()
{
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
	return ;
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
	piece = '#';
}


