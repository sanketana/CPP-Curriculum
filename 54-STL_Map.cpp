#include <iostream>
#include <map> // For map container
using namespace std;

int main() {
  // 1. DECLARING and INITIALIZING a map
  map<int, string> m;

  // 2. INSERTING elements into the map
  m[1] = "One";
  m[2] = "Two";
  m[3] = "Three";
  m[4] = "Four";
  m[5] = "Five";

  // 3. DISPLAYING the map elements
  cout << "Map elements: ";
  for (const auto &pair : m) {
    cout << "[" << pair.first << ": " << pair.second << "] ";
  }
  cout << endl;

  // 4. ACCESSING an element by key
  cout << "Element with key 3: " << m[3] << endl;

  // 5. CHECKING if a key exists in the map
  if (m.find(4) != m.end()) {
    cout << "Key 4 exists in the map!" << endl;
  } else {
    cout << "Key 4 does not exist in the map!" << endl;
  }

  // 6. DELETING an element by key
  cout << "Erasing key 2..." << endl;
  m.erase(2);

  // Displaying the map after deletion
  cout << "Map after erasing key 2: ";
  for (const auto &pair : m) {
    cout << "[" << pair.first << ": " << pair.second << "] ";
  }
  cout << endl;

  // 7. SIZE of the map
  cout << "Size of the map: " << m.size() << endl;

  // 8. CLEARING the map
  m.clear();
  cout << "Map cleared. Size of the map: " << m.size() << endl;

  return 0;
}