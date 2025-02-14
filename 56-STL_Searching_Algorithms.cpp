#include <algorithm> // For std::find
#include <iostream>
#include <list>
#include <vector>

int main() {
  // 1️⃣ Using std::find with a vector
  std::vector<int> numbers = {10, 20, 30, 40, 50};
  int target = 30;

  auto it = std::find(numbers.begin(), numbers.end(), target);
  if (it != numbers.end()) {
    std::cout << "Element " << target
              << " found at index: " << std::distance(numbers.begin(), it)
              << "\n";
  } else {
    std::cout << "Element " << target << " not found in vector\n";
  }

  // 2️⃣ Using std::find with a list
  std::list<int> numList = {5, 15, 25, 35, 45};
  int searchVal = 25;
  auto listIt = std::find(numList.begin(), numList.end(), searchVal);

  if (listIt != numList.end()) {
    std::cout << "Element " << searchVal << " found in the list\n";
  } else {
    std::cout << "Element " << searchVal << " not found in the list\n";
  }

  // 3️⃣ Using std::find with a string
  std::string text = "Hello World!";
  char charToFind = 'W';
  auto charIt = std::find(text.begin(), text.end(), charToFind);

  if (charIt != text.end()) {
    std::cout << "Character '" << charToFind
              << "' found at position: " << std::distance(text.begin(), charIt)
              << "\n";
  } else {
    std::cout << "Character '" << charToFind << "' not found in the string\n";
  }

  return 0;
}
