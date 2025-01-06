// bigint type function definitions
// Rowan Ess
// 14/9/24
// CS2

#include <iostream>
#include "bigint.hpp"

bigint::bigint() {
    for (int i = 0; i < CAPACITY; ++i) {
        myBigint[i] = '0';
    }
}

bigint::bigint(int smallBigint) : bigint::bigint() {
    int i = 0;
    while (smallBigint != 0) {
        myBigint[i] = char((smallBigint % 10) + int('0'));
        smallBigint = smallBigint / 10;
        ++i;
    }
    if (i == 0) { myBigint[0] = '0'; }
}

bigint::bigint(const char longBigint[]) : bigint::bigint() {
    int i = 0; int j = 0;
    while (longBigint[i] != '\0') { ++i; }
    do {
        --i;
        myBigint[j] = longBigint[i];
        ++j;
    } while (i != 0);
}

bool bigint::operator==(bigint otherBigint) {
    for (int i = 0; i < CAPACITY; ++i) {
        if (myBigint[i] != otherBigint.myBigint[i]) {
            return false;
        }
    }
    return true;
}

void bigint::debugPrint(std::ostream& out, bigint theBigint) const {
    out << "debugPrint";
    for (int i = 1; i < CAPACITY+1; ++i) {
        out << theBigint.myBigint[CAPACITY-i] << " | ";
    }
}

std::ostream& operator<<(std::ostream& out, bigint theBigint) {
    int i = CAPACITY - 1;
    while ((theBigint.myBigint[i] == '0') && i != 0) { --i; }
    while (i >= 0) {
        out << theBigint.myBigint[i];
        --i;
    }
    return out;
}

std::istream& operator>>(std::istream& cin, bigint& theBigint) {
    char inputArray[CAPACITY];
    int i = 0;
    char ch;
    cin >> ch;
    while (ch != ';') {
        inputArray[i] = ch;
        cin >> ch;
        ++i;
    }
    int j = 0, k = i; --i;
    while (j != k) {
        theBigint.myBigint[i] = inputArray[j];
        ++j; --i;
    }
    cin >> ch;
    return cin;
}

bigint bigint::operator+(bigint otherBigint) {
    int carry = 0;
    int i = 0;
    bigint result;
    while (i < CAPACITY) {
        int temp = 0;
        temp = (myBigint[i] - int('0')) + (otherBigint.myBigint[i] - int('0')) + carry;
        carry = 0;
        if (temp >= 10) { 
            ++carry; 
            temp -= 10;
        }
        result.myBigint[i] = (temp + int('0'));
        ++i;
    }
    return result;
}

int bigint::operator[](int num) {
    return (myBigint[num] - int('0'));
}

int bigint::operator[](const int num) const {
    return (myBigint[num] - int('0'));
}

bigint bigint::timesDigit(int multBy) const {
    bigint result;
    int carry = 0;
    for (int i = 0; i < CAPACITY; ++i) {
        int temp = 0;
        temp = (myBigint[i] - int('0')) * multBy + carry;
        if (temp >= 10) { 
            carry = temp / 10; 
            result.myBigint[i] = (temp - (carry * 10) + int('0'));
        }
        else { 
            result.myBigint[i] = (temp + int('0')); 
            carry = 0;
        }
    }
    return result;
}

bigint bigint::times10(int powerOf) const {
    bigint result;
    for (int i = 0; i < CAPACITY - powerOf + 1; ++i) {
        result.myBigint[i + powerOf] = myBigint[i];
    }
    return result;
}



bigint bigint::operator*(bigint multBy) {
    bigint product;
    // std::cout << "Multipliers: " << *this << "---" << multBy << '\n';
    for (int i = 0; i < CAPACITY; ++i) {
        // std::cout << "multby  " << myBigint[i];
        bigint temp;
        temp = timesDigit(multBy.myBigint[i] - int('0'));
        // std::cout << "Temp: " << temp << '\n';
        // std::cout << "tempTimes: " << temp.times10(i) << '\n';
        product = product + temp.times10(i);
    }
    // std::cout << product << '\n';
    return product;
}
