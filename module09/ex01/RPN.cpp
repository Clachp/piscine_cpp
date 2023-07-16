#include "RPN.hpp"

/* CONSTRUCTORS */
RPN::RPN() {};
RPN::RPN(RPN const & src) {
	*this = src;
};
RPN::~RPN() {};

/* OPERATOR OVERLOADS */
RPN & RPN::operator=(RPN const & rhs) {
	if (this != &rhs)
		_number = rhs._number;
	return *this;
};

/* METHODS */
void RPN::do_calc(char token) {
	int b = _number.top();
	_number.pop();
	int a = _number.top();
	int res = 0;
	
	if (token == '+')
		res = a + b;
	else if (token == '-')
		res = a - b;
	else if (token == '/') {
		if (b == 0) {
			std::cout << "Divide by zero\n";
			throw std::exception();
		}
		res = a / b;
	}
	else if (token == '*') {
		res = a * b;
	}
	_number.pop();
	_number.push(res);
}

int RPN::calculate(std::string arg) {
	std::istringstream  iss(arg);
	std::string elem;
	std::string token = "+-/*";

	while (iss >> elem) {
		int i = atoi(elem.c_str());
		if ((elem[0] == '0' && i == 0) || (i > 0 && i <= 9) || (i >= -9 && i < 0)) {
			_number.push(i);
		}
		else if (_number.size() >= 2 && token.find(elem[0]) != std::string::npos) {
			do_calc(elem[0]);
		}
		else
			throw std::exception();
	}
	return _number.top();
}