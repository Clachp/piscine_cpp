#include "../inc/Form.hpp"

/* CONSTRUCTORS */
Form::Form() : _name("unnamed"), _sign(false), _sign_grade(150), _exec_grade(150) {
	std::cout << "Form default constructor called" << std::endl;
	return ;
};
Form::Form(const Form & src) : _name(src.getName()), 
_sign(false), 
_sign_grade(src.getSignGrade()), 
_exec_grade(src.getExecGrade()) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	return ;
};
Form::Form(std::string name, int sign_grade, int exec_grade) : 
_name(name), _sign(false),
_sign_grade(sign_grade),
_exec_grade(exec_grade) {
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	std::cout << "Form parameter constructor called" << std::endl;
	return ;
};

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
    return ;
};

/* ACCESSORS */
std::string Form::getName(void) const {
	return this->_name;
};
bool Form::isSigned(void) const {
    return this->_sign;
};
int Form::getSignGrade(void) const {
	return this->_sign_grade;
};
int Form::getExecGrade(void) const {
	return this->_exec_grade;
};

/* OPERATORS OVERLOADS */
Form & Form::operator=(const Form & rhs) {
	this->_sign = rhs._sign;
	return *this;
};
std::ostream & operator<<(std::ostream & flow, Form const & F) {
    flow << "The form "<< F.getName();
    if (F.isSigned() == true) 
        flow << " is signed." << std::endl;
    else
        flow << " is not signed." << std::endl;
    flow << "It requires a grade " << F.getSignGrade();
    flow << " to be signed, and a grade " << F.getExecGrade() << " to be executed" << std::endl;
    return flow;
};

/* OTHER MEMBERS FUNCTIONS */
void Form::beSigned(Bureaucrat &B) {
    if (B.getGrade() <= _sign_grade)
    {
        _sign = true;
        std::cout << getName() << " form is signed by " << B.getName() << std::endl;
    }
    else
        throw GradeTooLowException();
};

std::string Form::GradeTooHighException::error() const {
	return ("Form Grade too high");
}

std::string Form::GradeTooLowException::error() const {
	return ("Form Grade too low");
}