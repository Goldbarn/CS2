//  String class test program
//
//  Tests: 9 
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
        String temp;
        String  str(temp);

        // VERIFY
        assert(str == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String temp('a');
        String  str(temp);

        // VERIFY
        assert(str == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String temp("hello");
        String  str(temp);

        // VERIFY
        assert(str == "hello");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String temp("Hello, welcome to my pretty little pepperoni palace, the perfect place to play pinochle.");
        String  str(temp);

        // VERIFY
        assert(str == "Hello, welcome to my pretty little pepperoni palace, the perfect place to play pinochle.");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String temp("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam efficitur blandit arcu, finibus tincidunt turpis accumsan ac. In pharetra laoreet neque, eget blandit sem consequat ac. Nam pretium, magna id lacinia semper, neque nisl convallis tortor, vitae vestibulum mauris risus in dui. Suspendisse id tellus ut tortor suscipit ultricies at at ante. Nunc nec blandit nisi. Nulla auctor, purus ultricies semper vulputate, lacus velit suscipit purus, eu pharetra nisl orci et felis. Nam facilisis eget augue nec suscipit. Mauris dictum arcu nec urna congue, in rutrum metus elementum. Proin accumsan quis tellus at bibendum. Nulla iaculis velit ex, quis sodales urna posuere a. Nullam pretium ipsum ante, elementum accumsan mi euismod sit amet.");
        String  str(temp);

        // VERIFY
        assert(str == "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam efficitur blandit arcu, finibus tincidunt turpis accumsan ac. In pharetra laoreet neque, eget blandit sem consequat ac. Nam pretium, magna id lacinia semper, neque nisl convallis tortor, vitae vestibulum mauris risus in dui. Suspendisse id tellus ut tortor suscipit ultricies at at ante. Nunc nec blandit nisi. Nulla auctor, purus ultricies semper vulputate, lacus velit suscipit purus, eu pharetra nisl orci et felis. Nam facilisis eget augue nec suscipit. Mauris dictum arcu nec urna congue, in rutrum metus elementum. Proin accumsan quis tellus at bibendum. Nulla iaculis velit ex, quis sodales urna posuere a. Nullam pretium ipsum ante, elementum accumsan mi euismod sit amet.");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String temp("ampersnad, blampersnad\nbogo");
        String  str(temp);

        // VERIFY
        assert(str == "ampersnad, blampersnad\nbogo");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String temp(" dingus ");
        String  str(temp);

        // VERIFY
        assert(str == " dingus ");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String temp(' ');
        String  str(temp);

        // VERIFY
        assert(str == ' ');
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing copy." << std::endl;
    return 0;
}

