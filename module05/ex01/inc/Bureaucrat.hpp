#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat();

		class GradeTooHighException : public std::exception {
			public :
				virtual std::string error() const;
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual std::string error() const;
		};

		Bureaucrat & operator=(const Bureaucrat & rhs);

		std::string getName(void) const;
		int getGrade(void) const;
		void upGrade(void);
		void retroGrade(void);

	private :
		std::string _name;
		int _grade;

};

std::ostream &operator<<(std::ostream &flow, Bureaucrat const &obj);

#endif