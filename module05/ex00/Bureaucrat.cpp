#include "Bureaucrat.hpp"

/* CONSTRUCTORS */
Bureaucrat::Bureaucrat() {
	std::cout << "default Bureaucrat default" << std::endl;
	return ;
};
Bureaucrat::Bureaucrat(const Bureaucrat & src) {
	std::cout << "copied Bureaucrat" << std::endl;
	*this = src;
	return ;
};
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Parametered Bureaucrat" << std::endl;
	return ;
};

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destroyed" << std::endl;
    return ;
};

/* ACCESSORS */
std::string Bureaucrat::getName(void) const {
	return this->_name;
};
int Bureaucrat::getGrade(void) const {
	return this->_grade;
};

/* OPERATORS OVERLOADS */
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) {
	this->_grade = rhs._grade;
	return *this;
};
std::ostream & operator<<(std::ostream & flow, Bureaucrat const & obj) {
    flow << obj.getName() << " is a bureaucrat grade " << obj.getGrade(); 
    return flow;
};

/* OTHER MEMBERS FUNCTIONS */
void Bureaucrat::upGrade(void) {
	if (_grade > 1 && _grade <= 150)
	{
		_grade--;
		std::cout << this->getName() << " has been upgraded" << std::endl;
	}
	else 
	{
		std::cout << *this << std::endl;
		throw GradeTooHighException();
	}
};
void Bureaucrat::retroGrade(void) {
	if (_grade >= 1 && _grade < 150)
	{
		_grade++;
		std::cout << this->getName() << " has been retrograded" << std::endl;
	}
	else 
	{
		std::cout << *this << std::endl;
		throw GradeTooLowException();
	}
};

std::string Bureaucrat::GradeTooHighException::error() const {
	return ("Grade too high");
}

std::string Bureaucrat::GradeTooLowException::error() const {
	return ("Grade too low");
}