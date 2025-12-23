#pragma once
#include <string>
#include "Piece.h"

class Square 
{
public:
	Square(int row, int col);
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
	Piece* piece;
};
