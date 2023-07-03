#include "easyfind.hpp"

int main (void)
{
	// vector : ~tableau
	std::vector<int> tab(4, 42);
	for (int i = 1; i < 8; i++)
		tab.push_back(i + 5);
	 std::cout << "vector tab contains:";
	for (std::vector<int>::iterator it = tab.begin() ; it != tab.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	easyfind(tab, -40);

	//list : ~liste doublement chainée 
	std::list<int>lst(5, 100);
	easyfind(lst, 100);

	//deque
	std::deque<int>deq = [5, 78, 40, -4, 0]; // declarer deque
	easyfind(tab, 0);

	return 0;
}