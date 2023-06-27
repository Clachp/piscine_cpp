#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

//récupérer le type de littéral passé en parametre : char, int, float, double 
//convertir l'argument de char* vers son type
//puis le convertir vers les 3 autres types 

bool isChar(std::string const & arg);
bool isInt(std::string const & arg);
bool isFloat(std::string const & arg);
bool isDouble(std::string const & arg);

class ScalarConverter {
	public :
		static void convert(std::string const & arg);

		

};

#endif