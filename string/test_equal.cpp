//  String class test program
// 
//  Name:  equal
//  Tests: 8
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
        String  left('b');
        String  right('b');

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == 'b');
        assert(right  == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Hello, there!");
        String  right("Hello, there!");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == "Hello, there!");
        assert(right  == "Hello, there!");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right;

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == '\0');
        assert(right  == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('X');
        String  right("X");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == 'X');
        assert(right  == "X");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Wizbiz");
        String  right("Tingbing");

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result == true);
        assert(left   == "Wizbiz");
        assert(right  == "Tingbing");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right('b');

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result == true);
        assert(left   == '\0');
        assert(right  == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right("blahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblah");

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result == true);
        assert(left   == '\0');
        assert(right  == "blahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblah");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("blahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblah");
        String  right("blahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblah");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == "blahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblah");
        assert(right  == "blahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblahblah");
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing equal." << std::endl;
    return 0;
}
