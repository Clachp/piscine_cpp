#include "../inc/Animal.hpp"

Animal::Animal( ) : _type("animal") {
	std::cout << "Animal default constructor called" << std::endl;
	return ;
};
Animal::Animal( const Animal &src ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
};
Animal::~Animal( ) {
	std::cout << "Animal destructor called 💀" << std::endl;
	return ;
};

Animal & Animal::operator=(const Animal &rhs) {
	this->_type = rhs._type;
	return (*this);
};

std::string Animal::getType( void ) const {
	return this->_type;
};

void Animal::makeSound(void) const {
	std::cout << this->_type << " goes what ?!" << std::endl;
};