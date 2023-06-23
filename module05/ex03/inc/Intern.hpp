#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "A_Form.hpp"

class Intern {
    public:
    	Intern();
		Intern(const Intern & src);
		~Intern();

		Intern & operator=(const Intern & rhs);

		A_Form* makeForm(std::string form_name, std::string form_target);

		class FormException: public std::exception {
			public :
				virtual const char* error() const throw();
		};

	private :
};

std::ostream &operator<<(std::ostream &flow, Intern const &obj);

#endif