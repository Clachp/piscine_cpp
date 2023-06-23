#include "Bureaucrat.hpp"

int main (void)
{
	try {
		Bureaucrat B("joel", 20);
		std::cout << B << std::endl;
		B.upGrade();
		Bureaucrat A("Michel", 350);
		std::cout << A << std::endl;
		A.retroGrade();
	}
	catch (Bureaucrat::GradeTooHighException& H) {
		std::cerr << "exception caught : " << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& L) {
		std::cerr << "exception caught : " << L.error() << std::endl;
	}
}