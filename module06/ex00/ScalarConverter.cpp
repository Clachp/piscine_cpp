#include "ScalarConverter.hpp"

std::string special[6] = { "-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

void ScalarConverter::convert(type *t, const std::string& arg) {
	if (arg.size() == 1 && std::isprint(arg[0]) && !std::isdigit(arg[0]))
		charConvert(t, arg);
	else 
		numberConvert(t, arg);
}

void ScalarConverter::charConvert(type *t, const std::string& arg) {	
	t->charValue = arg[0];
	std::cout << "char: " << t->charValue
	<< "\nint: " << static_cast<int>(t->charValue[0])
	<< "\nfloat: " << static_cast<float>(t->charValue[0]) << ".0f"
	<< "\ndouble: " << static_cast<double>(t->charValue[0]) << ".0" << std::endl;
}

void ScalarConverter::numberConvert(type *t,const std::string& arg) {
	for (int i = 0; i < 6; i++) {
		if (arg == special[i]) {
			t->charValue = "impossible";
			break;
		}
	}
	strToDecimal(t, arg);
	intToChar(t, arg);
	printValues(t);
}