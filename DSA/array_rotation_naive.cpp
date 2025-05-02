#include <bits/stdc++.h>
using namespace std;

// Function to rotate array by one position to the left
void rotateByOne(vector<int> &arr, int n) {
  // Store the first element
  int firstElement = arr[0];

  // Shift all elements one position to the left
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  // Place the first element at the end
  arr[n - 1] = firstElement;
}

// Function to rotate array by k positions to the left (naive approach)
void rotateArray(vector<int> &arr, int n, int k) {
  // Normalize k to handle cases where k > n
  k = k % n;

  // Rotate the array k times
  for (int i = 0; i < k; i++) {
    rotateByOne(arr, n);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t; // Number of test cases

  while (t--) {
    int n, k;
    cin >> n >> k; // Size of array and number of rotations

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    // Rotate the array
    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  return 0;
}