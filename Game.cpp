#include "Game.h"
#include <stdexcept>

Game::Game(): turn(Color(WHITE, BLACK))
{
}

Game::~Game()
{
}

Color Game::getTurn() const
{
    return turn;
}

bool Game::makeMove(const Move& move)
{
    Square& from = board.getSquare(move.getFrom());
    Piece* piece = from.getPiece();

    
    if (!piece)
    {
        throw std::runtime_error("No piece at source");
    }
   
    if (piece->getColor() != turn)
    {
        throw std::runtime_error("Not your turn");
    }
   
    if (!piece->isValidMove(board, move.getFrom(), move.getTo()))
    {
        return false;
    }
 
    board.applyMove(move);

  
    if (turn == Color::WHITE)
    {
        turn = Color::BLACK;
    }
    else
    {
        turn = Color::WHITE;
    }

    return true;
}


bool Game::isCheckmate() const
{
   
    return false;
}
