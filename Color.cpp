#include "Color.h"

// Constructor
Color::Color(const std::string& name, std::string player1, std::string player2)
{
    player1 = WHITE;
    player2 = BLACK;
    this->name = name;
    this->player1 = player1;
    this->player2 = player2;
}

// Destructor
Color::~Color()
{
}

const std::string& Color::getName() const
{
    return name;
}


