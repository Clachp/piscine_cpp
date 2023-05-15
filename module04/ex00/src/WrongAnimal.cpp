#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( ) : _type("wrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
};
WrongAnimal::WrongAnimal( const WrongAnimal &src ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
};
WrongAnimal::~WrongAnimal( ) {
	std::cout << "WrongAnimal destructor called 💀" << std::endl;
	return ;
};

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs) {
	this->_type = rhs._type;
	return (*this);
};

std::string WrongAnimal::getType( void ) const {
	return this->_type;
};

void WrongAnimal::makeSound ( void ) const {
	std::cout << this->_type << " goes cocorico" << std::endl;
};