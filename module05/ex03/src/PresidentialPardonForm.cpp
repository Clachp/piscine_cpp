#include "../inc/PresidentialPardonForm.hpp"

/* CONSTRUCTORS */
PresidentialPardonForm::PresidentialPardonForm() : A_Form("Presidential Pardon Form", 25, 5), _target("target X") {
	//std::cout << "Default PresidentialPardonForm" << std::endl;
	return ;
};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) {
	//std::cout << "Copied PresidentialPardonForm" << std::endl;
	*this = src;
	return ;
};
PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
A_Form("Presidential Pardon Form", 25, 5), _target(target) {
	//std::cout << "Parametered PresidentialPardonForm" << std::endl;
	return ;
};

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destroyed" << std::endl;
    return ;
};

/* ACCESSORS */
std::string PresidentialPardonForm::getTarget() const {
	return this->_target;
};

/* OPERATORS OVERLOADS */
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) {
	this->_target = rhs._target;
	return *this;
};
std::ostream & operator<<(std::ostream & flow, PresidentialPardonForm const & F) {
    flow << "Form name: "<< F.getName() << std::endl;
	flow << "Target: "<< F.getTarget() << std::endl;
    if (F.isSigned() == true) 
        flow << "Status: signed." << std::endl;
    else
        flow << "Status: unsigned." << std::endl;
    flow << "Grade required for signing: " << F.getSignGrade() << std::endl;
    flow << "Grade required for executing: " << F.getExecGrade();
    return flow;
};

/* METHODS */
void PresidentialPardonForm::action() const {
	if (_target.compare("target X")) {
		std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw ExecFailException();
};