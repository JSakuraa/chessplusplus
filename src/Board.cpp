/* This is the class that will define the board for the chess game. */
#include "../include/Board.h"
#include "../include/Piece.h"

Board::Board()
{
    grid = std::vector<std::vector<std::shared_ptr<Piece>>>(8, std::vector<std::shared_ptr<Piece>>(8, nullptr));
    initialize();
};

void Board::initialize()
{
    // Pawns
    for (int i = 0; i < 8; i++)
    {
        grid[1][i] = std::make_shared<Piece>("Black", 'P');
        grid[6][i] = std::make_shared<Piece>("White", 'P');
    }
    // Rooks
    grid[0][0] = std::make_shared<Piece>("Black", 'R');
    grid[0][7] = std::make_shared<Piece>("Black", 'R');
    grid[7][0] = std::make_shared<Piece>("White", 'R');
    grid[7][7] = std::make_shared<Piece>("White", 'R');

    // Knights
    grid[0][1] = std::make_shared<Piece>("Black", 'N');
    grid[0][6] = std::make_shared<Piece>("Black", 'N');
    grid[7][1] = std::make_shared<Piece>("White", 'N');
    grid[7][6] = std::make_shared<Piece>("White", 'N');

    // Bishops
    grid[0][2] = std::make_shared<Piece>("Black", 'B');
    grid[0][5] = std::make_shared<Piece>("Black", 'B');
    grid[7][2] = std::make_shared<Piece>("White", 'B');
    grid[7][5] = std::make_shared<Piece>("White", 'B');

    // Kings
    grid[0][4] = std::make_shared<Piece>("Black", 'K');
    grid[7][4] = std::make_shared<Piece>("White", 'K');

    // Queens
    grid[0][3] = std::make_shared<Piece>("Black", 'Q');
    grid[7][3] = std::make_shared<Piece>("White", 'Q');
}

void Board::display() const
{
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (grid[row][col])
            {
                std::cout << grid[row][col]->getType() << " ";
            }
            else
            {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}