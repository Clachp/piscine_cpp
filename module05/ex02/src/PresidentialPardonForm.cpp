#include "../inc/PresidentialPardonForm.hpp"

/* CONSTRUCTORS */
PresidentialPardonForm::PresidentialPardonForm() : A_Form("PPF", 25, 5), _target("target X") {
	std::cout << "Default PresidentialPardonForm" << std::endl;
	return ;
};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) {
	std::cout << "Copied PresidentialPardonForm" << std::endl;
	*this = src;
	return ;
};
PresidentialPardonForm::PresidentialPardonForm(std::string target) : A_Form("PPF", 25, 5), 
_target(target) {
	std::cout << "Parametered PresidentialPardonForm" << std::endl;
	return ;
};

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destroyed" << std::endl;
    return ;
};

/* OPERATORS OVERLOADS */
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) {
	this->_target = rhs._target;
	return *this;
};

void PresidentialPardonForm::action() const {
	std::cout << "Executing " << this->getName() << std::endl;
}

void RobotomyRequestForm::action() const {

	if (n % 2) {
		std::cout << "ZZZZzzzzZZZzzz " << std::endl;
		std::cout << this->getTarget() << " has been successfuly robotomised" << std::endl;
	}
	else {
		throw ExecFailException();
	}
}