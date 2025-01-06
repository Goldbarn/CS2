//  String class test program
// 
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
        String  str("aaaaa");

        // TEST
        int result = str.findstr(0, "aaa");

        // VERIFY
        assert(str    == "aaaaa");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Bagel");

        // TEST
        int result = str.findstr(0, "ge");

        // VERIFY
        assert(str    == "Bagel");
        assert(result == 2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("ambrose");

        // TEST
        int result = str.findstr(0, "se");

        // VERIFY
        assert(str    == "ambrose");
        assert(result == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("banana");

        // TEST
        int result = str.findstr(3, "na");

        // VERIFY
        assert(str    == "banana");
        assert(result == 4);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Hello, World!");

        // TEST
        int result = str.findstr(0, "World");

        // VERIFY
        assert(str    == "Hello, World!");
        assert(result == 7);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Bagel, Bagel");

        // TEST
        int result = str.findstr(2, "Bagel");

        // VERIFY
        assert(str    == "Bagel, Bagel");
        assert(result == 7);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("ahfbvoqhebviohabelfuihvskjhergvolahbvweoivhuqowepoqodvqcodshucboqpsdhvpqhasdocashdbcozjxcnoihqabedcoqaygsdfpviougqbowjehbocvaushdbcovhaqgwevoohbwingding");

        // TEST
        int result = str.findstr(2, "wingding");

        // VERIFY
        assert(str    == "ahfbvoqhebviohabelfuihvskjhergvolahbvweoivhuqowepoqodvqcodshucboqpsdhvpqhasdocashdbcozjxcnoihqabedcoqaygsdfpviougqbowjehbocvaushdbcovhaqgwevoohbwingding");
        assert(result != -1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Bagel, Bagel");

        // TEST
        int result = str.findstr(2, "Bagel, Bagel ");

        // VERIFY
        assert(str    == "Bagel, Bagel");
        assert(result == -1);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing find string." << std::endl;
    return 0;
}
