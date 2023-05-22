#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public :
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		MateriaSource(std::string const & name);
		~MateriaSource();

		MateriaSource & operator=(const MateriaSource &rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private :
		std::string _name;
		AMateria* _mS[4];

};

#endif