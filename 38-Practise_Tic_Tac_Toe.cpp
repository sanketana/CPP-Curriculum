#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

int choice;
int row, col;
char turn = 'X';
bool draw = false;

void displayBoard() {
  cout << "\n\nTic-Tac-Toe Board: \n\n";
  cout << "Player 1 [X] - Player 2 [O]\n\n";
  cout << "     |     |     \n";
  cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  "
       << board[0][2] << " \n";
  cout << "_____|_____|_____\n";
  cout << "     |     |     \n";
  cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  "
       << board[1][2] << " \n";
  cout << "_____|_____|_____\n";
  cout << "     |     |     \n";
  cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  "
       << board[2][2] << " \n";
  cout << "     |     |     \n\n";
}

void playerTurn() {
  cout << "Player " << (turn == 'X' ? "1 [X]" : "2 [O]")
       << ", choose a number: ";
  cin >> choice;

  // Determine row and column based on the number chosen
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
  default:
    cout << "Invalid move! Try again.\n";
    playerTurn();
    return;
  }

  // Place the player's symbol on the board
  if (board[row][col] != 'X' && board[row][col] != 'O') {
    board[row][col] = turn;
  } else {
    cout << "The cell is already occupied. Try again.\n";
    playerTurn();
  }
}

bool gameOver() {
  // Check for a win in rows, columns, and diagonals
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
      return false;
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
      return false;
  }

  // Check diagonals
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    return false;
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    return false;

  // Check for draw (board full)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] != 'X' && board[i][j] != 'O')
        return true;
    }
  }

  draw = true;
  return false;
}

int main() {
  cout << "Welcome to Tic-Tac-Toe!\n";
  while (gameOver()) {
    displayBoard();
    playerTurn();
    turn = (turn == 'X') ? 'O' : 'X';
  }

  displayBoard();

  if (draw) {
    cout << "It's a draw!\n";
  } else {
    cout << "Player " << (turn == 'X' ? "2 [O]" : "1 [X]") << " wins!\n";
  }

  return 0;
}