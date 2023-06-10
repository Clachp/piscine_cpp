#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main (void)
{
	try
	{
		Bureaucrat B("joel", 24);
		std::cout << B << std::endl;
		Form F("Formula1", 22, 10);
		std::cout << F << std::endl;
		F.beSigned(B);
	}
	catch (Bureaucrat::GradeTooHighException& H)
	{
		std::cerr << "Bureaucrat exception caught : " << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& L)
	{
		std::cerr << "Bureaucrat exception caught : " << L.error() << std::endl;
	}
	catch (Form::GradeTooLowException& L)
	{
		std::cerr << "Form exception caught : " << L.error() << std::endl;
	}

}