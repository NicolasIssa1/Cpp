#include <iostream>
#include "rect.hpp" // Include your Rectangle class header

using namespace std;

int main() {
    // Create two Rectangle objects
    Rectangle rect1(0, 0, 10, 5); // x = 0, y = 0, width = 10, height = 5
    Rectangle rect2(15, 20);      // Defaults x = 0, y = 0, width = 15, height = 20

    // Print perimeter and area of rect1
    cout << "Rectangle 1:" << endl;
    cout << "  Perimeter: " << rect1.perimeter() << endl;
    cout << "  Area: " << rect1.area() << endl;

    // Print perimeter and area of rect2
    cout << "Rectangle 2:" << endl;
    cout << "  Perimeter: " << rect2.perimeter() << endl;
    cout << "  Area: " << rect2.area() << endl;

    return 0;
}
