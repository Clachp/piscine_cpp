#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

struct type {
	std::string charValue;
	int intValue;
	float floatValue;
	double doubleValue;
};

void strToDecimal(type *t, const std::string& arg);
void intToChar(type *t, const std::string& arg);
void printValues(type *t);

class ScalarConverter {
	public :
		static void convert(type *t, std::string const & arg);
		static void charConvert(type *t, std::string const & arg);
		static void numberConvert(type *t, std::string const & arg);
};

#endif