#include <iostream>
#include <string.h>
using namespace std;

void isSolvable(char* v[]);

void BreadthFirstSearch( initalPuzzle)// in progress
{
    
    vector<BFSPuzzle> = { { initalPuzzle, -1 } };
    int i = 0;

    while (i < BFSPuzzle.size() && !isSolvable(BFSPuzzle[i].puzzle))
    {
        Puzzle currentPuzzle = BFSPuzzle[i].puzzle;
        int emptyTile = currentPuzzle.gapLocation;

        if (moveUP(emptyTile)) solvePuzzle(BFSPuzzle, i, UP(emptyTile));
        if (moveRIGHT(emptyTile)) solvePuzzle(BFSPuzzle, i, RIGHT(emptyTile));
        if (moveDOWN(emptyTile)) solvePuzzle(BFSPuzzle, i, DOWN(emptyTile));
        if (moveLEFT(emptyTile)) solvePuzzle(BFSPuzzle, i, LEFT(emptyTile));
        i++;
    }
}
void isSolvable(char* v[])
{
    int numInversions = 0;
    string board = v[1];

    for (int i = 1; i < 9; i++) {
        if (board[i] > board[i + 1]) {
            numInversions++;
        }
    }
    if ((numInversions % 2) >= 1) {
        cout << "Not Solvable" << endl;
    }
    else if ((numInversions % 2) == 0) {
        cout << "Solvable" << endl;
    }
    else {
        cout << "No valid input" << endl;
    }
}
    
int main(int argc, char* argv[]) 
{
        isSolvable(argv);
}