#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template<typename T>
int easyfind (T const & target, int n) {
	for (int i = 0; i < target.size(); i++) {
		if (target[i] == n)
			return i; 
	}
	return -1;
};

#endif