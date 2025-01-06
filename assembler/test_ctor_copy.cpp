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

        // TEST
        stack<int>  x;
        stack<int>  y(x);

        // VERIFY
        assert(y.empty() && x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(567);
        stack<int> y(x);

        // VERIFY
        assert(x.top() == 567 && y.top() == 567);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y(x);
        stack<int>  z(x);

        // VERIFY
        assert(x.empty() && y.empty() && z.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y(x);
        stack<int>  z(y);

        // VERIFY
        assert(x.empty() && y.empty() && z.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(55);
        stack<int>  y(x);
        stack<int>  z(x);

        // VERIFY
        assert(x.top() == 55 && y.top() == 55 && z.top() == 55);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(55);
        stack<int>  y(x);
        stack<int>  z(y);

        // VERIFY
        assert(x.top() == 55 && y.top() == 55 && z.top() == 55);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(55);
        stack<int>  y;
        y.push(44);
        stack<int>  z(x);
        stack<int>  w(y);
        z = w;

        // VERIFY
        assert(x.top() == 55 && y.top() == 44 && z.top() == 44 && w.top() == 44);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;
        x.push('a');
        stack<char>  y(x);

        // VERIFY
        assert(y.top() == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y(x);

        // VERIFY
        assert(!y.full() && !x.full());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(1);
        x.push(2);
        stack<int>  y(x);
        x.pop();
        stack<int>  z(x);

        // VERIFY
        assert(x.top() == 1 && y.top() == 2 && z.top() == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);

        // VERIFY
        assert(x.top() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        x.push(0);

        // VERIFY
        assert(x.top() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        stack<int>  y(x);

        // VERIFY
        assert(x.top() == 0 && y.top() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        x.push(0);
        x.pop();

        // VERIFY
        assert(x.top() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        x.push(0);
        y.push(1);
        x = y;

        // VERIFY
        assert(x.top() == 1 && y.top() == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        for (int i = 0; i < 20; ++i) { x.push(0); }

        // VERIFY
        assert(x.top() == 0);
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

        // VERIFY
        assert(x.top() == 1 && y.top() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('b');

        // VERIFY
        assert(x.top() == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;

        // TEST
        x.push(true);

        // VERIFY
        assert(x.top() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(1234567890);

        // VERIFY
        assert(x.top() == 1234567890);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing copy ctor & top." << std::endl;
    return 0;
}

