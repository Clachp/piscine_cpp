#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
class ICharacter;

class Character : public ICharacter {
	public :
		Character();
		Character( const Character &src );
		Character(std::string const & type);
		~Character();

		Character & operator=(const Character &rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private :
		std::string _name;
		AMateria* _m[4];
		
};

#endif