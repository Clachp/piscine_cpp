#include "easyfind.hpp"

int main (void)
{
	std::vector<int> tab(8, 40);
	tab.assign(4, 20);
	easyfind(tab, 20);

	return 0;
}