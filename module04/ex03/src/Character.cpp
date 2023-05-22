#include "../inc/Character.hpp"

Character::Character()  {
	this->_name = "Unnamed character";
	for (int i = 0; i < 4; i++)
		this->_m[i] = NULL;
	return ;
};
Character::Character( const Character &src ) {
	*this = src;
	return ;
};

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_m[i])
			delete this->_m[i], this->_m[i] = NULL;
};

Character::Character(std::string const & name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_m[i] = NULL;
	return ;
};

Character & Character::operator=(const Character &rhs) {
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
			delete _m[i];
		for (int i = 0; i < 4; i++)
			this->_m[i] = rhs._m[i]->clone();
	}
	return *this;
};

std::string const & Character::getName() const {
	return this->_name;
};

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (_m[i] == NULL)
			return (void)(_m[i] = m);
	}
};

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		std::cout << "Index " << idx << " is out of range." << std::endl;
	else if (_m[idx])
	{
		std::cout << _m[idx]->getType() << " removed" << std::endl;
		_m[idx] = NULL;
	}
	else
		std::cout << "Nothing to remove at index " << idx << std::endl;
};

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3 && _m[idx])
		_m[idx]->use(target);
};