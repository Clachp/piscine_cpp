#include "../inc/Bureaucrat.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main (void)
{
	try {
		Bureaucrat M ("Martin", 8);
		std::cout << M << std::endl;
		RobotomyRequestForm R;
		std::cout << R << std::endl;
		R.beSigned(M);
		R.execute(M);
	}
	catch (Bureaucrat::GradeTooHighException & H) {
		std::cerr << "Bureaucrat instantiation error : " << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & L) {
		std::cerr << "Bureaucrat instantiation error : " << L.error() << std::endl;
	}
};