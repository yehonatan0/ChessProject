#pragma once
#inculde "Square.h"
#include <string>

#define ROW 8
#define COL 8

class board 
{
private:
	square square[8][8];
	
public:
	board();
	~board();
	getPiece(std::string position): Piece;

};