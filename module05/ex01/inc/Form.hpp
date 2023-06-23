#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "../inc/Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
    	Form();
		Form(std::string name, int sign_grade, int exec_grade);
		Form(const Form & src);
		~Form();

		class GradeTooHighException : public std::exception {
			public :
				virtual const char* error() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char* error() const throw();
		};

		Form & operator=(const Form & rhs);

		std::string getName(void) const;
        bool isSigned(void) const;
		int getSignGrade(void) const;
        int getExecGrade(void) const;

		void beSigned(Bureaucrat &B);

	private :
		std::string const	_name;
        bool				_sign;
        int const			_sign_grade;
        int const			_exec_grade;

};

std::ostream &operator<<(std::ostream &flow, Form const &obj);

#endif