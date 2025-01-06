// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  //Right.  Will Succees.  Fixed and added test cases.
        assert(digit == 4);
    }

    {
        // Setup
        bigint bi;

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 0); 
        assert(digit == 0);
    }

    {
        // Setup
        bigint bi("54444444445");

        // Test 
        int digit = bi[10];
        int digitTwo = bi[0];

        // Verify
        assert(bi    == "54444444445"); 
        assert(digit == 5);
        assert(digitTwo == 5);
    }

    {
        // Setup
        bigint bi;

        // Test 
        int digit = bi[199];

        // Verify
        assert(bi    == 0); 
        assert(digit == 0);
    }

    {
        // Setup
        bigint bi(50);

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi    == 50); 
        assert(digit == 5);
    }

    {
        // Setup
        bigint bi(4356);

        // Test 
        int digit = bi[0];
        int digitTwo = bi[1];
        int digitThree = bi[2];
        int digitFour = bi[3];

        // Verify
        assert(bi    == 4356); 
        assert(digit == 6);
        assert(digitTwo == 5);
        assert(digitThree == 3);
        assert(digitFour == 4);
    }

    {
        // Setup
        bigint bi("10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");

        // Test 
        int digit = bi[199];

        // Verify
        assert(bi    == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"); 
        assert(digit == 1);
    }
    
    //Added test cases!!

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

