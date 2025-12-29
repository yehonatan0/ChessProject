#pragma once
#include "Board.h"
#include "Move.h"
#include "Color.h"

class Game
{
public:
    Game();
    ~Game();

    bool makeMove(const Move& move);
    bool isCheckmate() const;

    Color getTurn() const;

private:
    Board board;
    Color turn;
};
