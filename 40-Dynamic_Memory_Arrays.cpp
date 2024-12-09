#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  // Dynamically allocate memory for an array
  int *arr = new int[n];

  // Input values into the array
  cout << "Enter " << n << " integers: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Display the array
  cout << "The entered values are: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Free the allocated memory
  delete[] arr;
  cout << "Memory for the array freed successfully!" << endl;

  return 0;
}