#include "../inc/A_Form.hpp"

/* CONSTRUCTORS */
A_Form::A_Form() : _name("unnamed"), _sign(false), _sign_grade(150), _exec_grade(150) {
	std::cout << "Default A_Form" << std::endl;
	return ;
};
A_Form::A_Form(const A_Form & src) : _name(src.getName()), 
_sign(false), 
_sign_grade(src.getSignGrade()), 
_exec_grade(src.getExecGrade()) {
	std::cout << "Copied A_Form" << std::endl;
	*this = src;
	return ;
};
A_Form::A_Form(std::string name, int sign_grade, int exec_grade) : 
_name(name), _sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade) {
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	std::cout << "Parametered A_Form" << std::endl;
	return ;
};

A_Form::~A_Form() {
	std::cout << "A_Form destroyed" << std::endl;
    return ;
};

/* ACCESSORS */
std::string A_Form::getName(void) const {
	return this->_name;
};
bool A_Form::isSigned(void) const {
    return this->_sign;
};
int A_Form::getSignGrade(void) const {
	return this->_sign_grade;
};
int A_Form::getExecGrade(void) const {
	return this->_exec_grade;
};

/* OPERATORS OVERLOADS */
A_Form & A_Form::operator=(const A_Form & rhs) {
	this->_sign = rhs._sign;
	return *this;
};
std::ostream & operator<<(std::ostream & flow, A_Form const & F) {
    flow << "A_Form :"<< F.getName() << std::endl;
    if (F.isSigned() == true) 
        flow << "Status: signed." << std::endl;
    else
        flow << "Status: unsigned." << std::endl;
    flow << "Grade required for signing: " << F.getSignGrade() << std::endl;
    flow << "Grade required for executing: " << F.getExecGrade() << std::endl;
    return flow;
};

/* METHODS */
void A_Form::beSigned(Bureaucrat const &B) {
    try {
		if (B.getGrade() <= _sign_grade) {
    		_sign = true;
       		std::cout << getName() << " form is signed by " << B.getName() << std::endl;
    	}
    	else
        	throw GradeTooLowException();
	}
	catch(GradeTooLowException &L) {
		std::cerr << "beSigned error : " << L.error() << std::endl;
	}
};

void A_Form::execute(Bureaucrat const & executor) const {
	try {
		if (isSigned() == false)
			throw SignFormException();
		if (_exec_grade <= executor.getGrade())
			throw GradeTooLowException();
		action();
	}
	catch(SignFormException &S) {
		std::cerr << "execute error : " << S.error() << '\n';
	}
	catch (GradeTooLowException &L) {
		std::cerr << "execute error : " << L.error() << '\n';
	}
	catch (ExecFailException &F) {
		std::cerr << "execute error : " << F.error() << '\n';
	}
};

std::string A_Form::GradeTooHighException::error() const {
	return ("lower grade required");
}

std::string A_Form::GradeTooLowException::error() const {
	return ("higher grade required");
}

std::string A_Form::SignFormException::error() const {
	return ("form unsigned");
}

std::string A_Form::ExecFailException::error() const {
	return ("fail to execute form ");
}