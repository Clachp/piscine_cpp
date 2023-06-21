#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "A_Form.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public A_Form {
    public:
    	RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm & src);
		RobotomyRequestForm(std::string _target);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

		std::string getTarget() const;
		void action() const;

	private :
		std::string _target;

};

std::ostream &operator<<(std::ostream &flow, RobotomyRequestForm const &obj);

#endif