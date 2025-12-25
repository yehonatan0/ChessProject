#pragma once
#include "Square.h"
#include <string>
#include "Piece.h"
#include "Position.h"


#define ROW 8
#define COL 8

class Board 
{
private:
	Square square[8][8];
	
public:
	Board();
	~Board();
	Square& getSquare(const Position& pos);
	Piece* getPiece(const Position& pos) const;
	void setPiece(const Position& pos, Piece* piece);
	
	/*
	Position stringToPosition(const std::string& s)
	{
		int col = s[0] - 'A'; // 'A'–'H'
		int row = s[1] - '1'; // '1'–'8'
		return Position(row, col);
	}
	*/



};