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

        // VERIFY
        assert(true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;

        // VERIFY
        assert(x.empty() == y.empty());
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.empty() == true);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.full() == false);
    }
    
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
        stack<int>  y = x;

        // VERIFY
        assert(x.empty() && y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;

        // VERIFY
        assert(x.full() == y.full());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(5);

        // VERIFY
        assert(x.pop() == 5);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(5);

        // VERIFY
        assert(x.top() == 5);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.empty());
        assert(x.full() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        x.pop();

        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        y = x;
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

        // TEST
        stack<int> y(x);

        // VERIFY
        assert(x.empty() && y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);

        // VERIFY
        assert(!x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        stack<int>  y(x);
        y.push(0);

        // VERIFY
        assert(!x.empty() && !y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        x.push(0);
        y.push(x.top());
        x.pop();

        // VERIFY
        assert(x.empty() && !y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        // TEST
        x.push(0);
        y.push(x.pop());

        // VERIFY
        assert(x.empty() && !y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char>  y;

        // TEST
        x.push('0');
        y.push(x.top());
        x.pop();

        // VERIFY
        assert(x.empty() && !y.empty());
    }

    // ADDED ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing default ctor & empty." << std::endl;
    return 0;
}

