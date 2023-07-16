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
		void	getExchange(std::string line);
		void	checkDate(std::string date);
		float	getValue(std::string val);

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