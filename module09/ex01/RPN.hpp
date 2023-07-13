#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <exception>
#include <cstdlib>

class RPN {
	public:
		RPN();
		RPN(RPN const & src);
		~RPN();

		RPN & operator=(RPN const & rhs);
		
		int		calculate(std::string arg);
		void	do_calc(char token);
	
	private:
		std::stack<int> _number;
	
};

#endif