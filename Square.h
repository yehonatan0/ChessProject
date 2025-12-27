#pragma once
#include <string>
#include "Position.h"
#include "Piece.h"
#include "board.h"

#define ROW 8
#define COL 8

class Square 
{
public:
	Square(const Position& pos);
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
