#include <iostream>
#include <stack> // For stack container
using namespace std;

int main() {
  // 1. DECLARING and INITIALIZING a stack
  stack<int> s;

  // 2. PUSH elements onto the stack
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  cout << "Stack after pushing elements: ";
  stack<int> temp = s; // Copy stack for printing
  while (!temp.empty()) {
    cout << temp.top() << " ";
    temp.pop();
  }
  cout << endl;

  // 3. POP elements from the stack
  cout << "Popping the top element: " << s.top() << endl;
  s.pop();
  cout << "Stack after popping an element: ";
  temp = s; // Copy stack for printing
  while (!temp.empty()) {
    cout << temp.top() << " ";
    temp.pop();
  }
  cout << endl;

  // 4. ACCESSING top element
  cout << "Top element of the stack: " << s.top() << endl;

  // 5. CHECKING if the stack is empty
  if (s.empty()) {
    cout << "Stack is empty!" << endl;
  } else {
    cout << "Stack is not empty!" << endl;
  }

  // 6. SIZE of the stack
  cout << "Size of the stack: " << s.size() << endl;

  // 7. CLEARING the stack (popping all elements)
  while (!s.empty()) {
    s.pop();
  }
  cout << "Stack cleared." << endl;

  return 0;
}