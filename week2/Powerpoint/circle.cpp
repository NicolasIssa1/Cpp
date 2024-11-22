#include <stdexcept>  // <1> to use standard c++ exceptions
#include "circle.hpp"  // <2>

Circle::Circle(double x, double y, double r): //the prefix circle :: indiactes that this is a member of the Circle class
  xorigin(x), yorigin(y), radius(r)  // <4> Initializer list is used to assign parameter values to fields
{
  if (radius <= 0.0) {
    // C++ exceptions are thrown in a similar way to Java, but note no use of new to create the object!
    throw std::invalid_argument("radius must be > 0");
  }
}

// const qualifier needs to be used here as well as in the class definition
bool Circle::containsPoint(double x, double y) const  // <6>
{
  double dx = x - xorigin;
  double dy = y - yorigin;
  return sqrt(dx*dx + dy*dy) <= radius;
}
