// Lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// test-gabe
#include <iostream>
#include <string.h>
using namespace std;

void isSolvable(char* v[]);

int main(int argc, char* argv[])
{
    isSolvable(argv);

 
}

void isSolvable( char* v[]) {
    int numInversions = 0;
    string board = v[1];

    for (int i = 1; i < 9 ; i++) {
        if (board[i] > board[i+1]) {
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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
