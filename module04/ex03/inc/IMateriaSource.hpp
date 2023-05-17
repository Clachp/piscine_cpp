#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource {
	public :
		IMateriaSource();
		IMateriaSource( const IMateriaSource &src );
		IMateriaSource(std::string const & name);
		virtual ~IMateriaSource();

		IMateriaSource & operator=(const IMateriaSource &rhs);

		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

	protected :
		std::string _name;
		AMateria* _mS[4];

};

#endif