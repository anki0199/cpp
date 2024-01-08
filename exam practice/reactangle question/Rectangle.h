#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    // Default constructor
    Rectangle();

    // Parameterized constructor
    Rectangle(double w, double h);

    // Member function to get the area of the rectangle
    double getArea() const;

    // Member function to get the perimeter of the rectangle
    double getPerimeter() const;
};

#endif // RECTANGLE_H
