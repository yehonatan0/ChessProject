#include "Player.h"

Color::Color(std::string white, std::string black)
{
	white = WHITE;
	black = BLACK;
	this->player1 = white;
	this->player2 = black;
}

Color::~Color()
{
}
