#include <iostream>
#include <queue> // For queue container
using namespace std;

int main() {
  // 1. DECLARING and INITIALIZING a queue
  queue<int> q;

  // 2. ENQUEUE (pushing) elements into the queue
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  // Display the queue elements (using a temporary copy)
  cout << "Queue after enqueueing elements: ";
  queue<int> temp = q; // Copy the queue for printing
  while (!temp.empty()) {
    cout << temp.front() << " ";
    temp.pop();
  }
  cout << endl;

  // 3. DEQUEUE (popping) elements from the queue
  cout << "Dequeuing the front element: " << q.front() << endl;
  q.pop();

  // Display the queue after dequeuing
  cout << "Queue after dequeueing an element: ";
  temp = q; // Copy the queue for printing
  while (!temp.empty()) {
    cout << temp.front() << " ";
    temp.pop();
  }
  cout << endl;

  // 4. ACCESSING front and back elements
  cout << "Front element of the queue: " << q.front() << endl;
  cout << "Back element of the queue: " << q.back() << endl;

  // 5. CHECKING if the queue is empty
  if (q.empty()) {
    cout << "Queue is empty!" << endl;
  } else {
    cout << "Queue is not empty!" << endl;
  }

  // 6. SIZE of the queue
  cout << "Size of the queue: " << q.size() << endl;

  // 7. CLEARING the queue (popping all elements)
  while (!q.empty()) {
    q.pop();
  }
  cout << "Queue cleared." << endl;

  return 0;
}