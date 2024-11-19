#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Function to calculate the area of a triangle using Heron's formula
double triangleArea(double a, double b, double c)
{
    double s = (a + b + c) / 2; // semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to calculate the area of a square given the side length
double squareArea(double side)
{
    return side * side;
}

int main()
{
    double x1, y1, x2, y2, x3, y3;

    // Taking input for three coordinates of the triangle
    cout << "Enter coordinates of point 1 (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of point 2 (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of point 3 (x3, y3): ";
    cin >> x3 >> y3;

    // Calculate the distances between each pair of points (the sides of the triangle)
    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);

    // Calculate and display the area of the triangle
    double areaTriangle = triangleArea(side1, side2, side3);
    cout << "Area of the triangle: " << areaTriangle << endl;

    // Take input for the side of a square
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Calculate and display the area of the square
    double areaSquare = squareArea(side);
    cout << "Area of the square: " << areaSquare << endl;

    return 0;
}

// Triangle Coordinates
/*
	•	 A(1, 1) 
	•	 B(4, 5) 
	•	 C(7, 2) 
*/

// Square Coordinates
/*
	•	Point 1:  (0, 0) 
	•	Point 2:  (5, 0) 
	•	Point 3:  (5, 5) 
	•	Point 4:  (0, 5) 
*/