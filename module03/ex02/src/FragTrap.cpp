#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_damage = 30;
	this->displayData("FragTrap ");
	return ;	
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap parameter constructor called to instance " << _name << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_damage = 30;
	this->displayData("FragTrap ");
	return ;	
};

void FragTrap::attack(const std::string& target) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_energy_pts--;
		std::cout << "FragTrap " << this->_name;
		std::cout << " attacks " << target << ", causing ";
		std::cout << this->_attack_damage << " points of damage !" << std::endl;
	}
	else if (this->_hit_pts == 0)
		std::cout << this->_name << " has no hit points to attack " << target << std::endl;
	else if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy points to attack " << target << std::endl;
	std::cout << "Now ";
	displayData("FragTrap ");
};

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " is asking for a high five." << std::endl;
};

FragTrap::~FragTrap() {
	if (_name != "")
		std::cout << "FragTrap destructor called to destroy " << this->_name << std::endl;
	else
		std::cout << "FragTrap destructor called." << std::endl;
	return ;
};