#include "../inc/Dog.hpp"

Dog::Dog() : _brain(NULL) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
};
Dog::Dog( const Dog &src ) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*(src._brain));
	*this = src;
	return ;
};
Dog::~Dog( ) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
};

Dog & Dog::operator=(const Dog &rhs) {
	this->_brain = rhs._brain;
	return (*this);
};

void Dog::makeSound(void) const {                                                 
	std::cout << "The dog goes woof 🐶" << std::endl;
};