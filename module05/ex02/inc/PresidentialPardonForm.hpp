#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public A_Form {
    public:
    	PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm & src);
	
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

	private :
		std::string _target;

};

std::ostream &operator<<(std::ostream &flow, PresidentialPardonForm const &obj);

#endif