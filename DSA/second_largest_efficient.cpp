#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr) {
  // If array has less than 2 elements, return -1
  if (n < 2) {
    return -1;
  }

  // Initialize first and second largest to INT_MIN
  int firstLargest = INT_MIN;
  int secondLargest = INT_MIN;

  // Traverse the array once
  for (int i = 0; i < n; i++) {
    // If current element is greater than firstLargest
    if (arr[i] > firstLargest) {
      // Update secondLargest to firstLargest
      secondLargest = firstLargest;
      // Update firstLargest to current element
      firstLargest = arr[i];
    }
    // If current element is between firstLargest and secondLargest
    else if (arr[i] > secondLargest && arr[i] != firstLargest) {
      // Update secondLargest to current element
      secondLargest = arr[i];
    }
  }

  // If secondLargest is still INT_MIN, no second largest exists
  if (secondLargest == INT_MIN) {
    return -1;
  }

  return secondLargest;
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