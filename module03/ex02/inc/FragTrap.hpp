#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public :
		FragTrap();
		FragTrap( const FragTrap &src );
		FragTrap( std::string name );
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void) const;

	private :


};

#endif