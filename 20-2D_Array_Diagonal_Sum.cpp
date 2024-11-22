#include <iostream>
using namespace std;

int main() {
  int n;

  // Input the size of the square matrix
  cout << "Enter the size of the square matrix (n x n): ";
  cin >> n;

  // Declare the matrix
  int matrix[n][n];

  // Input matrix elements
  cout << "Enter the elements of the matrix:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  // Calculate the sum of the main diagonal
  int diagonalSum = 0;
  for (int i = 0; i < n; i++) {
    diagonalSum += matrix[i][i]; // Add the element at (i, i)
  }

  // Output the result
  cout << "The sum of the main diagonal is: " << diagonalSum << endl;

  return 0;
}