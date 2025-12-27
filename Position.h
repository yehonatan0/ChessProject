#pragma once
#include <string>
#include <stdexcept>

class Position
{
public:
    int row; 
    int col; 

public:

    Position(int r, int c);
    static Position fromString(const std::string& s);
};
