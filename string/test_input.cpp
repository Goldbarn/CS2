//  String class test program
// 
//  Name:  input
//  Tests: 6
//
 
#include "string.hpp"
#include <cassert>
#include <iostream> 
#include <fstream>

//===========================================================================
int main ()
{

std::ifstream in("test_words.txt");

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;

        // TEST
        in >> result;

        // VERIFY
        assert(result == "hello");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;

        // TEST
        in >> result;

        // VERIFY
        assert(result == "friend");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;

        // TEST
        in >> result;

        // VERIFY
        assert(result == "my");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;

        // TEST
        in >> result;

        // VERIFY
        assert(result == "cats");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;

        // TEST
        in >> result;

        // VERIFY
        assert(result == "are");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  result;

        // TEST
        in >> result;

        // VERIFY
        assert(result == "better");
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing input." << std::endl;
    return 0;
}
