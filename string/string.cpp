// String type function definitions
// Rowan Ess
// 29/9/24
// CS2

#include "string.hpp"
#include <iostream>
#include <vector>

String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[stringSize - 1] = '\0';
}

String::String(char input) : String() {
    if (input != '\0') {
        delete[] str;
        stringSize = 2;
        str = new char[stringSize];
        str[0] = input;
        str[stringSize - 1] = '\0';
    }
}

String::String(const char input[]) {
    stringSize = 0;
    do { ++stringSize; } while (input[stringSize - 1] != '\0');
    str = new char[stringSize];
    int j = 0;
    while (j < stringSize) {
        str[j] = input[j];
        ++j;
    }
}

String::String(const String& input) {
    stringSize = input.stringSize;
    str = new char[stringSize];
    for (int i = 0; i < stringSize; ++i) {
        str[i] = input.str[i];
    }
}

String::~String() { delete[] str; }

void String::swap(String& other) {
    char *temp = str;
    str = other.str;
    other.str = temp;

    int size = stringSize;
    stringSize = other.stringSize;
    other.stringSize = size;
}

String& String::operator=(String other) {
    swap(other);
    return *this;
}

int String::capacity() const { return stringSize - 1; }

int String::length() const { return stringSize - 1; }

char& String::operator[](int input) { return str[input]; }

char String::operator[](int input) const { return str[input]; }

String& String::operator+=(const String& other) { // maybe change some to length
    int i = 0;
    char *temp;
    temp = new char[length() + other.stringSize];
    while (i < length()) {
        temp[i] = str[i];
        ++i;
    }
    while (i < length() + other.stringSize) {
        temp[i] = other.str[i - length()];
        ++i;
    }
    stringSize += (other.length());
    delete[] str;
    str = temp;
    return *this;
}

bool String::operator==(const String& other) const {
    if (stringSize != other.stringSize) { return false; }
    int i = 0;
    while (i < stringSize) {
        if (str[i] != other.str[i]) { return false; }
        ++i;
    }
    return true;
}

bool String::operator<(const String& other) const {
    int i = 0;
    while (i < stringSize) {
        if (str[i] > other.str[i]) { return false; }
        else if (str[i] < other.str[i]) { return true; }
        // if (i == 0) {
        //     if (stringSize < other.stringSize) { return true; }
        //     else if (stringSize > other.stringSize) { return false; }
        // }
        ++i;
    }
    return false;
}

String String::substr(int start, int end) const {
    // char *temp;
    // temp = new char[end - start + 1];
    // int i = start;
    // int j = 0;
    // while (i < end) {
    //     temp[j] = str[i];
    //     ++i; ++j;
    // }
    // temp[end - start] = '\0';
    // String result(temp);
    // return result;
    String temp;
    for (int i = start; i <= end; ++i) {
        temp += str[i];
    }
    return temp;
}

int String::findch(int start, char input) const {
    if (start >= stringSize) { return -1; }
    int i = start;
    while (str[i] != '\0') {
        if (str[i] == input) { return i; }
        ++i;
    }
    return -1;
}

int String::findstr(int start, const String& input) const {
    if (start > length()) { return -1; }
    // int i = start;
    // while (stringSize > i + input.length()) {
    //     if (substr(i, i + input.length()) == input) { std::cerr << i << '\n'; return i; }
    //     ++i;
    // }
    for (int i = start; i < length(); ++i) {
        if (substr(i, i + input.length() - 1) == input) { return i; }
    }
    return -1;
}

std::ostream& operator<<(std::ostream& out, const String& input) {
    int i = 0;
    while (i < input.length()) {
        out << input.str[i];
        ++i;
    }
    return out;
}

std::istream& operator>>(std::istream& in, String& input) {
    // char ch;
    // in >> ch;
    // while (ch != '\0' && ch != '\n' && ch != ' ') {
    //     String temp(ch);
    //     input += temp;
    //     in >> ch;
    // }
    // return in;
    char temp[1024];
    in >> temp;
    String thing(temp);
    input = thing;
    return in;
}

String operator+(String lhs, const String& rhs) {
    lhs += rhs;
    return lhs;
}

bool operator==(const char lhs[], const String& rhs) {
    String temp(lhs);
    return temp == rhs;
}

bool operator==(char lhs, const String& rhs) {
    String temp(lhs);
    return temp == rhs;
}

bool operator<(const char lhs[], const String& rhs) {
    String temp(lhs);
    return temp < rhs;
}

bool operator<(char lhs, const String& rhs) {
    String temp(lhs);
    return temp < rhs;
}

bool operator<=(const String& lhs, const String& rhs) {
        return !(lhs > rhs);
}

bool operator!=(const String& lhs, const String& rhs) {
    return !(lhs == rhs);
}

bool operator>=(const String& lhs, const String& rhs) {
    return (lhs > rhs || lhs == rhs);
}

bool operator>(const String& lhs, const String& rhs) {
    return !(lhs < rhs || lhs == rhs);
}

std::vector<String> String::split(char splitter) const {
    // std::vector<String> output;
    // int location = 0;
    // while (location != -1) {
    //     int nextLoc = findch(location + 1, splitter);
    //     if (nextLoc == -1) { output.push_back(substr(location + 1, length())); }
    //     else if (location == 0) { output.push_back(substr(0, nextLoc - 1)); }
    //     else if (location + 1 == nextLoc) { String empty; output.push_back(empty); }
    //     else { output.push_back(substr(location + 1, nextLoc - 1)); }
    //     location = nextLoc;
    // }
    // return output; ATTEMPT ONE
    std::vector<String> output;
    int start = 0;
    int end = findch(0, splitter);
    while (end != -1) {
        String temp = substr(start, end - 1);
        String blank;
        if (temp == splitter) { temp = blank; }
        output.push_back(temp);
        start = end + 1;
        end = findch(start, splitter);
    }
    String temp = substr(start, length());
    String blank;
    if (temp == splitter) { temp = blank; }
    output.push_back(temp);
    return output;
}


