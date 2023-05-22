#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called 🧠" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "no idea here";
	return ;
};

Brain::Brain( const Brain &src ) {
	std::cout << "Brain copy constructor called 🧠🧠" << std::endl;
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

std::string Brain::getIdea( int i ) const {
	if (this->_ideas[i] != "")
		return this->_ideas[i];
	return NULL;
};

void Brain::setIdea( std::string idea, int i ) {
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << i << " is out of the 100 ideas range" << std::endl;
};
