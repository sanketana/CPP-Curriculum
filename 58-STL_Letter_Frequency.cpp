#include <iostream>
#include <map>

using namespace std;

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  // Map to store character frequency
  map<char, int> letterFrequency;

  // Count frequency of each character
  for (char ch : input) {
    if (isalpha(ch)) {  // Consider only letters (ignore spaces, digits, special
                        // chars)
      ch = tolower(ch); // Convert to lowercase for case insensitivity
      letterFrequency[ch]++;
    }
  }

  // Print letter frequencies
  cout << "\nLetter frequencies:\n";
  for (const auto &pair : letterFrequency) {
    cout << pair.first << ": " << pair.second << endl;
  }

  return 0;
}