#include "rect.hpp"
#include <iostream>

//constructor with all parameters
Rectangle::Rectangle(double x, double y, double width, double height)
: x(x), y(y), width(width), height(height) {}

//constructor with only width and heigh, defaults x and y to 0
Rectangle::Rectangle(double width, double height)
: Rectangle(0, 0, width, height) {}

//getter implementations
double Rectangle::getX() const { return x;}
double Rectangle::getY() const { return y;}
double Rectangle::getWidth() const { return width;}
double Rectangle::getHeight() const {return height;}

//perimeter method
double Rectangle::perimeter() const 
{
    return 2 * (width + height);
}

double Rectangle::area() const 
{
    return width * height;
}

