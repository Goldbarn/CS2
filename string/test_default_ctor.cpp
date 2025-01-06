//  String class test program
//
//  Tests: default, 5 
// 
  
#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;

        // VERIFY
        assert(str == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String strOne;
        String strTwo;

        // VERIFY
        assert(strOne == strTwo);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;

        // VERIFY
        assert(str != '0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;

        // VERIFY
        assert(str != "000");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;

        // VERIFY
        assert(str == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;

        // VERIFY
        assert(str.length() == 0);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing default." << std::endl;
    return 0;
}

