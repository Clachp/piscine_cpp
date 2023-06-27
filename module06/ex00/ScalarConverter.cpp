#include "ScalarConverter.hpp"

// Détecter si l'arg est un char
bool isChar(std::string const & arg) {
	if(arg.size() == 1 && std::isprint(arg[0]) && !std::isdigit(arg[0]))
		return true;
	return false;
};

// Détecter si l'arg est un int
bool isInt(std::string const & arg) {
	long int r = std::atol(arg.c_str());
	for (size_t i = 0; i < arg.size(); i++) {
		if(!std::isdigit(arg[i]))
			return false;
	};
	if (r >= std::numeric_limits<int>::min() && r <= std::numeric_limits<int>::max())
		return true;
	std::cout << "number out of int range" << std::endl;
	return false;
}

//Détecter si l'arg est un float
bool isFloat(std::string const & arg) {
	size_t i = 0;
	if (std::isdigit(arg[0])) {
		while (std::isdigit(arg[i])) {
			i++;
			if (i == arg.size())
				return false;
		}
		if (arg[i] == '.' && std::isdigit(arg[i + 1]))
			i++;
		else
			return false;
		while (std::isdigit(arg[i]) && arg[i + 1])
			i++;
		if (arg[i] == 'f' && !arg[i + 1])
			i++;
	};
	if (i == arg.size())
		return true;
	return false;
}

// bool isFloat(std::string const & arg) {
// 	double d = std::strtod(arg.c_str(), NULL);
// 	std::cout << "d : " << d << std::endl;
// 	if (d)
// 		return true;
// 	return false;
// }


// Détecter si l'arg est un double
bool isDouble(std::string const & arg) {

}


// void ScalarConverter::convert(std::string const & arg) {

// };
