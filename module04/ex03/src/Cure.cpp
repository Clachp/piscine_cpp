#include "../inc/Cure.hpp"

Cure::Cure() {
	this->_type = "cure";
	return ;
};
Cure::Cure( const Cure &src ) : AMateria() {
	*this = src;
	return ;
};

Cure::~Cure() {
	return ;
};

Cure & Cure::operator=(const Cure &rhs) {
	_type = rhs._type;
	return *this;
};

AMateria* Cure::clone() const {
	AMateria* clone = new Cure();
	return clone;
};

void Cure:: use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};