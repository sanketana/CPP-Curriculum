// Stack
// Last In First Out
// Operations
// Create a Stack - declare and then initialize
// remove an item - pop()
// insert an item - push()
// peeking at top element, check top elemment without removing it - top()
// check size - size()
// check whether empty - empty()
// CANNOT do - insert and remove from middle - NOT ALLOWED

#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Declaring and Initializing an stack
  stack<int> myStack;

  // Pushing elements into a stack
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);
  myStack.push(40);
  myStack.push(50);

  // Checking the top element
  cout << myStack.top() << endl;

  myStack.push(60);
  cout << myStack.top() << endl;

  // Removing top element using pop
  myStack.pop();
  cout << myStack.top() << endl;

  // Checking the size
  cout << myStack.size() << endl;

  // Clearning the vector by popping all element
  cout << "Popping and Printing my stack" << endl;
  while (!myStack.empty()) {
    cout << myStack.top() << endl;
    myStack.pop();
  }

  // Checking the size
  cout << myStack.size() << endl;
}