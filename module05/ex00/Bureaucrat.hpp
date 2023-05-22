#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

//utiliser les neste claases pour 

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat();

		class GradeTooHighException : public std::exception {

		};
		class GradeTooLowException : public std::exception {

		};

		Bureaucrat & operator=(const Bureaucrat & rhs);

		std::string getName(void) const;
		int getGrade(void) const;
		void upGrade(void);
		void retroGrade(void);

	private :
		std::string const _name;
		int _grade;

};

std::ostream &operator<<(std::ostream &flow, Bureaucrat const &obj);

#endif