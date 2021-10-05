#include "lib.h"

#include <iostream>

int main (int, char **) {
    int a;
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return 0;
}