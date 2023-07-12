#ifndef BITCOIN_HPP
# define BITCOIN_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>

class Bitcoin {
	public:
		Bitcoin();
		Bitcoin(Bitcoin const & src);
		~Bitcoin();

		Bitcoin & operator=(Bitcoin const & rhs);

		void	btcExchange(char *arg);
		void	checkLine(std::string line);
		void	getExchange();
		void	checkDate(std::string date);
		void	checkValue(std::string val);

		class fileException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class dateException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class valueException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class lineException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		std::map<std::string, float> _data;

};

#endif
//map
//A quoi sert le inputfile ? => storing the different prices & dates to evaluate

// output = valeur des 

// 1) parsing : - format de l'argument
//				- contenu de l'inputfile : format "date | value"
//				- date = year-month-day
//				- value = float ou int entre 0 et 1000

// 2) formatage des donnnees : dans le fichier data.csv, tu cherches la date correspondant 
// a la date de l'input, tu reccupere l'exchange_rate correspondant pour le multiplier avec la value de l'inputfile correspndant a la date

// 2) Gestion d'erreur: - 