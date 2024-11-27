#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Piece.h"

class Piece;

class Board
{
public:
    Board();
    void display() const;

private:
    std::vector<std::vector<std::shared_ptr<Piece>>> grid;
    void initialize();
};

#endif