#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	return ;
};
MateriaSource::MateriaSource( const MateriaSource &src ) {
	return ;
};
MateriaSource::MateriaSource(std::string const & name) {
	return ;
};
MateriaSource::~MateriaSource() {
	return ;
};

IMateriaSource & MateriaSource::operator=(const IMateriaSource &rhs) {

};

void MateriaSource::learnMateria(AMateria*) {

};
AMateria* MateriaSource::createMateria(std::string const & type) {

};