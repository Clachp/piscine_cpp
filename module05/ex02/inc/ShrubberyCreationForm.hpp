#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public A_Form {
    public:
    	ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		ShrubberyCreationForm(std::string name, int sign_grade, int exec_grade);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

        void createFile(std::string target);

	private :
        std::string _target;

};

std::ostream &operator<<(std::ostream &flow, ShrubberyCreationForm const &obj);

#endif