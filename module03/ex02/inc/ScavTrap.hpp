#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap( const ScavTrap &src );
		ScavTrap( std::string name );
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap &rhs);

		void attack(const std::string& target);
		void guardGate();

	private :

};

#endif 