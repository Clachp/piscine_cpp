#include "ScalarConverter.hpp"

// Détecter si l'arg est un char
bool isChar(std::string const & arg) {
	if(arg.size() == 1 && std::isprint(arg[0]) && !std::isdigit(arg[0]))
		return true;
	return false;
};

// Détecter si l'arg est un int
bool isInt(std::string const & arg) {
	int r = std::atoi(arg.c_str());
	for (size_t i = 0; i < arg.size(); i++) {
		if(!std::isdigit(arg[i]))
			return false;
	};
	if (r >= INT_MIN && r <= INT_MAX)
		return true;
	std::cout << "number out of int range" << std::endl;
	return false;
}

// Détecter si l'arg est un float

// Détecter si l'arg est un double

// void ScalarConverter::convert(std::string const & arg) {

// };
