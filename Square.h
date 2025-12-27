#pragma once
#include <string>
#include "Position.h"
#include "Piece.h"
#include "board.h"


class Square 
{
public:
	Square(int row, int col, std::string position);
	~Square();

	int getRow() const;
	int getCol() const;
	const Position& getPosition() const;
	bool isEmpty() const;

	Piece* getPiece() const;
	void setPiece(Piece* piece);
	void removePiece();
private:
	Position position;
	Piece* piece;
};
