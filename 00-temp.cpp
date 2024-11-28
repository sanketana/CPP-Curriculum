#include <iostream>
using namespace std;

// write a c++ code to find the sum of all edges if a 2 d array
// creating and filling a 2 d array
// finding the sum of edge

int main() {
  const int NUM_COL = 4;
  const int NUM_ROW = 4;
  int matrix[NUM_ROW][NUM_COL] = {4, 5, 6, 3, 8, 9, 2, 3,
                                  7, 1, 7, 5, 9, 2, 0, 3};

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Find the sum of first row
  int first_row_sum = 0;

  for (int i = 0; i < NUM_COL; i++) {
    first_row_sum += matrix[0][i];
  }

  // Find the sum of last row

  // Find the sum of first column

  // Find the fum of lat column
}