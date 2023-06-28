#include "ScalarConverter.hpp"

void strToDecimal(type *t, const std::string& arg) {
	if (arg[arg.length() - 1] == 'f') {
		t->floatValue = std::atof(arg.c_str());
		t->doubleValue = static_cast<double>(t->floatValue);
	} 
	else {
		t->doubleValue = std::atof(arg.c_str());
		t->floatValue = static_cast<float>(t->doubleValue);
	}
};

void intToChar(type *t, const std::string& arg) {
	t->intValue = std::atoi(arg.c_str());
	if (t->charValue == "" && t->intValue < 127 && t->intValue > 31) {
		t->charValue = "'";
		t->charValue += static_cast<char>(t->intValue);
		t->charValue += "'";
	}
	else if (t->charValue == "") {
		t->charValue = "Non displayable";
	}
}; 

void printValues(type *t) {
	std::cout << "char: " << t->charValue << std::endl;

	if (t->charValue == "impossible")
		std::cout << "int: impossible" << std::endl;
	else if (t->doubleValue < std::numeric_limits<int>::max() && t->doubleValue > std::numeric_limits<int>::min())
		std::cout << "int: " << t->intValue << std::endl;
	else
		std::cout << "int: Non displayable" << std::endl;

	if (t->charValue == "impossible" && t->floatValue == 0) {
		std::cout << "float: impossible\ndouble: impossible" << std::endl;
	} 
	else {
		if (t->charValue != "impossible" && t->floatValue - static_cast<int>(t->floatValue) == 0) {
			std::cout << "float: " << t->floatValue << ".0f" << std::endl;
			std::cout << "double: " << t->doubleValue << ".0" << std::endl;
		} 
		else {
			std::cout << "float: " << t->floatValue << "f" << std::endl;
			std::cout << "double: " << t->doubleValue << std::endl;
		}
	}
};