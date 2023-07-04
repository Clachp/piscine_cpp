#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

class notFoundException : public std::exception {
	public :
		virtual const char* what() const throw () {
			return "Occcurence not found exception\n";
		}
};

template<typename T>
void easyfind (T const & target, int n) {
	try {
		int range = 0;
		typename T::const_iterator it = target.begin();
		// it = std::find (target.begin(), target.end(), n);
		while (it != target.end()) {
			if (*it == n) {
				std::cout << "value " << n << " is at index " << range << std::endl;
				return ;
			} 
			range++;
			++it;
		}		
		throw notFoundException();
	}
	catch (std:: exception &e){
		std::cerr << "Error\n" << "value " << n << " not found\n";
		std::cerr << e.what() << std::endl; 
	}
};

#endif