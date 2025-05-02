#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr) {
  // If array has less than 2 elements, return -1
  if (n < 2) {
    return -1;
  }

  // First pass: Find the maximum element
  int maxElement = INT_MIN; // Initialize with smallest possible integer
  for (int i = 0; i < n; i++) {
    if (arr[i] > maxElement) {
      maxElement = arr[i];
    }
  }

  // Second pass: Find the second maximum element
  int secondMax = INT_MIN; // Initialize with smallest possible integer
  for (int i = 0; i < n; i++) {
    // If current element is less than maxElement and greater than secondMax
    if (arr[i] < maxElement && arr[i] > secondMax) {
      secondMax = arr[i];
    }
  }

  // If secondMax is still INT_MIN, it means all elements were equal to
  // maxElement
  return (secondMax == INT_MIN) ? -1 : secondMax;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t; // Number of test cases

  while (t--) {
    int n;
    cin >> n; // Size of array

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int result = findSecondLargest(n, arr);
    cout << result << endl;
  }

  return 0;
}