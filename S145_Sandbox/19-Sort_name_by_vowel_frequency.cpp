// Collect n names as input
// Store them in vector
// Sort the vector based on the number of vowels in the name
// Higher the number of vowels, then higher the name in the sort order
// Use Custom Comparator
// 1) Take n as the input
// 2) Collect n string into the vector
// 3) sort normally using lexical sorting
// 4) print in
// 5) define custom comparator, to do sortign based on number of vowels
// 6) test again
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Function to count vowels in a given string
int countVowels(const string &name) {
  int count = 0;
  for (char ch : name) {
    char lower = tolower(ch);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' ||
        lower == 'u') {
      count++;
    }
  }
  return count;
}

// Custom comparator to sort based on vowel count in descending order
bool compareNames(const string &a, const string &b) {
  return countVowels(a) > countVowels(b);
}

int main() {
  int n;
  cout << "Enter the number of names: ";
  cin >> n;

  vector<string> names(n);
  cout << "Enter " << n << " names:\n";

  cin.ignore(); // To handle the newline character after inputting n
  for (int i = 0; i < n; i++) {
    getline(cin, names[i]);
  }

  // Sorting names based on vowel count in descending order
  sort(names.begin(), names.end(), compareNames);

  // Output sorted names
  cout << "\nSorted names based on number of vowels in descending order:\n";
  for (const string &name : names) {
    cout << name << " (" << countVowels(name) << " vowels)" << endl;
  }

  return 0;
}