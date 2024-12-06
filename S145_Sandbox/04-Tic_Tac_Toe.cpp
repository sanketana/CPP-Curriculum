// Step 1 - Displaying the Board
// Step 2 - Collecting player input
// Step 3 - Alternating turns
// Checking for Winning conditions
#include <iostream>
using namespace std;

char board[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice;
char turn = 'X';

void displayBoard() {
  cout << "\n\nTic-Tac-Toe Board: \n\n";
  cout << "Player 1 [X] - Player 2 [0] \n\n";
  cout << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
  cout << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
  cout << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;
}

void playerInput() {
  int row, col;
  cout << "Choose a number: ";
  cin >> choice;

  switch (choice) {
  case 1:
    row = 0;
    col = 0;
    break;
  case 2:
    row = 0;
    col = 1;
    break;
  case 3:
    row = 0;
    col = 2;
    break;
  case 4:
    row = 1;
    col = 0;
    break;
  case 5:
    row = 1;
    col = 1;
    break;
  case 6:
    row = 1;
    col = 2;
    break;
  case 7:
    row = 2;
    col = 0;
    break;
  case 8:
    row = 2;
    col = 1;
    break;
  case 9:
    row = 2;
    col = 2;
    break;
  }
  board[row][col] = turn;
  turn = (turn == 'X') ? 'O' : 'X';
}

// Our function will return X if X won, O if O won, D if draw
char checkGameStatus() {
  // figure out later
  return 'N';
}

int main() {
  char status = checkGameStatus();
  while (status != 'X' && status != 'O' && status != 'D') {
    displayBoard();
    playerInput();
  }

  switch (status) {
  case 'X':
    cout << "X Won";
    break;
  case 'O':
    cout << "O Won";
    break;
  case 'D':
    cout << "Draw";
    break;
  case 'N':
    break;
  }
}
