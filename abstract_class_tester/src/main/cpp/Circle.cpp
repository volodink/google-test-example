#include "Shape.h"
#include "Circle.h"

double Circle::area() { return 10;  }

std::ostream& operator<<(std::ostream& stream, const Circle& c)
{
    stream << "qwewqeqw";
    return stream;
}
