#include "../inc/ICharacter.hpp"

ICharacter::ICharacter() {
	this->_name = "Unnamed character";
	for (int i = 0; i < 4; i++)
		this->_m[i] = NULL;
	return ;
};
ICharacter::ICharacter(std::string const & name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_m[i] = NULL;
	return ;
};
ICharacter::ICharacter( const ICharacter &src ) {
	*this = src;
	return ;
};

ICharacter::~ICharacter() {
	for (int i = 0; i < 4; i++)
		delete this->_m[i];
};

ICharacter & ICharacter::operator=(const ICharacter &rhs) {
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_m[i] = rhs._m[i];
	}
	return *this;
};
