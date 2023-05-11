#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main ( void )
{
	ScavTrap H("Hector");

	ClapTrap G("Gontran");
	G.displayData("ClapTrap ");

	FragTrap K("Kevin");

	H.guardGate();
	H.attack(G.getName());
	G.takeDamage(H.getAttackDamage());
	G.beRepaired(15);
	G.attack(H.getName());
	K.attack(H.getName());
	H.takeDamage(K.getAttackDamage());
	H.beRepaired(15);
	K.highFivesGuys();
	return (0);
}