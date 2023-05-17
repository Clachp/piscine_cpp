#include "../inc/IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {
	_name = "Unnamed source";
	for (int i = 0; i < 4; i++)
		this->_mS[i] = NULL;
	return ;
};
IMateriaSource::IMateriaSource( const IMateriaSource &src ) {
	*this = src;
	return ;
};
IMateriaSource::IMateriaSource(std::string const & name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_mS[i] = NULL;
	return ;
};
IMateriaSource::~IMateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		if (this->_mS[i])
			delete this->_mS[i];
	}
	return ;
};

IMateriaSource & IMateriaSource::operator=(const IMateriaSource &rhs) {
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_mS[i] = rhs._mS[i];
	}
	return *this;
};