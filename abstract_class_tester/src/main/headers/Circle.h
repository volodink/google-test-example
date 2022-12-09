#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <stdlib.h>

#include "Shape.h"

class Circle : Shape {  // abstract class
    public:
        Circle() {};
        double area();
        friend std::ostream& operator<<(std::ostream& stream, const Circle& c);
};

#endif
