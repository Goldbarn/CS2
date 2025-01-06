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
        String  str("aaaAaaa");

        // TEST
        int result = str.findch(0, 'A');

        // VERIFY
        assert(str    == "aaaAaaa");
        assert(result == 3);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str('X');

        // TEST
        int result = str.findch(0, 'X');

        // VERIFY
        assert(str    == 'X');
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Wing Ding");

        // TEST
        int result = str.findch(0, ' ');

        // VERIFY
        assert(str    == "Wing Ding");
        assert(result == 4);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abana");

        // TEST
        int result = str.findch(1, 'a');

        // VERIFY
        assert(str    == "abana");
        assert(result == 2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("zen");

        // TEST
        int result = str.findch(1, 'n');

        // VERIFY
        assert(str    == "zen");
        assert(result == 2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str;

        // TEST
        int result = str.findch(0, '\0');

        // VERIFY
        assert(str    == '\0');
        assert(result == -1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("lseifvnoiwenfvoiubwoeirvhoajsboiuvhakbefvoiuaehrvohwbqervyubaoefhvbouaehfbvoisdhfvioaeuhvoaueygvoqhevoyqegbojvhqef08uvwingding");

        // TEST
        int result = str.findch(0, 'q');

        // VERIFY
        assert(str    == "lseifvnoiwenfvoiubwoeirvhoajsboiuvhakbefvoiuaehrvohwbqervyubaoefhvbouaehfbvoisdhfvioaeuhvoaueygvoqhevoyqegbojvhqef08uvwingding");
        assert(result != -1);
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing findch." << std::endl;
    return 0;
}
