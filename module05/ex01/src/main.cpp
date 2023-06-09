#include "Bureaucrat.hpp"

int main (void)
{
	try
	{
		Bureaucrat B("joel", 20);
		B.upGrade();
		std::cout << B << std::endl;
		Bureaucrat A("Michel", 350);
		A.retroGrade();
		std::cout << A << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& H)
	{
		std::cerr << "exception caught : " << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& L)
	{
		std::cerr << "exception caught : " << L.error() << std::endl;
	}
}