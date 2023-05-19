#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_name = "Unnamed source";
	for (int i = 0; i < 4; i++)
		this->_mS[i] = NULL;
	return ;
};
MateriaSource::MateriaSource( const MateriaSource &src ) {
	*this = src;
	return ;
};
MateriaSource::MateriaSource(std::string const & name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_mS[i] = NULL;
	return ;
};

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		if (this->_mS[i])
			delete this->_mS[i];
	}
	return ;
};

MateriaSource & MateriaSource::operator=(const MateriaSource &rhs) {
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_mS[i] = rhs._mS[i];
	}
	return *this;
};