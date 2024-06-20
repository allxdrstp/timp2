#pragma once

class A {
public:
    static A* getInstance();

private:
    A();
    static A* instance;
};
