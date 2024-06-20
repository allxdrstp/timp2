#include "class.h"
#include <iostream>

A* A::instance = nullptr;

A::A() {
    std::cout << "construct A" << std::endl;
    instance = this;
}

A* A::getInstance() {
    std::cout << "get A" << std::endl;
    if (instance == nullptr) {
        return new A();
    }
    return instance;
}
