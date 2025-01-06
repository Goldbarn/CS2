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
        
        String post = intopost(mainString);
        std::vector<String> F = mainString.split(';');
        String infix = F[0];
        String assembler = posttoassembler(post);

        if (fileOut) { 
            
            out << "Infix: " << infix << '\n';
            out << "Postfix: " << post << '\n';
            out << '\n' << assembler << '\n';

        }

        else { 

            std::cout << "Infix: " << infix << '\n';
            std::cout << "Postfix: " << post << '\n'; 
            std::cout << '\n' << assembler << '\n';

        }

        in >> inString;
        mainString = inString;

    }

}
