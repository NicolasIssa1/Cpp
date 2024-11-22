// to prevent problems with repeated inclusion
// and prevent class and struct def being made multiple times
#pragma once

#include <cmath>

class Circle
{
    //public section lists the things accessible
    //to class users ( constructors & methods)
    public :
        //these are constructors
        Circle(double r) : Circle(0, 0, r) {}
        Circle(double, double, double);
        
        double getX() const {return xorigin; }
        double getY() const {return yorigin; }
        double getRadius() const { return radius;}
        bool containsPoint(double, double) const;
        double area() const { return M_PI * radius; }

    // private section lists the things
    // not directly accessible to class users
    // ( typically fields)
    private:
        double xorigin, yorigin;
        double radius;
};