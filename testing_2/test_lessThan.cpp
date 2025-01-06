#include <iostream>
#include "string.hpp"

int main (){

	{
		String a;
		String b;

		bool c = a < b;

		assert(c == false);
	}

	{
		String a;
		String b('a');

		bool c = a < b;

		assert(c == true);
	}

	{
		String a('a');
		String b('b');

		bool c = a < b;

		assert(c == true);
	}

	{
		String a("abacus");
		String b("zettlecast");

		bool c = a < b;

		assert(c == true);
	}

	{
		String a("abacus");
		String b('b');

		bool c = a < b;

		assert(c == true);
	}

	{
		String a("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccc");
		String b("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccd");

		bool c = a < b;

		assert(c = true);
	}

	// lessthanequalto

	{
		String a;
		String b;

		bool c = a <= b;

		assert(c == true);
	}

	{
		String a;
		String b('a');

		bool c = a <= b;

		assert(c == true);
	}

	{
		String a('a');
		String b('b');

		bool c = a <= b;

		assert(c == true);
	}

	{
		String a("abacus");
		String b("zettlecast");

		bool c = a <= b;

		assert(c == true);
	}

	{
		String a("abacus");
		String b('b');

		bool c = a <= b;

		assert(c == true);
	}

	{
		String a("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccc");
		String b("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccd");

		bool c = a <= b;

		assert(c = true);
	}


return 0;
}
