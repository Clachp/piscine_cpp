#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public :
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		MateriaSource(std::string const & name);
		virtual ~MateriaSource();

		IMateriaSource & operator=(const IMateriaSource &rhs);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	protected :
		std::string _name;
		AMateria* _mS[4];

};

#endif