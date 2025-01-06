//  String class test program
// 
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
        String  str("aaaaaaaaaa");

        // TEST
        String result = str.substr(0, 2);

        // VERIFY
        assert(str    == "aaaaaaaaaa");
        assert(result == "aaa");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("aabbbaa");

        // TEST
        String result = str.substr(2, 5);

        // VERIFY
        assert(str    == "aabbbaa");
        assert(result == "bbba");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(" fin dan gle ");

        // TEST
        String result = str.substr(2, 5);

        // VERIFY
        assert(str    == " fin dan gle ");
        assert(result == "in d");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Hello, World!");

        // TEST
        String result = str.substr(3, 8);

        // VERIFY
        assert(str    == "Hello, World!");
        assert(result == "lo, Wo");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str('g');

        // TEST
        String result = str.substr(0, 0);

        // VERIFY
        assert(str    == 'g');
        assert(result == "g");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("folio");

        // TEST
        String result = str.substr(3, 5);

        // VERIFY
        assert(str    == "folio");
        assert(result == "io");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing substring." << std::endl;
    return 0;
}
