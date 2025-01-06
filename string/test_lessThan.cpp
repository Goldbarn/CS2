//  String class test program
// 
//  Name:  lessthan
//  Tests: 6 
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
        String  left('0');
        String  right('1');

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == '0');
        assert(right  == '1');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("30");
        String  right("90");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "30");
        assert(right  == "90");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("andrew");
        String  right("zeta");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "andrew");
        assert(right  == "zeta");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right('b');

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == '\0');
        assert(right  == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right;

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left   == '\0');
        assert(right  == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('b');
        String  right('a');

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left   == 'b');
        assert(right  == 'a');
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing less than." << std::endl;
    return 0;
}
