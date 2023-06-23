#include "../inc/Bureaucrat.hpp"
#include "../inc/A_Form.hpp"


/* CONSTRUCTORS */
Bureaucrat::Bureaucrat() {
	//std::cout << "Default Bureaucrat" << std::endl;
	return ;
};
Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src.getName()) {
	//std::cout << "Copy Bureaucrat" << std::endl;
	*this = src;
	return ;
};
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	//std::cout << "Parametered Bureaucrat" << std::endl;
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
	if (_grade > 1 && _grade <= 150) {
		_grade--;
		std::cout << this->getName() << " has been upgraded" << std::endl;
	}
	else {
		std::cout << *this << std::endl;
		throw (GradeTooHighException());
	}
};

void Bureaucrat::retroGrade(void) {
	if (_grade >= 1 && _grade < 150) {
		_grade++;
		std::cout << this->getName() << " has been retrograded" << std::endl;
	}
	else {
		std::cout << *this << std::endl;
		throw (GradeTooLowException());
	}
};
void Bureaucrat::signForm(A_Form &F) {
	try {
		F.beSigned(*this);
		std::cout << getName() << " signed the form " << F.getName() << std::endl;
	}
	catch(A_Form::GradeTooLowException& E) {
		std::cout << getName() << " couldn't sign the form " << F.getName() <<  " because of this error :" << std::endl;
		std::cerr << E.error() << '\n';
	}
};

void Bureaucrat::executeForm(A_Form const & form) {
	try {
		if (form.isSigned() && _grade <= form.getExecGrade()) {
			form.execute(*this);
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
		}
		else
			throw ExecutionException();
	}
	catch (ExecutionException & E) {
		std::cerr << E.error() << std::endl;
		std::cerr << "reason : ";
		try {
			if (form.isSigned() == false)
				throw A_Form::SignFormException();
			if (_grade > form.getExecGrade())
				throw GradeTooLowException();
		}
		catch (A_Form::SignFormException & S) {
			std::cerr << S.error() << std::endl;
		}
		catch (GradeTooLowException & L) {
			std::cerr << L.error() << std::endl;
		}
	}
}; 

/* EXCEPTIONS */
const char* Bureaucrat::GradeTooHighException::error() const throw() {
	return ("Bureaucrat: Grade too high");
}
const char* Bureaucrat::GradeTooLowException::error() const throw() {
	return ("Bureaucrat: Grade too low");
}
const char* Bureaucrat::ExecutionException::error() const throw() {
	return ("Bureaucrat failed to execute form");
}