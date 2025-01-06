//  String class test program
// 
//  Name:  swap assign
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

        // SETUP
        String temp;
        String str;

        //TEST
        str = temp;

        // VERIFY
        assert(str == '\0');
        assert(temp == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // SETUP
        String temp('a');
        String  str;

        //TEST
        str = temp;

        // VERIFY
        assert(str == 'a');
        assert(temp == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // SETUP
        String temp("hello");
        String  str;

        //TEST
        str = temp;


        // VERIFY
        assert(str == "hello");
        assert(temp == "hello");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // setup
        String temp("Hello, welcome to my pretty little pepperoni palace, the perfect place to play pinochle.");
        String  str;

        //test
        str = temp;

        // VERIFY
        assert(str == "Hello, welcome to my pretty little pepperoni palace, the perfect place to play pinochle.");
        assert(temp == "Hello, welcome to my pretty little pepperoni palace, the perfect place to play pinochle.");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // setup
        String temp("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam efficitur blandit arcu, finibus tincidunt turpis accumsan ac. In pharetra laoreet neque, eget blandit sem consequat ac. Nam pretium, magna id lacinia semper, neque nisl convallis tortor, vitae vestibulum mauris risus in dui. Suspendisse id tellus ut tortor suscipit ultricies at at ante. Nunc nec blandit nisi. Nulla auctor, purus ultricies semper vulputate, lacus velit suscipit purus, eu pharetra nisl orci et felis. Nam facilisis eget augue nec suscipit. Mauris dictum arcu nec urna congue, in rutrum metus elementum. Proin accumsan quis tellus at bibendum. Nulla iaculis velit ex, quis sodales urna posuere a. Nullam pretium ipsum ante, elementum accumsan mi euismod sit amet.");
        String  str;

        //test
        str = temp;

        // VERIFY
        assert(str == "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam efficitur blandit arcu, finibus tincidunt turpis accumsan ac. In pharetra laoreet neque, eget blandit sem consequat ac. Nam pretium, magna id lacinia semper, neque nisl convallis tortor, vitae vestibulum mauris risus in dui. Suspendisse id tellus ut tortor suscipit ultricies at at ante. Nunc nec blandit nisi. Nulla auctor, purus ultricies semper vulputate, lacus velit suscipit purus, eu pharetra nisl orci et felis. Nam facilisis eget augue nec suscipit. Mauris dictum arcu nec urna congue, in rutrum metus elementum. Proin accumsan quis tellus at bibendum. Nulla iaculis velit ex, quis sodales urna posuere a. Nullam pretium ipsum ante, elementum accumsan mi euismod sit amet.");
        assert(temp == "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam efficitur blandit arcu, finibus tincidunt turpis accumsan ac. In pharetra laoreet neque, eget blandit sem consequat ac. Nam pretium, magna id lacinia semper, neque nisl convallis tortor, vitae vestibulum mauris risus in dui. Suspendisse id tellus ut tortor suscipit ultricies at at ante. Nunc nec blandit nisi. Nulla auctor, purus ultricies semper vulputate, lacus velit suscipit purus, eu pharetra nisl orci et felis. Nam facilisis eget augue nec suscipit. Mauris dictum arcu nec urna congue, in rutrum metus elementum. Proin accumsan quis tellus at bibendum. Nulla iaculis velit ex, quis sodales urna posuere a. Nullam pretium ipsum ante, elementum accumsan mi euismod sit amet.");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // setup
        String temp("ampersnad, blampersnad\nbogo");
        String  str("wagoo");

        //test
        str = temp;

        // VERIFY
        assert(str == "ampersnad, blampersnad\nbogo");
        assert(temp == "ampersnad, blampersnad\nbogo");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // setup
        String temp(" dingus ");
        String  str("dongo");

        //test
        str = temp;

        // VERIFY
        assert(str == " dingus ");
        assert(str == " dingus ");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // setup
        String temp(' ');
        String  str("winglebang");

        //test
        str = temp;

        // VERIFY
        assert(str == ' ');
        assert(temp == ' ');
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing swap." << std::endl;
    return 0;
}
