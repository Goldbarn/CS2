// Rowan Ess
// Fileio
// CS23001
// Due 20/9/24
// Reading from files in various ways


// File: fileio.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio.cpp -o fileio
// Usage:   ./fileio FILENAME

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    { //Part 1 Count every character in file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        
        int i = 0;
        while (!inFile.eof()) {
            char ch = 0;
            ch = inFile.get();
            if (ch != -1) {
                std::cout << i + 1 << " : " << ch << '\n';
                ++i;
            }
        }
        std::cout << "total: " << i << '\n';

        std::cout << "Done with Part 1" << std::endl << std::endl;
        inFile.close();
    }

    { //Part 2 Count non white space character in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }

        int i = 0;
        while (!inFile.eof()) {
            char ch = 0;
            inFile >> ch;
            if (ch != 0) {
                std::cout << i+1 << " : " << ch << '\n';
                ++i;
            }
        }
        std::cout << "total: " << i << '\n';

        std::cout << "Done with Part 2" << std::endl << std::endl;
        inFile.close();
    }


    { //Part 3 Count number of words in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        
        int j = 1;
        while (!inFile.eof()) {
            char fileArray[100] = {0};
            inFile >> fileArray;
            if (fileArray[0] != 0) {
                std::cout << j << " : " << fileArray << '\n';
                ++j;
            }
        }
        std::cout << "total: " << j-1 << '\n';

        std::cout << "Done with Part 3" << std::endl << std::endl;
        inFile.close();
    }


    { //Part 4 Count number lines in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }

        //didn't read instructions :(
        // char ch = '\0';
        // int tally = 0;
        // while (!inFile.eof()) {
        //     ch = inFile.get();
        //     if (ch == '\n') { // in this implimentation, I only need to count newlines, because good practice has one at the end.
        //         ++tally;
        //         std::cout << tally << '\n';
        //     }
        // }
        // std::cout << "Total Lines: " << tally << '\n';

        char inputArray[128] = {0};
        int tally = 0;

        inFile.getline(inputArray, 128);

        while (!inFile.eof() && inputArray[0] != 0) {
            ++tally;
            std::cout << tally << ": " << inputArray << '\n';
            inFile.getline(inputArray, 128);
        }

        std::cout << "total: " << tally << '\n';

        std::cout << "Done with Part 4" << std::endl << std::endl;
        inFile.close();
    }

    return 0;
}
