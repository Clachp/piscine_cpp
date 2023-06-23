#include "../inc/Intern.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

/* CONSTRUCTORS */
Intern::Intern() {
	std::cout << "Intern" << std::endl;
	return ;
};
Intern::Intern(const Intern & src) {
	std::cout << "copied Intern" << std::endl;
	*this = src;
	return ;
};

Intern::~Intern() {
	std::cout << "Intern destroyed" << std::endl;
    return ;
};

/* OPERATORS OVERLOADS */
Intern & Intern::operator=(const Intern & rhs) {
	(void)rhs;
	return *this;
};

/* METHODS */
A_Form* Intern::makeForm(std::string form_name, std::string form_target) {
	std::string name[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};

	for (int i = 0; i < 3; i++) {
		if (name[i].compare(form_name) == 0) {
			switch (i) {
				case (0):
					return (new ShrubberyCreationForm(form_target));
				case (1):
					return (new RobotomyRequestForm(form_target));
				case (2):
					return (new PresidentialPardonForm(form_target));
			}
		}
	}
	throw FormException();
	return (NULL);
};

/* EXCEPTIONS */
const char* Intern::FormException::error() const throw() {
	return ("Intern couldn't make form");
}