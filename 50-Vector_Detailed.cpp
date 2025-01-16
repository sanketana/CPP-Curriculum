#include <algorithm> // For sort, reverse, and for_each
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // 1. DECLARING and INITIALIZING a vector
  vector<int> nums = {10, 20, 30, 40, 50};

  // 2. ACCESSING elements using indexing
  cout << "Element at index 2: " << nums[2] << endl;

  // 3. ADDING elements (push_back, emplace_back)
  nums.push_back(60);
  nums.emplace_back(70); // More efficient than push_back

  // 4. INSERTING elements
  nums.insert(nums.begin() + 2, 25); // Insert 25 at index 2

  // 5. REMOVING elements (pop_back, erase)
  nums.pop_back();              // Removes last element
  nums.erase(nums.begin() + 3); // Removes element at index 3

  // 6. TRAVERSING using iterators
  cout << "Elements using iterators: ";
  for (auto it = nums.begin(); it != nums.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  // 7. SORTING elements
  sort(nums.begin(), nums.end());
  cout << "Sorted elements: ";
  for (int n : nums)
    cout << n << " ";
  cout << endl;

  // 8. REVERSING elements
  reverse(nums.begin(), nums.end());
  cout << "Reversed elements: ";
  for (int n : nums)
    cout << n << " ";
  cout << endl;

  // 9. FINDING an element
  auto it = find(nums.begin(), nums.end(), 30);
  if (it != nums.end())
    cout << "Element 30 found at position: " << (it - nums.begin()) << endl;
  else
    cout << "Element not found" << endl;

  // 10. RESIZING the vector
  nums.resize(5); // Resize to 5 elements, truncating the rest
  cout << "After resizing to 5 elements: ";
  for (int n : nums)
    cout << n << " ";
  cout << endl;

  // 11. CAPACITY related functions
  cout << "Size: " << nums.size() << ", Capacity: " << nums.capacity() << endl;
  nums.shrink_to_fit(); // Reduce capacity to fit size
  cout << "After shrink_to_fit, Capacity: " << nums.capacity() << endl;

  // 12. CLEARING the vector
  nums.clear();
  cout << "After clear(), Size: " << nums.size() << endl;

  // 13. CHECKING if vector is empty
  if (nums.empty()) {
    cout << "The vector is empty!" << endl;
  }

  return 0;
}