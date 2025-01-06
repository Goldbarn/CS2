// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY COMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

//My tests

    {
      //------------------------------------------------------
      // Setup Fixture
      bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
      assert(right == 1);
      assert(result == 0);
    }

    {
      //--------------------------------------------------------
      // Setup Fixture
      bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify;
      assert(left == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
      assert(right == 1);
      assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }

    {
      //--------------------------------------------------------
      // Setup
      bigint left(3);
      bigint right(7);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left == 3);
      assert(right == 7);
      assert(result == 10);
    }

    {
        //------------------------------------------------------
        //setup
        bigint left(0);
        bigint right(0);
        bigint result;

        //test
        result = left + right;

        //verify
        assert(left == 0);
        assert(right == 0);
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        //setup
        bigint left(1000);
        bigint right(1010001100);
        bigint result;

        //test
        result = left + right;

        //verify
        assert(left == 1000);
        assert(right == 1010001100);
        assert(result == 1010002100);
    }

    {
        //------------------------------------------------------
        //setup
        bigint left("1");
        bigint right(0);
        bigint result;

        //test
        result = left + right;

        //verify
        assert(left == "1");
        assert(right == 0);
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        //setup
        bigint left("1");
        bigint right("0");
        bigint result;

        //test
        result = left + right;

        //verify
        assert(left == "1");
        assert(right == 0);
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        //setup
        bigint left("1");
        bigint right("0");
        bigint result;

        //test
        result = left + right;

        //verify
        assert(left == "1");
        assert(right == 0);
        assert(result == "1");
    }

    {
        //------------------------------------------------------
        //setup
        bigint left(1);
        bigint result;

        //test
        result = left + 1;

        //verify
        assert(left == 1);
        assert(result == 2);
    }

    {
        //------------------------------------------------------
        //setup
        bigint left("1");
        bigint result;

        //test
        result = left + "1";

        //verify
        assert(left == "1");
        assert(result == "2");
    }



    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

