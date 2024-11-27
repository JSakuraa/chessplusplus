#ifndef PIECE_H
#define PIECE_H

#include <string>

class Piece
{
public:
    Piece(const std::string &color, char type) : color(color), type(type) {}
    char getType() const { return type; }

private:
    std::string color;
    char type;
};

#endif