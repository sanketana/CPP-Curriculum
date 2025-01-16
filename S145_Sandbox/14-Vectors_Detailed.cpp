#include <iostream>
#include <vector>
using namespace std;

void myPrint(vector<int> nums) {
  for (int item : nums) {
    cout << item << " ";
  }
  cout << endl;
}

int main() {
  // Initializing using a array
  vector<int> nums = {10, 20, 30, 40, 50};

  // Printing all elements
  myPrint(nums);

  // Adding more element
  nums.push_back(60);
  nums.push_back(70);

  // Printing after adding 2 new elements
  myPrint(nums);

  // Inserting elements at a particular location
  nums.insert(nums.begin() + 3, 35);

  // Printing after adding inserting 35
  myPrint(nums);

  // Removing from end
  nums.pop_back();
  myPrint(nums);

  // Removing at a particular index
  nums.erase(nums.begin() + 3);
  myPrint(nums);

  // Capacity related functions: size(), capacity()
  // size() gives the actual number of elements in a vector
  // capacity() gives how many elements are allocated for this vector

  cout << "Size is: " << nums.size() << ". Capacity is: " << nums.capacity()
       << endl;

  nums.push_back(70);
  cout << "Size is: " << nums.size() << ". Capacity is: " << nums.capacity()
       << endl;

  nums.push_back(80);
  cout << "Size is: " << nums.size() << ". Capacity is: " << nums.capacity()
       << endl;

  nums.push_back(90);
  cout << "Size is: " << nums.size() << ". Capacity is: " << nums.capacity()
       << endl;

  nums.push_back(100);
  cout << "Size is: " << nums.size() << ". Capacity is: " << nums.capacity()
       << endl;

  nums.push_back(110);
  cout << "Size is: " << nums.size() << ". Capacity is: " << nums.capacity()
       << endl;

  nums.clear();
  cout << "Size is: " << nums.size() << ". Capacity is: " << nums.capacity()
       << endl;

  if (nums.empty()) {
    cout << "The vector is empty!";
  }
}
