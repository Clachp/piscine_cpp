#include "Base.hpp"

int main (void) 
{
	Base *one = generate();;
	identify(one);
	identify(*one);
	delete one;

	Base *two = NULL;
	identify(two);
	identify(*two);

	return 0;
}