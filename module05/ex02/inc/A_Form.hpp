#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "../inc/Bureaucrat.hpp"

class Bureaucrat;

class A_Form {
    public:
    	A_Form();
		A_Form(std::string name, int sign_grade, int exec_grade);
		A_Form(const A_Form & src);
		virtual ~A_Form();

		class GradeTooHighException : public std::exception {
			public :
				virtual std::string error() const;
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual std::string error() const;
		};
		class SignFormException : public std::exception {
			public :
				virtual std::string error() const;
		};
		class ExecFailException : public std::exception {
			public :
				virtual std::string error() const;
		};

		A_Form & operator=(const A_Form & rhs);

		std::string getName(void) const;
		int getSignGrade(void) const;
        int getExecGrade(void) const;
        bool isSigned(void) const;

		void beSigned(Bureaucrat const &B);
		virtual void execute(Bureaucrat const & executor) const;
		virtual void action() const = 0;

	private :
		std::string const _name;
        bool _sign;
        int const _sign_grade;
        int const _exec_grade;
};

std::ostream &operator<<(std::ostream &flow, A_Form const &obj);

#endif