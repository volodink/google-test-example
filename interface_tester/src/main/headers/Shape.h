#ifndef SHP_H
#define SHP_H

#include <iostream>
#include <stdlib.h>


class Shape {  // interface
    public:
        virtual double area() = 0;  // pure virtual function
};


#endif