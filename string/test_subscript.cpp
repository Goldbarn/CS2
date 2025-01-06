//  String class test program
//
//  Tests: XXX 
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

        // DEFINE
        String  str("1234");

        // TEST
        char bag = str[0];

        // VERIFY
        assert(str == "1234");
        assert(bag == '1');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // DEFINE
        String  str("1234");

        // TEST
        char bag = str[3];

        // VERIFY
        assert(str == "1234");
        assert(bag == '4');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // DEFINE
        String  str('q');

        // TEST
        char bag = str[1];

        // VERIFY
        assert(str == 'q');
        assert(bag == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // DEFINE
        String  str("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");

        // TEST
        char bag = str[10];

        // VERIFY
        assert(str == "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
        assert(bag == 'A');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // DEFINE
        String  str;

        // TEST
        char bag = str[0];

        // VERIFY
        assert(str == '\0');
        assert(bag == '\0');
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

