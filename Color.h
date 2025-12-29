#pragma once
#include <string>

#define WHITE "white"
#define BLACK "black"

class Color
{
public:
    Color(const std::string& name, std::string player1, std::string player2);
    ~Color();

    const std::string& getName() const;
    bool isWhite() const;
    bool isBlack() const;

private:
    std::string name;
    std::string player1;
    std:: string player2;
};
