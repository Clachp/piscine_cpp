#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <deque>
#include <list>

template<typename T>
void easyfind (T const & target, int n) {
	try {
		for (size_t i = 0; i < target.size(); i++) {
			if (target[i] == n) {
				std::cout << "value " << n << " is at index " << i << std::endl;
				return ; 
			}
			throw std::exception();
		}
	}
	catch (std:: exception &e){
		std::cerr << "Error\n" << "value " << n << " not found\n";
		std::cerr << e.what() << std::endl; 
	}
}
#endif