// bigint type class declaration
// Rowan Ess
// 14/9/24
// CS2

#ifndef BIG_INT_GUARD_
#define BIG_INT_GUARD_

const int CAPACITY = 200; //size of myBigint array

class bigint {
public:

    bigint(); //initializes myBigint to all zeroes
    bigint(int); //initializes myBigint to provided int
    bigint(const char []); //initializes myBigint to provided array

    bool operator==(bigint); //determines whether this bigint is equivilant to another bigint (will convert if int or cstring)
    friend std::ostream& operator<<(std::ostream&, bigint); //outputs all numbers to ostream, starting with the highest
    friend std::istream& operator>>(std::istream&, bigint&); //puts a cstring into a bigint
    bigint operator+(bigint); //adds two bigints together (will convert if int or cstring)
    int operator[](int); //returns the character at index of input int
    int operator[](const int) const; //returns the character at index of input int
    bigint operator*(bigint); //multiplies a bigint by a bigint, and returns it as a bigint

    bigint timesDigit(int) const; //multiplies a bigint by a integer
    bigint times10(int) const; //multiplies a bigint by ten to the integer power

    void debugPrint(std::ostream&, bigint) const; //outputs entire bigint from CAPACITY down, with vert lines between


private:
    char myBigint[CAPACITY]; //array of characters of size CAPACITY
};

#endif
