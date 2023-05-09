#include "../inc/ClapTrap.hpp"

/* CONSTRUCTORS */
ClapTrap::ClapTrap () : _hit_pts(10), _energy_pts(10), _attack_damage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;	
};
ClapTrap::ClapTrap( const ClapTrap &src ) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
};
ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_pts(10), _energy_pts(10), _attack_damage(0){
	std::cout << "ClapTrap parameter constructor called to instance " << _name << std::endl;
	return ;
};

/* DESTRUCTOR */
ClapTrap::~ClapTrap() {
	if (_name != "")
		std::cout << "ClapTrap destructor called to destroy " << this->_name << std::endl;
	else
		std::cout << "ClapTrap destructor called." << std::endl;
	return ;
};

/* ASSIGNEMENT OPERATOR */
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	this->_attack_damage = rhs._attack_damage; 
	this->_energy_pts = rhs._energy_pts;
	this->_hit_pts = rhs._hit_pts;
	this->_name = rhs._name;
	return (*this);
};

/* ACCESSORS */
std::string ClapTrap::getName( void ) const {
	return this->_name;
};
int ClapTrap::getHitPoints( void ) const {
	return this->_hit_pts;
};
int ClapTrap::getEnergyPoints( void ) const {
	return this->_energy_pts;
};
int ClapTrap::getAttackDamage( void ) const {
	return this->_attack_damage;
};

/* OTHER MEMBER FUNCTIONS */
void ClapTrap::displayData(std::string str) const {
	if (_name != "")
		std::cout << str << _name << " has : " << std::endl;
	else
		std::cout << str << " has : " << std::endl;
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
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
		std::cout << "Now ";
		displayData("ClapTrap ");
	}
	else if (this->_hit_pts == 0)
		std::cout << this->_name << " has no hit points to attack " << target << std::endl << std::endl;
	else if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy points to attack " << target << std::endl << std::endl;;
};
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " took a damage of " << amount << " points." << std::endl;
	if (_hit_pts >= amount)
	{
		this->_hit_pts -= amount;
		this->_energy_pts--;
	}
	else
		_hit_pts = 0;
	std::cout << "Now ";
	displayData("");
};
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_hit_pts += amount;
		this->_energy_pts--;
		std::cout << this->_name << " get repaired of " << amount << " points." << std::endl;
		std::cout << "Now ";
		displayData("");
	}
	else if (this->_hit_pts == 0)
		std::cout << this->_name << " has no hit points to be repaired." << std::endl << std::endl;
	else if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy points to be repaired." << std::endl << std::endl;;
};