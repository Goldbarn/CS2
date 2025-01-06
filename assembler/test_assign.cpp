//  Stack class test program
//
//  Name: Rowan Ess
//  Tests: 20 
//

#include "stack.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        x = y;

        // VERIFY
        assert(x.empty() && y.empty());
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(1);
        stack<int>  y;

        // TEST
        y = x;

        // VERIFY
        assert(x.top() == 1 && y.top() == 1);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(1);
        stack<int>  y;
        y.push(2);

        // TEST
        y = x;

        // VERIFY
        assert(x.top() == 1 && y.top() == 1);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        stack<int>  y = x;

        // VERIFY
        assert(x.empty() && y.empty());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(1);

        // TEST
        stack<int> y = x;

        // VERIFY
        assert(x.top() == 1 && y.top() == 1);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(1);
        stack<int>  y;
        y.push(2);

        // TEST
        stack<int> z;
        z = x;
        z = y;

        // VERIFY
        assert(x.top() == 1 && y.top() == 2 && z.top() == 2);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        stack<int> y = x;
        y.push(5);
        x = y;

        // VERIFY
        assert(x.top() == 5 && y.top() == 5);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;
        stack<int>  z;
        x.push(1);

        // TEST
        y = x;
        x = z;
        z = y;
        y = x;

        // VERIFY
        assert(x.empty() && y.empty() && z.top() == 1);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(5);
        stack<int>  y;
        y.push(10);

        // TEST
        x = y;
        y = x;

        // VERIFY
        assert(x.top() == 10 && y.top() == 10);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char>  y;

        // TEST
        x = y;

        // VERIFY
        assert(x.empty() && y.empty());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        x.swap(y);

        // VERIFY
        assert(x.empty() && y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y(x);

        // TEST
        x.swap(y);

        // VERIFY
        assert(x.empty() && y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        x.push(1);
        x.swap(y);

        // VERIFY
        assert(x.empty() && y.top() == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        y.push(5);
        y.push(6);
        x.swap(y);

        // VERIFY
        assert(x.top() == 6 && y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;
        stack<int>  z;

        // TEST
        x.push(0);
        y.push(1);
        z.push(2);
        x.swap(y);
        y.swap(z);

        // VERIFY
        assert(x.pop() == 1 && y.pop() == 2 && z.pop() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char>  y;

        // TEST
        x.push('o');
        x.swap(y);

        // VERIFY
        assert(x.empty() && y.top() == 'o');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool>  y;

        // TEST
        x.push(true);
        y.push(false);
        x.swap(y);

        // VERIFY
        assert(!x.top() && y.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        x.push(0);
        y.push(1);
        x.swap(y);
        x.pop();
        y.pop();

        // VERIFY
        assert(x.empty() && y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        for (int i = 0; i < 50; ++i) { x.push(i); }
        for (int i = 0; i < 50; ++i) { y.push(50 - i); }
        x.swap(y);

        // VERIFY
        assert(x.top() == 1 && y.top() == 49);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<stack<int>>  x;
        stack<stack<int>>  y;

        // TEST
        x.swap(y);

        // VERIFY
        assert(x.empty() && y.empty());
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing assignment & swap" << std::endl;
    return 0;
}

