#include <iostream>
#include <cmath> // For sqrt and pow functions
using namespace std;

// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
    double x1, y1, x2, y2;

    // Take user input for the coordinates
    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate and display the distance
    double distance = calculateDistance(x1, y1, x2, y2);
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}