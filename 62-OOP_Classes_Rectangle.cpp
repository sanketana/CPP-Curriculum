#include <iostream>
using namespace std;

class Rectangle {
private:
    // Private data members for length and width
    double length;
    double width;

public:
    // Constructor with parameters
    Rectangle(double l, double w) {
        // Input validation in constructor
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "Invalid dimensions! Setting to default value of 1" << endl;
            length = 1.0;
            width = 1.0;
        }
    }

    // Default constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Setter methods with validation
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Invalid length!" << endl;
        }
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Invalid width!" << endl;
        }
    }

    // Getter methods
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    // Method to calculate area
    double area() const {
        return length * width;
    }

    // Method to calculate perimeter
    double perimeter() const {
        return 2 * (length + width);
    }

    // Method to display rectangle information
    void display() const {
        cout << "Rectangle Information:" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    // Creating rectangles using different constructors
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2;  // Using default constructor

    cout << "First Rectangle:" << endl;
    rect1.display();
    cout << "\nSecond Rectangle:" << endl;
    rect2.display();

    // Modifying rectangle dimensions
    cout << "\nModifying first rectangle..." << endl;
    rect1.setLength(4.0);
    rect1.setWidth(2.0);
    rect1.display();

    // Testing invalid input
    cout << "\nTrying invalid dimensions..." << endl;
    rect1.setLength(-5.0);  // Should print error message
    rect1.setWidth(0);      // Should print error message

    // Using getter methods
    cout << "\nGetting dimensions of first rectangle:" << endl;
    cout << "Length: " << rect1.getLength() << endl;
    cout << "Width: " << rect1.getWidth() << endl;

    return 0;
} 