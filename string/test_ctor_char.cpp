//  String class test program
//
//  Tests: 7
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
        String  str('b');

        // VERIFY
        assert(str == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('\0');

        // VERIFY
        assert(str == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('\n');

        // VERIFY
        assert(str == '\n');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('x');

        // VERIFY
        assert(str == "x\0");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("a");

        // VERIFY
        assert(str != "bb");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('\n');

        // VERIFY
        assert(str != "below");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('\n');

        // VERIFY
        assert(str == '\n');
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing charactor constructor." << std::endl;
    return 0;
}

