#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
protected:
    string name;

public:
    Shape(string n) : name(n) {}
    
    // Virtual destructor
    virtual ~Shape() {}
    
    // Pure virtual functions
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    
    // Virtual function
    virtual void display() const {
        cout << "Shape: " << name << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

// Derived class - Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}
    
    double area() const override {
        return M_PI * radius * radius;
    }
    
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}
    
    double area() const override {
        return length * width;
    }
    
    double perimeter() const override {
        return 2 * (length + width);
    }
};

int main() {
    // Cannot create Shape object directly because it's abstract
    // Shape shape("Generic");  // This would cause error
    
    Circle circle(5);
    Rectangle rect(4, 6);
    
    // Using base class pointers
    Shape* shapes[] = {&circle, &rect};
    
    // Polymorphic behavior
    for (Shape* shape : shapes) {
        shape->display();
        cout << "-------------------" << endl;
    }
    
    return 0;
} 