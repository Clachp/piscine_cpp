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
		std::string getIdea( int i ) const;
		void setIdea( std::string idea, int i );

	private :
		std::string _ideas[100];
};

#endif