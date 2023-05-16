#include "../inc/Dog.hpp"

Dog::Dog() : A_Animal(), _brain(NULL) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
};
Dog::Dog( const Dog &src ) : A_Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = "Copy_Dog";
	_brain = new Brain(*(src._brain));
	std::cout << "And here :" << std::endl;
	*this = src;
	return ;
};
Dog::~Dog( ) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
};

Dog & Dog::operator=(const Dog &rhs) {
	if (this != &rhs)
	{
		delete _brain;
		_brain = new Brain(*(rhs._brain));
		//this->_brain= rhs._brain;
	}
	return (*this);
};

void Dog::makeSound(void) const {                                                 
	std::cout << "The " << this->getType() << " goes woof 🐶" << std::endl;
};

Brain* Dog::getBrain( void ) const {
	return this->_brain;
} 