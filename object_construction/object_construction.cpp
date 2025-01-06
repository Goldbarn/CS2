// Rowan Ess
// 10-1-24
// CS II
// the class definition for a dynamic array that grows with truth

#include <iostream>
#include "object_construction.hpp"

Binary::Binary() {
    currentSize = 1;
    binaryNum = new bool[currentSize];
    *binaryNum = true;
}

Binary::Binary(const Binary& other) {
    currentSize = other.currentSize;
    binaryNum = new bool[currentSize];
    for (int i = 0; i < currentSize; ++i) { binaryNum[i] = other.binaryNum[i]; }
}

void Binary::operator=(const Binary& other) {
    delete[] binaryNum;
    currentSize = other.currentSize;
    binaryNum = new bool[currentSize];
    for (int i = 0; i < currentSize; ++i) { binaryNum[i] = other.binaryNum[i]; }
}
    
Binary::~Binary() {
    delete[] binaryNum;
}
    
void Binary::operator++() {
    ++currentSize;
    delete[] binaryNum;
    binaryNum = new bool[currentSize];
    for (int i = 0; i < currentSize; ++i) {
        binaryNum[i] = true;
    }
}
    
void Binary::operator--() {
    ++currentSize;
    delete[] binaryNum;
    binaryNum = new bool[currentSize];
    for (int i = 0; i < currentSize; ++i) {
        binaryNum[i] = true;
    }
}
    
std::ostream& operator<<(std::ostream& out, Binary bin) {
    out << bin.currentSize;
    return out;
}

