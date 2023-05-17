#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	public :
		Character();
		Character( const Character &src );
		Character(std::string const & type);
		virtual ~Character();

		Character & operator=(const Character &rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, Character& target);

	private :
		
};

#endif