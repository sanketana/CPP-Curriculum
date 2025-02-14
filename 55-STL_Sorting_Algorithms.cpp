#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Custom comparator function for descending order
bool descending(int a, int b) { return a > b; }

int main() {
  // 1) Sorting in ascending order (default behavior of std::sort)
  vector<int> numbers = {5, 2, 8, 1, 3};
  sort(numbers.begin(), numbers.end());

  cout << "Ascending order: ";
  for (int num : numbers) {
    cout << num << " ";
  }
  cout << "\n";
  // 2) Sorting in descending order using a custom comparator function
  sort(numbers.begin(), numbers.end(), descending);

  cout << "Descending order: ";
  for (int num : numbers) {
    cout << num << " ";
  }
  cout << "\n";

  // 3) Sort numbers numerically in reverse order
  sort(numbers.rbegin(), numbers.rend());

  cout << "Descending order using rbegin rend: ";
  for (int num : numbers) {
    cout << num << " ";
  }
  cout << "\n";

  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Sort cars alphabetically
  sort(cars.begin(), cars.end());
}