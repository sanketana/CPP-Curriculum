#include <algorithm> // For sort, reverse, and find
#include <array>
#include <iostream>
using namespace std;

int main() {
  // 1. DECLARING and INITIALIZING a std::array
  array<int, 6> nums = {10, 20, 30, 40, 50, 60};

  // 2. ACCESSING elements using indexing and `at()`
  cout << "Element at index 2: " << nums[2] << endl;
  cout << "Element using at(): " << nums.at(3) << endl;

  // 3. MODIFYING elements
  nums[1] = 25;
  nums.at(4) = 55;

  // 4. TRAVERSING elements using a for loop
  cout << "Elements using for loop: ";
  for (size_t i = 0; i < nums.size(); ++i) {
    cout << nums[i] << " ";
  }
  cout << endl;

  // 5. TRAVERSING using iterators
  cout << "Elements using iterators: ";
  for (auto it = nums.begin(); it != nums.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  // 6. SORTING elements
  sort(nums.begin(), nums.end());
  cout << "Sorted elements: ";
  for (int n : nums)
    cout << n << " ";
  cout << endl;

  // 7. REVERSING elements
  reverse(nums.begin(), nums.end());
  cout << "Reversed elements: ";
  for (int n : nums)
    cout << n << " ";
  cout << endl;

  // 8. FINDING an element
  auto it = find(nums.begin(), nums.end(), 25);
  if (it != nums.end())
    cout << "Element 25 found at position: " << (it - nums.begin()) << endl;
  else
    cout << "Element not found" << endl;

  // 9. SIZE of the array
  cout << "Size of the array: " << nums.size() << endl;

  // 10. FRONT and BACK elements
  cout << "Front element: " << nums.front() << endl;
  cout << "Back element: " << nums.back() << endl;

  // 11. FILLING the array with a value
  nums.fill(100);
  cout << "Array after fill(100): ";
  for (int n : nums)
    cout << n << " ";
  cout << endl;

  // 12. SWAPPING arrays
  array<int, 6> otherArray = {1, 2, 3, 4, 5, 6};
  nums.swap(otherArray);
  cout << "After swapping with another array: ";
  for (int n : nums)
    cout << n << " ";
  cout << endl;

  return 0;
}