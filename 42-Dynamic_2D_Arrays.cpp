#include <iostream>
using namespace std;

int main() {
  int rows, cols;

  // Step 1: Input number of rows and columns
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  // Step 2: Dynamically allocate memory for a 2D array
  int **arr = new int *[rows]; // Array of pointers (row pointers)
  for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols]; // Allocate memory for each row
  }

  // Step 3: Input values into the 2D array
  cout << "\nEnter values for the 2D array:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "Element [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }

  // Step 4: Display the 2D array
  cout << "\nThe 2D Array is:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Step 5: Free the dynamically allocated memory
  for (int i = 0; i < rows; i++) {
    delete[] arr[i]; // Free memory allocated for each row
  }
  delete[] arr; // Free the array of row pointers

  cout << "\nMemory deallocated successfully!\n";

  return 0;
}