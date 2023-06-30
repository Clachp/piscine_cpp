#include "iter.hpp"

int main (void)
{
	int array[] = { 1, 2, 3, 4, 5 };
    size_t size = sizeof(array) / sizeof(array[0]);
	std::cout << "Print int array" << std::endl;
    ::iter<int>(array, size, printElem<int>);
	std::cout << std::endl;
	std::cout << "Increment int to 10" << std::endl;
	iter<int>(array, size, up10<int>);
	std::cout << std::endl;

	char tab[] = { 'a', 'r', 't', '!', '4'};
	size_t tab_size = sizeof(tab) / sizeof(tab[0]);
	std::cout << "Increment char to 10" << std::endl;
	iter<char>(tab, tab_size, up10<char>);
	return 0;
}