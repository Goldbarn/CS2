// Rowan Ess
// 10-1-24
// CS II
// the implementation for a dynamic array that grows with truth

#include <iostream>
#include "object_construction.hpp"
#include "object_construction.cpp" //IDK what was wrong with this, but when I remove this include it breaks.

int main() {

    Binary a;
    std::cout << "a: " << a << '\n';
    ++a;
    std::cout << "a: " << a << '\n';
    Binary b(a);
    std::cout << "b: " << b << '\n';
    Binary c(a);
    std::cout << "c: " << c << '\n';

}
