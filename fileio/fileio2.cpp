// Rowan Ess
// Fileio
// CS23001
// Due 20/9/24
// Reading from files in various ways


// File: fileio2.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio2.cpp -o fileio
// Usage:   ./fileio FILENAME

#include <iostream>
#include <fstream>

//Part 5 
//Read in a integer that is the number of lines to read
//Each line has only one word on it.
//Use data3.txt

int main(int argc, char *argv[]) {
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open()) {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        exit(1);
    }

    int sentinel = 0;
    inFile >> sentinel;

    char inputArray[100];

    do {
    inFile.getline(inputArray, 100);
    } while (inputArray[0] == '\0');

    for (int i = 0; i < sentinel; ++i) {
        std::cout << i + 1 << ": " << inputArray << '\n';
        inFile.getline(inputArray, 100);
    }

// the data file does not have enough lines. one way I could solve this is by using the
// solution I came up with so prevent the sentinel line from being read, by just excluding 
// lines where inputArray[0] == '\0'. Or, in that case, I could throw an error on that condition
// it would be std::cerr << "not enough lines, number requested: " << sentinel << ", number available: " << i << '\n';

    std::cout << "Done with Part 5" << std::endl << std::endl;
    inFile.close();
    return 0;
}
