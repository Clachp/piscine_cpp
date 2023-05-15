#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	public :
		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain & operator=(const Brain &rhs);

	private :
		std::string _ideas[100];
};

#endif