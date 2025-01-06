//  String class test program
// 
//  Name:  concat
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
        String  left('a');
        String  right('b');

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "ab");
        assert(left   == "a");
        assert(right  == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Bag");
        String  right("Han");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "BagHan");
        assert(left   == "Bag");
        assert(right  == "Han");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Hello, ");
        String  right("World!");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "Hello, World!");
        assert(left   == "Hello, ");
        assert(right  == "World!");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right;

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == '\0');
        assert(left   == '\0');
        assert(right  == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("dog");
        String  right('B');

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "dogB");
        assert(left   == "dog");
        assert(right  == 'B');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('a');
        String  right('b');

        // TEST
        left += right;

        // VERIFY
        assert(left   == "ab");
        assert(right  == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("wongawongaongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawonga");
        String  right("wongawongawongawongawongawongawongawonga");

        // TEST
        String result;
        result = left + right;

        // VERIFY
        assert(result == "wongawongaongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawonga");
        assert(left   == "wongawongaongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawongawonga");
        assert(right  == "wongawongawongawongawongawongawongawonga");
    }    

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("      ");
        String  right("      ");

        // TEST
        left += right;

        // VERIFY
        assert(left   == "            ");
        assert(right  == "      ");
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing concat." << std::endl;
    return 0;
}
