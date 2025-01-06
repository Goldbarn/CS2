//  String class test program
// 
//  Tests: 8
//
  
#include "string.hpp"
#include <cassert>
#include <iostream> 
#include <vector>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Hello there");

        // TEST
        std::vector<String> result = str.split(' ');

        // VERIFY
        assert(str    == "Hello there");
        assert(result[0] == "Hello");
        assert(result[1] == "there");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(" ");

        // TEST
        std::vector<String> result = str.split(' ');

        // VERIFY
        assert(str    == " ");
        assert(result[0] == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("123 45");

        // TEST
        std::vector<String> result = str.split(' ');

        // VERIFY
        assert(str    == "123 45");
        assert(result[0] == "123");
        assert(result[1] == "45");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("123 456 789");

        // TEST
        std::vector<String> result = str.split(' ');

        // VERIFY
        assert(str    == "123 456 789");
        assert(result[0] == "123");
        assert(result[1] == "456");
        assert(result[2] == "789");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("123 456 789 ");

        // TEST
        std::vector<String> result = str.split(' ');

        // VERIFY
        assert(str    == "123 456 789 ");
        assert(result[0] == "123");
        assert(result[1] == "456");
        assert(result[2] == "789");
        assert(result[3] == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("-----");

        // TEST
        std::vector<String> result = str.split('-');

        // VERIFY
        assert(str    == "-----");
        assert(result[0] == "");
        assert(result[1] == "");
        assert(result[2] == "");
        assert(result[3] == "");
        assert(result[4] == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("123 456 789 ");

        // TEST
        std::vector<String> result = str.split('-');

        // VERIFY
        assert(str    == "123 456 789 ");
        assert(result[0] == "123 456 789 ");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("bongo");

        // TEST
        std::vector<String> result = str.split('o');

        // VERIFY
        assert(str    == "bongo");
        assert(result[0] == "b");
        assert(result[1] == "ng");
        assert(result[2] == "");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing split." << std::endl;
    return 0;
}

