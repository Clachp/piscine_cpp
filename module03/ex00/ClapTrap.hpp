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

		std::string getName(void);
		int getHitPoints(void);
		int getEnergyPoints(void);
		int getAttackDamage(void);
		void displayData( void );

	private :
		std::string _name;
		unsigned int _hit_pts;
		unsigned int _energy_pts;
		unsigned int _attack_damage;

};



#endif 