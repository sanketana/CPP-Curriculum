#include <iostream>
using namespace std;

int main() {
  int rows, cols;

  // Input the size of the matrix
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  // Declare the matrix
  int matrix[rows][cols];

  // Input matrix elements
  cout << "Enter the elements of the matrix:" << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix[i][j];
    }
  }

  // Calculate the sum of the edge elements
  int edgeSum = 0;

  // Add top and bottom rows
  for (int j = 0; j < cols; j++) {
    edgeSum += matrix[0][j]; // Top row
    if (rows > 1)            // Avoid double-counting if there's only one row
      edgeSum += matrix[rows - 1][j]; // Bottom row
  }

  // Add left and right columns (excluding corners already counted)
  for (int i = 1; i < rows - 1; i++) {
    edgeSum += matrix[i][0]; // Left column
    if (cols > 1)            // Avoid double-counting if there's only one column
      edgeSum += matrix[i][cols - 1]; // Right column
  }

  // Output the result
  cout << "The sum of all the edge elements is: " << edgeSum << endl;

  return 0;
}