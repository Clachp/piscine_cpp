#include "../inc/RobotomyRequestForm.hpp"

/* CONSTRUCTORS */
RobotomyRequestForm::RobotomyRequestForm() : A_Form("RRF", 72, 45), _target("target X") {
	std::cout << "Default RobotomyRequestForm" << std::endl;
	return ;
};
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) {
	std::cout << "Copied RobotomyRequestForm" << std::endl;
	*this = src;
	return ;
};
RobotomyRequestForm::RobotomyRequestForm(std::string target) : A_Form("RRF", 72, 45), 
_target(target) {
	std::cout << "Parametered RobotomyRequestForm" << std::endl;
	return ;
};

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destroyed" << std::endl;
    return ;
};

std::string RobotomyRequestForm::getTarget() const {
	return this->_target;
};

/* OPERATORS OVERLOADS */
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
	this->_target = rhs._target;
	return *this;
};
std::ostream & operator<<(std::ostream & flow, RobotomyRequestForm const & F) {
    flow << "RobotomyRequestForm : "<< F.getName() << std::endl;
    if (F.isSigned() == true) 
        flow << "Status: signed." << std::endl;
    else
        flow << "Status: unsigned." << std::endl;
    flow << "Grade required for signing: " << F.getSignGrade() << std::endl;
    flow << "Grade required for executing: " << F.getExecGrade() << std::endl;
    return flow;
};

void RobotomyRequestForm::action() const {
	srand(time(NULL));
	int n = 1 + (rand() % 98);
	std::cout << "n = " << n << std::endl;
	if (n % 2) {
		std::cout << "ZZZZzzzzZZZzzz " << std::endl;
		std::cout << this->getTarget() << " has been successfuly robotomised" << std::endl;
	}
	else {
		throw ExecFailException();
	}
}