// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  //WONT FAIL, fix and add test cases.
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 0);  //WONT FAIL, fix and add test cases.
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");  //WONT FAIL, fix and add test cases.
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("55555555555555555555");

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == "111111111111111111110");  //WONT FAIL, fix and add test cases.
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(10);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);  //WONT FAIL, fix and add test cases.
    }


    //Added test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}
