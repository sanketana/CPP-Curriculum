// Queue
// Is an implementation of FIFO - First in First Out
// Declare and Initalize a Queue
// Enqueue - entering a queue from behind
// Dequeue - removing from the front
// Check Size
// Whether Empty

#include <iostream>
#include <queue>
using namespace std;

int main() {
  // Declare a Queue
  queue<int> myQueue;

  // Enqueue - Pushing inside a queue
  myQueue.push(10);
  myQueue.push(20);
  myQueue.push(30);
  myQueue.push(40);
  myQueue.push(50);

  // Printing front and back element
  cout << "Printing First Element: " << myQueue.front() << endl;
  cout << "Printing Last Element: " << myQueue.back() << endl;

  // Dequeue - Leaving the queue
  myQueue.pop();

  // Printing front and back element
  cout << "Printing First Element: " << myQueue.front() << endl;
  cout << "Printing Last Element: " << myQueue.back() << endl;

  // print the size
  cout << "Size of myQueue is: " << myQueue.size() << endl;

  while (!myQueue.empty()) {
    cout << "Element " << myQueue.front() << " coming out..." << endl;
    myQueue.pop();
  }
}