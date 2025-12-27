#pragma once
#include "Position.h"

class Move
{
public:
    Move(const Position& from, const Position& to);

    const Position& getFrom() const;
    const Position& getTo() const;

private:
    Position from;
    Position to;
};
