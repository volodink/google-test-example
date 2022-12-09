#include <iostream>
#include <stdlib.h>

#include "app.h"
#include "Circle.h"

int main () {
    Circle c;
    std::cout << c << c.area() << std::endl;
    return 0;
}
