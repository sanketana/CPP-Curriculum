#include <iostream>
using namespace std;

int findLargest(int *arr, int size) {
  int *largest = arr; // Pointer to the largest element
  for (int *ptr = arr; ptr < arr + size; ++ptr) {
    if (*ptr > *largest) {
      largest = ptr;
    }
  }
  return *largest; // Dereference pointer to get the largest value
}

int main() {
  int arr[] = {5, 3, 8, 6, 2, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int largest = findLargest(arr, size);
  cout << "The largest element in the array is: " << largest << endl;
  return 0;
}