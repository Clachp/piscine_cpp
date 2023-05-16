#include "../inc/Animal.hpp"

A_Animal::A_Animal( ) : _type("A_animal") {
	std::cout << "A_Animal default constructor called" << std::endl;
	return ;
};
A_Animal::A_Animal( const A_Animal &src ) {
	std::cout << "A_Animal copy constructor called" << std::endl;
	*this = src;
	return ;
};
A_Animal::~A_Animal( ) {
	std::cout << "A_Animal destructor called 💀" << std::endl;
	return ;
};

A_Animal & A_Animal::operator=(const A_Animal &rhs) {
	this->_type = rhs._type;
	return (*this);
};

std::string A_Animal::getType( void ) const {
	return this->_type;
};