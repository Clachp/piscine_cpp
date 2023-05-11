#include "../inc/ScavTrap.hpp"

int main ( void )
{
	ScavTrap H("Hector");
	H.displayData("ScavTrap ");
	ScavTrap L;
	L.displayData("ScavTrap ");
	ClapTrap G("Gontran");
	G.displayData("ClapTrap ");
	
	H.attack(G.getName());
	G.takeDamage(H.getAttackDamage());
	
	G.attack(L.getName());
	L.takeDamage(G.getHitPoints());
	
	H.guardGate();

	L.attack(H.getName());
	H.takeDamage(L.getHitPoints());
	return (0);
}