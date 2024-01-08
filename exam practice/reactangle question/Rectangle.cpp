#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : width(0.0), height(0.0) {}

// Parameterized constructor
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

// Member function to get the area of the rectangle
double Rectangle::getArea() const {
    return width * height;
}

// Member function to get the perimeter of the rectangle
double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}
