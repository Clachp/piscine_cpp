#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main (void)
{
	std::cout << "--- MAKING A BUREAUCRAT ---" << std::endl;
	try {
		Bureaucrat A("Alan", 4);
		std::cout << A << std::endl;
		A.retroGrade();
		std::cout << A << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& H) {
		std::cerr << "ERROR\n" << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& L) {
		std::cerr << "ERROR\n" << L.error() << std::endl;
	}

	std::cout << std::endl << "--- MAKING A FORM ---" << std::endl;
	try {
		Form F("F1", 200, 10);
		std::cout << F << std::endl;
	}
	catch (Form::GradeTooHighException& H) {
		std::cerr << "ERROR\n" << H.error() << std::endl;
	}
	catch (Form::GradeTooLowException& L) {
		std::cerr << "ERROR\n" << L.error() << std::endl;
	}

	std::cout << std::endl << "--- MAKING A FORM TO BE SIGNED BY A BUREAUCRAT ---" << std::endl;
	try {
		Bureaucrat B("joel", 5);
		std::cout << B << std::endl << std::endl;
		Form F("F2", 2, 10);
		std::cout << F << std::endl;
		B.signForm(F);
		//F.beSigned(B);
	}
	catch (Bureaucrat::GradeTooHighException& H) {
		std::cerr << "ERROR\n" << H.error() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& L) {
		std::cerr << "ERROR\n" << L.error() << std::endl;
	}
	catch (Form::GradeTooHighException& H) {
		std::cerr << "ERROR\n" << H.error() << std::endl;
	}
	catch (Form::GradeTooLowException& L) {
		std::cerr << "ERROR\n" << L.error() << std::endl;
	}
};