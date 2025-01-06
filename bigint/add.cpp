// Add two numbers from a file
// Rowan Ess
// 15/09/24
// CS2 

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {

    std::ifstream in;
    in.open("data1-1.txt");
    if (!in) {
        std::cerr << "File not found : data1-1.txt" << '\n';
        exit(1);
    }

    while (!in.eof()) {

        bigint left;
        bigint right;
        bigint result;

        in >> left;
        in >> right;

        std::cout << "Left: " << left << '\n' << "Right: " << right << '\n';

        result = left + right;

        std::cout << "Result: " << result << '\n';

    }

    in.close();
    return 0;
}
