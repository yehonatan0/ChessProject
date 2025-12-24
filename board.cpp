#include "board.h"
#include <string>

board::board()
{
	this->square[ROW][COL];
}

board::~board()
{
}

void board::getPiece(std::string position)
{
	int i = 0, int j = 0;
	for (size_t i = 0; i < ROW; i++)
	{
		for (size_t j = 0; j < COL; j++)
		{
			this->square[i][j] = getposition;
			

		}
	}
	
}

