#include <iostream>
using namespace std;

class Point {
private:
    int* x;
    int* y;

public:
    // Default constructor
    Point() {
        x = new int(0);
        y = new int(0);
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Point(int xVal, int yVal) {
        x = new int(xVal);
        y = new int(yVal);
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Point(const Point& other) {
        // Deep copy
        x = new int(*other.x);
        y = new int(*other.y);
        cout << "Copy constructor called" << endl;
    }

    // Destructor
    ~Point() {
        delete x;
        delete y;
        cout << "Destructor called" << endl;
    }

    // Getter methods
    int getX() const { return *x; }
    int getY() const { return *y; }

    // Setter methods
    void setX(int xVal) { *x = xVal; }
    void setY(int yVal) { *y = yVal; }

    void display() const {
        cout << "Point(" << *x << ", " << *y << ")" << endl;
    }
};

int main() {
    // Using default constructor
    cout << "\nCreating p1 with default constructor:" << endl;
    Point p1;
    p1.display();

    // Using parameterized constructor
    cout << "\nCreating p2 with parameterized constructor:" << endl;
    Point p2(5, 10);
    p2.display();

    // Using copy constructor
    cout << "\nCreating p3 as a copy of p2:" << endl;
    Point p3 = p2;
    p3.display();

    // Demonstrating independence after copy
    cout << "\nChanging p3's x value to 15:" << endl;
    p3.setX(15);
    cout << "p2: ";
    p2.display();
    cout << "p3: ";
    p3.display();

    return 0;
}