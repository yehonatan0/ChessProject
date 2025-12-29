#pragma once
#include <string>


#define WHITE "white"
#define BLACK "black"

class Color
{
public:
	Color(std::string white, std::string black);
	~Color();

private:
	std::string player1;
	std::string player2;
};