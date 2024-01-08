#include <iostream>
#include "Rectangle.h"

int main()
{
    // Creating instances of rectangles
    Rectangle rectangle1;           // Default constructor, width and height are 0.0
    Rectangle rectangle2(3.0, 4.0); // Parameterized constructor

    // Displaying the area and perimeter of rectangles
    std::cout << "Rectangle 1 Area: " << rectangle1.getArea() << std::endl;
    std::cout << "Rectangle 1 Perimeter: " << rectangle1.getPerimeter() << std::endl;

    std::cout << "Rectangle 2 Area: " << rectangle2.getArea() << std::endl;
    std::cout << "Rectangle 2 Perimeter: " << rectangle2.getPerimeter() << std::endl;

    return 0;
}
