#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
	return ;
};
Brain::Brain( const Brain &src ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
};
Brain::~Brain( ) {
	std::cout << "Brain destructor called" << std::endl;
	return ;
};

Brain & Brain::operator=(const Brain &rhs) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
};