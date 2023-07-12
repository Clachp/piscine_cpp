#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN {
	public:
		RPN();
		RPN(RPN const & src);
		~RPN();

		RPN & operator=(RPN const & rhs);

		void checkInput(char *arg);
	
	private:
		std::stack<int> _number;
	
};

#endif