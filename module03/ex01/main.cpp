#include "ScavTrap.hpp"

int main ( void )
{
	ScavTrap H("Hector");
	ClapTrap G("Gontran");
	H.attack(G.getName());
	G.takeDamage(H.getAttackDamage());
	return (0);
}