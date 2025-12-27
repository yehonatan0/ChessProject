#include "Move.h"

Move::Move(const Position& from, const Position& to)
{
	this->from = from;
	this->to = to;
}

const Position& Move::getFrom() const
{
	return this->from;
}

const Position& Move::getTo() const
{
	return this->to;
}
