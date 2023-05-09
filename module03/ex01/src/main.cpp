#include "../inc/ScavTrap.hpp"

int main ( void )
{
	ScavTrap H("Hector");
	ScavTrap L;
	ClapTrap G("Gontran");
	H.attack(G.getName());
	L.guardGate();
	G.takeDamage(H.getAttackDamage());
	return (0);
}