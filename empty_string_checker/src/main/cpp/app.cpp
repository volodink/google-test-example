/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string google_test_example::Greeter::greeting(int val) {
    return std::string("Test");
}

int main () {
    google_test_example::Greeter greeter;
    std::cout << greeter.greeting(42) << std::endl;
    return 0;
}
