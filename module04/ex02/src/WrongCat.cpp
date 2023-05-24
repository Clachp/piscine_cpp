#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( ) : WrongAnimal() {
	std::cout << "WrongCat default constructor called 🐱" << std::endl;
	this->_type = "WrongCat";
	return ;
};
WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal(src) {
	std::cout << "WrongCat copy constructor called 🐱🐱" << std::endl;
	*this = src;
	return ;
};
WrongCat::~WrongCat( ) {
	std::cout << "WrongCat destructor called 💀🐱💀" << std::endl;
	return ;
};

void WrongCat::makeSound(void) const {
	std::cout << "The Wrongcat goes mew 🐱" << std::endl;
};                                         