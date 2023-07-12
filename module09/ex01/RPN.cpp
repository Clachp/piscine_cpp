#include "RPN.hpp"

RPN::RPN() {};
RPN::RPN(RPN const & src) {
	*this = src;
};
RPN::~RPN() {};

RPN & RPN::operator=(RPN const & rhs) {
	if (this != &rhs)
		_number = rhs._number;
	return *this;
};

void RPN::checkInput(char *arg) {
	std::string str(arg);
	std::string token = "+-/* ";
	if (op.find(str.at(str.size() - 1)) == std::string::npos && str.at(str.size() - 1) != '1')
	{
		std::cout << str.at(str.size() - 1) << std::endl;
		std::cout << "Error: end\n";
	}

	for (size_t i = 0; i < str.size(); i++) {
		while (str[i] == ' ')
			i++;
		if (isdigit(str[i]) && (op.find(str[i + 1]) == std::string::npos && str[i + 1] != '1'))
			std::cout << "Error: Number \n";
	}
}