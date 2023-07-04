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
	easyfind(tab, 12);

	//list : ~liste doublement chainée 
	std::list<int>lst(5, 100);
	easyfind(lst, 100);

	//deque
	std::deque<int>deq;	
	for (int i= 0; i < 8; i++) 
		deq.insert(deq.end(), i *3);
	std::cout << "deq contains:";
	std::deque<int>::iterator it = deq.begin();
	while (it != deq.end())
		std::cout << ' ' << *it++;
	std::cout << '\n';
	easyfind(deq, 6);
	return 0;
}