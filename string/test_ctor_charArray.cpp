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
        String  str("Hello, World!");

        // VERIFY
        assert(str == "Hello, World!");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("he   he");

        // VERIFY
        assert(str == "he   he");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbb");

        // VERIFY
        assert(str == "abbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbbaabbbbbb");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("  ");

        // VERIFY
        assert(str == "  ");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("For so many days, I eat potatoes.");

        // VERIFY
        assert(str == "For so many days, I eat potatoes.");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("what\ndo\nyou\nmean\ni\nam\nalling\n\n\n\noh\nno");

        // VERIFY
        assert(str == "what\ndo\nyou\nmean\ni\nam\nalling\n\n\n\noh\nno");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("           ");

        // VERIFY
        assert(str == "           ");
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing array constructor." << std::endl;
    return 0;
}

