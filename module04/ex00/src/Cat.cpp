#include "../inc/Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "cat 🐱";
	return ;
};
Cat::Cat( const Cat &src ) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
};
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	return ;
};

void Cat::makeSound(void) const {
	std::cout << "The cat goes mew 🐱" << std::endl;
};