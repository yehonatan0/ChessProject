#pragma once
#include <string>
#include "Piece.h"
#include "board.h"
#include "Position.h"

class Square 
{
public:
	Square(int row, int col, std::string position);
	~Square();
	int getRow() const;
	int getCol() const;
	std::string getPosition() const;
	bool isEmpty() const;
	Piece* getPiece() const;
	void setPiece(Piece* piece);
	void removePiece();
private:
	int row; // 0-7 for 'a'-'h'
	int col; // 0-7 for '1'-'8'
	std::string position;
	Piece* piece;
};
