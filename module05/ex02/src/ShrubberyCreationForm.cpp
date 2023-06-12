#include "../inc/ShrubberyCreationForm.hpp"

/* CONSTRUCTORS */
ShrubberyCreationForm::ShrubberyCreationForm() : _name("unnamed"), _sign(false), _sign_grade(145), _exec_grade(1) {
	std::cout << "Default ShrubberyCreationForm" << std::endl;
	return ;
};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : Form() {
	std::cout << "Copied ShrubberyCreationForm" << std::endl;
	*this = src;
	return ;
};
ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int sign_grade, int exec_grade) : 
_name(name), _sign(false),
_sign_grade(sign_grade),
_exec_grade(exec_grade) {
	if (sign_grade > 145 || exec_grade > 137)
		throw GradeTooLowException();
	if (exec_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	std::cout << "Parametered ShrubberyCreationForm" << std::endl;
	return ;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destroyed" << std::endl;
    return ;
};

/* ACCESSORS */
std::string ShrubberyCreationForm::getName(void) const {
	return this->_name;
};
bool ShrubberyCreationForm::isSigned(void) const {
    return this->_sign;
};
int ShrubberyCreationForm::getSignGrade(void) const {
	return this->_sign_grade;
};
int ShrubberyCreationForm::getExecGrade(void) const {
	return this->_exec_grade;
};

/* OPERATORS OVERLOADS */
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
	this->_target = rhs._target;
	return *this;
};
std::ostream & operator<<(std::ostream & flow, ShrubberyCreationForm const & F) {
    flow << "ShrubberyCreationForm :"<< F.getName() << std::endl;
    if (F.isSigned() == true) 
        flow << "Status: signed." << std::endl;
    else
        flow << "Status: unsigned." << std::endl;
    flow << "Grade required for signing: " << F.getSignGrade() << std::endl;
    flow << "Grade required for executing: " << F.getExecGrade() << std::endl;
    return flow;
};

/* METHODS */
void ShrubberyCreationForm::beSigned(Bureaucrat &B) {
    if (B.getGrade() <= _sign_grade)
    {
        _sign = true;
        std::cout << getName() << " ShrubberyCreationForm is signed by " << B.getName() << std::endl;
    }
    else
        throw GradeTooLowException();
};

std::string ShrubberyCreationForm::GradeTooHighException::error() const {
	return ("ShrubberyCreationForm: lower grade required");
}

std::string ShrubberyCreationForm::GradeTooLowException::error() const {
	return ("ShrubberyCreationForm: Higher grade required");
}