#include "../inc/Cat.hpp"

Cat::Cat() : A_Animal(), _brain(0) {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
};
Cat::Cat( const Cat &src ) : A_Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = "Copy_Cat";
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
	if (this != &rhs)
	{
		delete _brain;
		_brain = new Brain(*(rhs._brain));
		//this->_brain= rhs._brain;
	}
	return (*this);
};

void Cat::makeSound(void) const {
	std::cout << "The cat goes mew 🐱" << std::endl;
};