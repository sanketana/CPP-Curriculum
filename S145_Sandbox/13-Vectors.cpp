#include <iostream>
#include <vector>
using namespace std;

// Create a new vector
// Initialise a new vector
// Print vector
// Take input into a vector

int main () {
    // declaring a vector
    vector<int> myVector;

    // initialising a vector
    //myVector = {1, 2, 3, 4, 5};
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    

    // iterating printing a vector
    for (int num: myVector) {
        cout << num << endl;
    }
}