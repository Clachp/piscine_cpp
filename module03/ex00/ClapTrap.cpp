#include "ClapTrap.hpp"

/* CONSTRUCTORS */
ClapTrap::ClapTrap ( void ) : _hit_pts(10), _energy_pts(10), _attack_damage(0) {
	std::cout << "Default constructor called" << std::endl;
	this->displayData();
	return ;	
};
ClapTrap::ClapTrap( const ClapTrap &src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	this->displayData();
	return ;
};
ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_pts(10), _energy_pts(10), _attack_damage(0) {
	this->displayData();
	return ;
};

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
	return ;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	this->_attack_damage = rhs._attack_damage; 
	this->_energy_pts = rhs._energy_pts;
	this->_hit_pts = rhs._hit_pts;
	this->_name = rhs._name;
	return (*this);
};

std::string ClapTrap::getName( void ) {
	return this->_name;
};
int ClapTrap::getHitPoints( void ) {
	return this->_hit_pts;
};
int ClapTrap::getEnergyPoints( void ) {
	return this->_energy_pts;
};
int ClapTrap::getAttackDamage( void ) {
	return this->_attack_damage;
};

void ClapTrap::displayData( void) {
	std::cout << _name << " has : " << std::endl;
	std::cout << _hit_pts << " hit points," << std::endl;
	std::cout << _energy_pts << " energy points," << std::endl;
	std::cout << _attack_damage << " attack dammages" << std::endl;
	std::cout << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_energy_pts--;
		this->_attack_damage++;
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl << std::endl;
	}
	else if (this->_hit_pts == 0)
		std::cout << this->_name << " has no hit points to attack " << target << std::endl;
	else if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy points to attack " << target << std::endl;
	std::cout << "Now ";
	displayData();
};
void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_hit_pts -= amount;
		this->_energy_pts--;
		std::cout << this->_name << " took a damage of " << amount << " points." << std::endl << std::endl;
	}
	std::cout << "Now ";
	displayData();
};
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_hit_pts += amount;
		this->_energy_pts--;
		std::cout << this->_name << " get repaired of " << amount << " points." << std::endl << std::endl;
	}
	std::cout << "Now ";
	displayData();
};

