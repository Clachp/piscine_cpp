#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
};
Bureaucrat::Bureaucrat(const Bureaucrat & src) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
	return ;
};
Bureaucrat::Bureaucrat(std::string name, int grade) : 
_name(name), _grade(grade) {
	std::cout << "Bureaucrat parameter constructor called" << std::endl;
	return ;
};
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
    return ;
};

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) {
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return ;

};
std::string Bureaucrat::getName(void) const {
	return this->_name;
};
int Bureaucrat::getGrade(void) const {
	return this->_grade;
};
void Bureaucrat::upGrade(void) {
	if (_grade > 1 && _grade <= 150)
		_grade--;
};
void Bureaucrat::retroGrade(void) {
	if (_grade >= 1 && _grade < 150)
		_grade++;
};

std::ostream & operator<<(std::ostream & flow, Bureaucrat const & obj) {
    flow << obj.getName() << ", bureaucrat grade " << obj.getGrade(); 
    return flow;
};