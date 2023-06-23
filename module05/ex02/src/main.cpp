#include "../inc/Bureaucrat.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main (void)
{
	std::cout << "--- ROBOTOMY ---" << std::endl;
	try {
		Bureaucrat D ("Doctor", 45);
		std::cout << D << std::endl;
		Bureaucrat S ("Secretary", 50);
		std::cout << S << std::endl;
		RobotomyRequestForm form("Poor guy");
		std::cout << form << std::endl;
		form.beSigned(S);
		form.execute(D);
	}
	catch (Bureaucrat::GradeTooHighException & H) {
		std::cerr << "Bureaucrat instantiation error : " << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & L) {
		std::cerr << "Bureaucrat instantiation error : " << L.error() << std::endl;
	}

	std::cout << "\n--- PRESIDENTIAL PARDON ---" << std::endl;
	try {
		Bureaucrat S ("Secretaire", 100);
		std::cout << S << std::endl;
		Bureaucrat P ("President", 4);
		std::cout << P << std::endl;
		PresidentialPardonForm form ("client");
		std::cout << form << std::endl;
		S.signForm(form);
		P.executeForm(form);
		std::cout << std::endl;
		form.beSigned(S);
		form.execute(P);
	}
	catch (Bureaucrat::GradeTooHighException & H) {
		std::cerr << "Bureaucrat instantiation error : " << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & L) {
		std::cerr << "Bureaucrat instantiation error : " << L.error() << std::endl;
	}

	std::cout << "\n--- SHRUBBERRY ---" << std::endl;
	try {
		Bureaucrat P ("Gardener", 123);
		std::cout << P << std::endl;
		Bureaucrat S ("Secretaire", 78);
		std::cout << S << std::endl;
		ShrubberyCreationForm form ("Gardening");
		std::cout << form << std::endl;
		S.signForm(form);
		P.executeForm(form);
	}
	catch (Bureaucrat::GradeTooHighException & H) {
		std::cerr << "Bureaucrat instantiation error : " << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & L) {
		std::cerr << "Bureaucrat instantiation error : " << L.error() << std::endl;
	}
};