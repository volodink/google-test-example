#include <math.h>

#include "Shape.h"
#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) { 
    this->width = width;
    this->height = height;
}

double Rectangle::area() { return this->width * this->height;  }

std::ostream& operator<<(std::ostream& stream, const Rectangle& c)
{
    stream << "qwewqeqw";
    return stream;
}
