#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public A_Form {
    public:
    	RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm & src);
		RobotomyRequestForm(std::string name, int sign_grade, int exec_grade);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

	private :
		std::string _target;

};

std::ostream &operator<<(std::ostream &flow, RobotomyRequestForm const &obj);

#endif