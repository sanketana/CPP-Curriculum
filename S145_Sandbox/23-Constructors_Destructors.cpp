#include <iostream>
using namespace std;


class Point {
private:
   int* x;
   int* y;

public:
// Default contructor
    Point() {
        x = new int(0);
        y = new int(0);
    }

// Parameterised Contructor
    Point(int xVal, int yVal) {
        x = new int(xVal);
        y = new int(yVal);
    }

// Copy Constructor
    Point(const Point& other) {
        x = new int(*other.x);
        y = new int(*other.y);
    }


    // Getter methods
    int getX() {return *x;};
    int getY() {return *y;};

    // Setter methods
    void setX(int xVal) {
        *x = xVal;
    }

    void setY(int yVal) {
        *y = yVal;
    }

// Display method
 void display() {
    cout << "Point(" << *x << ", " << *y << ")" << endl;
 }

   ~Point(){
    delete x;
    delete y;
   }

};

int main() {
    Point p1;
    cout << "Displaying P1: ";
    p1.display();
    Point p2(2,5);
    cout << "Displaying P2: ";
    p2.display();

    // shallow copy
    //p1 = p2;

    // Deep copy
    Point p3 = p2;

    cout << "Displaying P1: ";
    p1.display();
    p1.setX(3);
    p1.setY(3);
    cout << "Displaying P1 after setting: ";
    p1.display();   
    cout << "Displaying P2 after setting: ";
    p2.display();
   
    cout << "Display P3 before copy: " ;
    p3.display();
    p3.setX(9);
    p3.setY(9);
    cout << "Display P3 after copy: " ;
    p3.display();
    cout << "Display P2 after copy: " ;
    p2.display();    
}