#include <bits/stdc++.h>
using namespace std;

// Function to rotate array by k positions to the left (optimized approach)
void rotateArray(vector<int> &arr, int n, int k) {
  // Normalize k to handle cases where k > n
  k = k % n;

  // If k is 0, no rotation needed
  if (k == 0) {
    return;
  }

  // Create a temporary array to store the first k elements
  vector<int> temp(k);
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }

  // Shift the remaining elements k positions to the left
  for (int i = 0; i < n - k; i++) {
    arr[i] = arr[i + k];
  }

  // Place the elements from temp array at the end
  for (int i = 0; i < k; i++) {
    arr[n - k + i] = temp[i];
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