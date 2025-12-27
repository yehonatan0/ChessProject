#include "Position.h"
#include <string>
#include <stdexcept>


Position::Position(int r, int c) : row(r), col(c) 
{
    if (r < 0 || r >= 8 || c < 0 || c >= 8)
        throw std::out_of_range("Invalid board position");
}

Position Position::fromString(const std::string& s)
{
    int col = s[0] - 'A'; 
    int row = s[1] - '1'; 
    return Position(row, col);
}
