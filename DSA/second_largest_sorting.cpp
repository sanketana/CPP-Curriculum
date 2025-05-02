#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr) {
  // If array has less than 2 elements, return -1
  if (n < 2) {
    return -1;
  }

  // Sort the array in decreasing order
  sort(arr.begin(), arr.end(), greater<int>());

  // Find the second largest element that is not equal to the largest
  int largest = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] != largest) {
      return arr[i];
    }
  }

  // If all elements are equal, return -1
  return -1;
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