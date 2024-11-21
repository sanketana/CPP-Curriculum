#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 8x8 chessboard representation
    string chessboard[8][8] = {
        {"R", "N", "B", "Q", "K", "B", "N", "R"},
        {"P", "P", "P", "P", "P", "P", "P", "P"},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {"p", "p", "p", "p", "p", "p", "p", "p"},
        {"r", "n", "b", "q", "k", "b", "n", "r"}};

    // Display the chessboard
    cout << "Chessboard:\n";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << chessboard[i][j] << " ";
        }
        cout << endl;
    }

    // Locate a specific piece
    char piece;
    cout << "\nEnter the piece you want to find (e.g., 'K' for King, 'p' for pawn): ";
    cin >> piece;

    bool found = false;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j][0] == piece)
            {
                cout << "Found '" << piece << "' at position (" << i + 1 << ", " << j + 1 << ").\n";
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "Piece '" << piece << "' not found on the chessboard.\n";
    }

    return 0;
}