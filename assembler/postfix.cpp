#include "utilities.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char** argv) {

    bool fileOut;
    if (argc == 3) { fileOut = true; }
    else if (argc == 2) { fileOut = false; }
    else { std::cerr << "usage: postfix input [output]" << '\n'; exit(1); }

    std::ifstream in(argv[1]);
    std::ofstream out(argv[2]);

    String inString;
    in >> inString;
    String mainString;
    mainString += inString;

    while (!in.eof()) {

        while (mainString[mainString.length() - 1] != ';') {

            mainString += ' ';
            in >> inString;
            mainString += inString;

        }

        std::vector<String> F = mainString.split(';');

        if (fileOut) { out << "Infix: " << F[0] << '\n' << "Postfix: " << intopost(mainString) << '\n'; }
        else { std::cout << "Infix: " << F[0] << '\n' << "Postfix: " << intopost(mainString) << '\n'; }
        in >> inString;
        mainString = inString;

    }

}
