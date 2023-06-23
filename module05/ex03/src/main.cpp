#include "../inc/Bureaucrat.hpp"
#include "../inc/Intern.hpp"
#include "../inc/A_Form.hpp"

int main (void)
{
	try {
		Intern I;
		Bureaucrat S ("Secretaire", 50);
		A_Form* f;
		f = I.makeForm("Shrubbery creation", "Garden");
		std::cout << "Intern creates " << f->getName() << std::endl;
		f->beSigned(S);
		S.executeForm(*f);
		delete f;
	}
	catch (Intern::FormException & E) {
		std::cerr << E.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & E) {
		std::cerr << E.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & E) {
		std::cerr << E.error() << std::endl;
	}
};