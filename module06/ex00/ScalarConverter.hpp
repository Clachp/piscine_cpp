#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

class ScalarConverter {
	public :
		static void convert(std::string const & arg);
		static void charConvert(std::string const & arg);
		static void numberConvert(std::string const & arg);

};

#endif