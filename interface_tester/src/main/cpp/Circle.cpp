#include <math.h>

#include "Shape.h"
#include "Circle.h"

Circle::Circle(double diameter) { 
    this->diameter = diameter;
}

double Circle::area() { return M_PI * this->diameter;  }

std::ostream& operator<<(std::ostream& stream, const Circle& c)
{
    stream << "qwewqeqw";
    return stream;
}
