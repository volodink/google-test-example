#include <iostream>
#include <stdlib.h>

#include "app.h"
#include "Circle.h"
#include "Rectangle.h"

int main () {
    Circle c(42);
    std::cout << c.area() << std::endl;
    Rectangle rect(10, 10);
    std::cout << rect.area() << std::endl;
    return 0;
}
