#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
	this->displayData("ScavTrap ");
	return ;	
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap parameter constructor called to instance " << _name << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
	this->displayData("ScavTrap ");
	return ;	
};

void ScavTrap::attack(const std::string& target) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_energy_pts--;
		std::cout << "OMG ! " << this->_name << " is a ScavTrap !" << std::endl;
		std::cout << "It attacks " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
	}
	else if (this->_hit_pts == 0)
		std::cout << this->_name << " has no hit points to attack " << target << std::endl;
	else if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy points to attack " << target << std::endl;
	std::cout << "Now ";
	displayData("ScavTrap ");
};

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is on Gate keeper mode." << std::endl;
};

ScavTrap::~ScavTrap() {
	if (_name != "")
		std::cout << "ScavTrap destructor called to destroy " << this->_name << std::endl;
	else
		std::cout << "ScavTrap destructor called" << std::endl;
	return ;
};