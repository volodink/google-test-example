#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <stdlib.h>

#include "Shape.h"

class Rectangle : Shape {
    private:
        double width;
        double height;
    public:
        Rectangle(double, double);
        double area();
        friend std::ostream& operator<<(std::ostream& stream, const Rectangle& c);
};

#endif
