#pragma once
#include <string>
#include "Position.h"
#include <stdexcept>
#include "Move.h"
#include "../../ChessProject/Square.h"


#define ROW 8
#define COL 8

class Board 
{
private:
	Square square[ROW][COL];
	
public:
	Board();
	~Board();
	Square& getSquare(const Position& pos);
	Piece* getPiece(const Position& pos) const;
	void setPiece(const Position& pos, Piece* piece);
	void applyMove(const Move& move);
	bool isClearDiagonal(Position from, Position to);
	bool isClearStraight(Position from, Position to);

	
	/*
	Position stringToPosition(const std::string& s)
	{
		int col = s[0] - 'A'; // 'A'–'H'
		int row = s[1] - '1'; // '1'–'8'
		return Position(row, col);
	}
	*/



};