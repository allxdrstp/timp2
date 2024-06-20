#include "class.h"
#include "gtest/gtest.h"
#include <iostream>

TEST(tests, test1) {
    std::cout << "Running test_singleton..." << std::endl;
    A* pa1 = A::getInstance();
    A* pa2 = A::getInstance();

    if (pa1 == pa2) {
        std::cout << "Test passed: Singleton instance is the same." << std::endl;
    } else {
        std::cout << "Test failed: Singleton instance is different." << std::endl;
    }
    EXPECT_EQ(pa1, pa2);
}

