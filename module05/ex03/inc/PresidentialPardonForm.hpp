#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "A_Form.hpp"
#include <string>

class Bureaucrat;

class PresidentialPardonForm : public A_Form {
    public:
    	PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm & src);
		PresidentialPardonForm(std::string _target);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

		std::string getTarget() const;
		void action() const;

	private :
		std::string _target;

};

std::ostream &operator<<(std::ostream &flow, PresidentialPardonForm const &obj);

#endif