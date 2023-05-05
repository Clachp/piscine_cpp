#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap J("Joe");
	ClapTrap M("Marcel");
	J.attack(M.getName());
	M.takeDamage(J.getAttackDamage());
	M.beRepaired(2);
	return (0);
}