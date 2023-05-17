#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	public :
		AMateria();
		AMateria( const AMateria &src );
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria & operator=(const AMateria &rhs);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected :
		std::string _type; 

};

#endif