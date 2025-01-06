//  Stack class test program
//
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
        x.push(1234567890);
        x.push(0);

        // VERIFY
        assert(x.top() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(15);
        stack<int>  y(x);

        // VERIFY
        assert(x.top() == 15 && y.top() == 15);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        x.push(9999999);
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
        x.push(987575637);
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
        for (int i = 0; i < 20; ++i) { x.push(i); }

        // VERIFY
        assert(x.top() == 19);
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

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);

        // VERIFY
        assert(x.pop() == 0);
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

        // TEST
        x.push(0);
        x.push(1);

        // VERIFY
        assert(x.pop() == 1 && x.pop() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        stack<int>  y(x);
        y.push(1);


        // VERIFY
        assert(x.pop() == 0 && y.pop() == 1 && y.pop() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(0);
        stack<int>  y = x;
        y.push(1);


        // VERIFY
        assert(x.pop() == 0 && y.pop() == 1 && y.pop() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        for (int i = 0; i < 50; ++i) { x.push(0); }
        for (int i = 0; i < 50; ++i) { x.pop(); }

        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(1903248751);

        // VERIFY
        assert(x.pop() == 1903248751);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('b');

        // VERIFY
        assert(x.pop() == 'b');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('b');
        x.pop();

        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;

        // TEST
        x.push(true);

        // VERIFY
        assert(x.pop() == true);
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing push pop." << std::endl;
    return 0;
}

