#include "../inc/Cat.hpp"

Cat::Cat() : Animal(), _brain(0) {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
};
Cat::Cat( const Cat &src ) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*(src._brain));
	*this = src;
	return ;
};
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
};

Cat & Cat::operator=(const Cat &rhs) {
	this->_brain = rhs._brain;
	return (*this);
};

void Cat::makeSound(void) const {
	std::cout << "The cat goes mew 🐱" << std::endl;
};