#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public :
		ClapTrap( void );
		ClapTrap( const ClapTrap &src );
		ClapTrap( std::string name );
		~ClapTrap();

		ClapTrap & operator=(const ClapTrap &rhs);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;
		void displayData( std::string str ) const;

	private :
		std::string _name;
		unsigned int _hit_pts;
		unsigned int _energy_pts;
		unsigned int _attack_damage;

};



#endif 