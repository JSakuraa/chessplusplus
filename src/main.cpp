/* This is the main cpp file for the project. */
#include <iostream>

using namespace std;

class Piece {
public:
    string Type;
    string Color;
    bool Captured;

    Piece(string type, string color, bool captured) {
        Type = type;
        Color = color;
        Captured = captured;
    }

    void describe() {
        cout << "Type: " << Type << " \n";
        cout << "Color: " << Color << " \n";
        cout << "Captured: " << Captured << " \n";
    }
};

int main()
{
    Piece whitePawn("Pawn", "white", false);
    whitePawn.describe();

    Piece blackPawn("Pawn", "black", false);
    blackPawn.describe();

    return 0;
}