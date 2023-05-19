#include "../inc/AMateria.hpp"

AMateria::AMateria() {
	return ;
};
AMateria::AMateria( const AMateria &src ) {
	*this = src;
	return ;
};
AMateria::AMateria(std::string const & type) : _type(type) {
	return ;
};

AMateria::~AMateria() {
	return ;
};

AMateria & AMateria::operator=(const AMateria &rhs) {
	_type = rhs._type;
	return *this;
};

std::string const & AMateria::getType() const {
	return this->_type;
};