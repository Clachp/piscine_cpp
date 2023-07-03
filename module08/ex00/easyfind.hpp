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
		typename T::const_iterator it;
		it = std::find (target.begin(), target.end(), n);
  		if (it != target.end())
			std::cout << "value " << n << " is at index " << *it << std::endl;
  		else
			throw notFoundException();
	}
	catch (std:: exception &e){
		std::cerr << "Error\n" << "value " << n << " not found\n";
		std::cerr << e.what() << std::endl; 
	}
};

#endif