#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "A_Form.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public A_Form {
    public:
    	ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		ShrubberyCreationForm(std::string _target);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

		std::string getTarget() const;
		void action() const;

	private :
        std::string _target;

};

std::ostream &operator<<(std::ostream &flow, ShrubberyCreationForm const &obj);

#endif