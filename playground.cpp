#include <iostream>
#include <string>

using namespace std;

class ChessPiece
{
public:
    string type;
    int color;
};

int main()
{
    ChessPiece whitePawn;
    whitePawn.type = "Pawn";
    whitePawn.color = 0;
    return 0;
}
