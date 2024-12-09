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

bool playerXWon() {
  if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
      (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
      (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
      (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
      (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
      (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
      (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
      (board[0][2] == 'X' && board[2][2] == 'X' && board[2][0] == 'X')) {
    return true;
  } else {
    return false;
  }
}

bool playerYWon() {
  if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
      (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
      (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
      (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
      (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
      (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
      (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
      (board[0][2] == 'O' && board[2][2] == 'O' && board[2][0] == 'O')) {
    return true;
  } else {
    return false;
  }
}

int main() {

  for (int i = 0; i < 9; i++) {
    displayBoard();
    playerInput();
    // check if any of the player won
    // If any play won, display the message break the loop
    // If i = 8 and none of the player has won, then it is a draw
    if (playerXWon()) {
      displayBoard();
      cout << "Player X Won";
      break;
    } else if (playerYWon()) {
      displayBoard();
      cout << "Player Y Won";
      break;
    } else if (i == 8) {
      displayBoard();
      cout << "Its a Draw";
    }
  }
}
