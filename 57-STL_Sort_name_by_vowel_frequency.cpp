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