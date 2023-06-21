#include "../inc/Form.hpp"

/* CONSTRUCTORS */
Form::Form() : _name("unnamed"), _sign(false), _sign_grade(150), _exec_grade(150) {
	std::cout << "Default Form" << std::endl;
	return ;
};
Form::Form(const Form & src) : _name(src.getName()), _sign(false), 
_sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade()) {
	std::cout << "Copied Form" << std::endl;
	*this = src;
	return ;
};
Form::Form(std::string name, int sign_grade, int exec_grade) : 
_name(name), _sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade) {
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	std::cout << "Parametered Form" << std::endl;
	return ;
};

Form::~Form() {
	std::cout << "Form destroyed" << std::endl;
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
    flow << "Form :"<< F.getName() << std::endl;
    if (F.isSigned() == true) 
        flow << "Status: signed." << std::endl;
    else
        flow << "Status: unsigned." << std::endl;
    flow << "Grade required for signing: " << F.getSignGrade() << std::endl;
    flow << "Grade required for executing: " << F.getExecGrade() << std::endl;
    return flow;
};

/* METHODS */
void Form::beSigned(Bureaucrat &B) {
	try {
		if (B.getGrade() <= _sign_grade)
		{
			_sign = true;
			std::cout << getName() << " form is signed by " << B.getName() << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	catch (GradeTooLowException & L) {
		std::cout << "beSigned error : " << L.error() << std::endl;
	}
    
};

std::string Form::GradeTooHighException::error() const {
	return ("lower grade required");
}

std::string Form::GradeTooLowException::error() const {
	return ("Higher grade required");
}