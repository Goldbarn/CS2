// String type function definitions
// Rowan Ess
// 29/9/24
// CS2

#include "string-mile1.hpp"
#include <iostream>

String::String() {
    for (int i = 0; i < STRING_SIZE; ++i) {
        str[i] = '\0';
    }
}

String::String(char input) : String::String() { str[0] = input; }

String::String(const char inputArray[]) : String::String() { 
    int i = 0;
    while (inputArray[i] != '\0') {
        str[i] = inputArray[i];
        ++i;
    }
}

int String::capacity() const { return STRING_SIZE - 1; }

int String::length() const {
    int i = 0;
    while (str[i] != '\0') { ++i; }
    return i;
}

char& String::operator[](int index) {
    return str[index];
}

char String::operator[](int index) const {
    return str[index];
}

String& String::operator+=(const String& other) {
    int i = 0;
    while (str[i] != '\0') { ++i; }
    int j = 0;
    while (j < other.length()) {
        str[i] = other.str[j];
        ++i; ++j;
    }
    return *this;
}

bool String::operator==(const String& other) const {
    for (int i = 0; i < capacity(); ++i) {
        if (str[i] != other.str[i]) { return false; }
    }
    return true;
}

bool String::operator<(const String& other) const {
    int i = 0;
    while (i < capacity()) {
        if (str[i] == other.str[i]) {
            ++i;
            continue;
        }
        else if (str[i] < other.str[i]) { return true; }
        else { return false; }
    }
    return false;
}

String String::substr(int start, int end) const {
    String result;
    int j = 0;
    int i = start;
    while (i < end) {
        result.str[j] = str[i];
        ++i; ++j;
    }
    return result;
}

int String::findch(int start, char ch) const {
    int i = start;
    while (str[i] != ch && i != capacity()) { ++i; }
    if (i != capacity()) { return i; }
    return -1;
}

int String::findstr(int start, const String& subToFind) const {
    int i = start;
    while (i + subToFind.length() < STRING_SIZE) {
        if (substr(i, (i + subToFind.length())) == subToFind) { return i; }
        ++i;
        // std::cout << substr(start + i, start + i + subToFind.length());
        std::cout << i;
    }
    return -1;
}

std::istream& operator>>(std::istream& in, String& theString) {
    in >> theString.str;
    return in;
}

std::ostream& operator<<(std::ostream& out, const String& theString) {
    int i = 0;
    while (theString.str[i] != '\0') {
        out << theString.str[i];
    }
    return out;
}

String operator+(String rhs, const String& lhs) {
    return rhs += lhs;
}

bool operator==(const char inputArray[], const String& theString) {
    String temp(inputArray);
    return theString == temp;
}

bool operator==(const char inputCh, const String& theString) {
    String temp(inputCh);
    return theString == temp;
}

bool operator<(const char inputArray[], const String& theString) {
    String temp(inputArray);
    return temp < theString;
}

bool operator<(const char inputCh, const String& theString) {
    String temp(inputCh);
    return temp < theString;
}

bool operator<=(const String& lhs, const String& rhs) {
    return (lhs < rhs || lhs == rhs);
}

bool operator!=(const String& lhs, const String& rhs) {
    return !(lhs == rhs);
}

bool operator>=(const String& lhs, const String& rhs) {
    return !(lhs < rhs);
}

bool operator>(const String& lhs, const String& rhs) {
    return !(lhs < rhs || lhs == rhs);
}

















