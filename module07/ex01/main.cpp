#include "iter.hpp"

int main (void)
{
	int array[] = { 1, 2, 3, 4, 5 };
    size_t size = sizeof(array) / sizeof(array[0]);

    iter<int>(array, size, printElem<int>);

	//iter<int>(array, size, checkValue<int>); checkValue prend plusieurs parametres 
	return 0;
}