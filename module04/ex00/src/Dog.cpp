#include "../inc/Dog.hpp"

Dog::Dog( ) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "dog 🐶";
	return ;
};
Dog::Dog( const Dog &src ) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
};
Dog::~Dog( ) {
	std::cout << "Dog destructor called" << std::endl;
	return ;
};

void Dog::makeSound(void) const {                                                 
	std::cout << "The dog goes woof 🐶" << std::endl;
};