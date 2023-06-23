#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat();

		class GradeTooHighException : public std::exception {
			public :
				virtual const char* error() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char* error() const throw();
		};

		Bureaucrat & operator=(const Bureaucrat & rhs);

		std::string getName(void) const;
		int getGrade(void) const;
		void upGrade(void);
		void retroGrade(void);
		void signForm(Form &F);

	private :
		std::string const	_name;
		int					_grade;

};

std::ostream &operator<<(std::ostream &flow, Bureaucrat const &obj);

#endif