#include "../inc/Ice.hpp"

Ice::Ice() {
	this->_type = "ice";
	return ;
};
Ice::Ice( const Ice &src ) : AMateria() {
	*this = src;
	return ;
};

Ice::~Ice() {
	return ;
};

Ice & Ice::operator=(const Ice &rhs) {
	_type = rhs._type;
	return *this;
};

AMateria* Ice::clone() const {
	AMateria* clone = new Ice();
	return clone;
};

void Ice:: use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};