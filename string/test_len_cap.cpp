//  String class test program
//
//  Tests: 3 
//  these two are pretty much the same and simple, not much to test here
  
#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // SETUP
        String  str("aaaaaaaaaa");

        //TEST
        int len = str.length();

        // VERIFY
        assert(len == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // SETUP
        String  str;

        //TEST
        int len = str.capacity();

        // VERIFY
        assert(len == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // SETUP
        String  str('a');

        //TEST
        int len = str.length();

        // VERIFY
        assert(len == 1);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing length and capacity." << std::endl;
    return 0;
}

