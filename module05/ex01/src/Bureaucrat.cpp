#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"


/* CONSTRUCTORS */
Bureaucrat::Bureaucrat() {
	std::cout << "Default Bureaucrat" << std::endl;
	return ;
};
Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src.getName()) {
	std::cout << "Copy Bureaucrat" << std::endl;
	*this = src;
	return ;
};
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
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

/* METHODS */
void Bureaucrat::upGrade(void) {
	if (_grade > 1 && _grade <= 150)
	{
		_grade--;
		std::cout << this->getName() << " has been upgraded" << std::endl;
	}
	else 
	{
		std::cout << *this << std::endl;
		throw (Bureaucrat::GradeTooHighException());
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
		throw (Bureaucrat::GradeTooLowException());
	}
};
void Bureaucrat::signForm(Form &F) {
	try
	{
		F.beSigned(*this);
		std::cout << getName() << " signed the form " << F.getName() << std::endl;
	}
	catch(Form::GradeTooLowException& E)
	{
		std::cout << getName() << " couldn't sign the form " << F.getName() <<  " because of this error :" << std::endl;
		std::cerr << E.error() << '\n';
	}
};

std::string Bureaucrat::GradeTooHighException::error() const {
	return ("Bureaucrat: Grade too high");
}

std::string Bureaucrat::GradeTooLowException::error() const {
	return ("Bureaucrat: Grade too low");
}