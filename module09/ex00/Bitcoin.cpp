#include "Bitcoin.hpp"

Bitcoin::Bitcoin() {};

Bitcoin::Bitcoin(Bitcoin const & src) {
	*this = src;
};

Bitcoin::~Bitcoin() {};

Bitcoin & Bitcoin::operator=(const Bitcoin & rhs) {
	(void) rhs;
	return *this ;
};

std::string  Bitcoin::getDate(std::string &line, std::string::size_type & pos) {
	std::string date = line.substr(0, pos);
	date.erase(0, date.find_first_not_of(" "));
	date.erase(date.find_last_not_of(" ") + 1);
	if (date.length() == 10 && (date[4] == '-' || date[7] == '-')) {
		for (int i = 0; i < 10; ++i) {
			if (i != 4 && i != 7 && !isdigit(date[i]))
				throw dateException(date);
		}
	}
	else
		throw dateException(date);
	return date;
}

float  Bitcoin::getValue(std::string &line, std::string::size_type & pos) {
	std::string str = line.substr(pos + 1);
    str.erase(0, str.find_first_not_of(" "));
    str.erase(str.find_last_not_of(" ") + 1);
	int dot = 0;
	for (size_t i = 0; i < str.size(); i++) {
		if (!isdigit(str[i]) && str[i] != '.')
			throw valueException();
		if (str[i] == '.')
			dot++;
		else if (dot > 1)
			throw valueException();
	}
	float valueFloat = 0.0f;
	std::istringstream(str) >> valueFloat;
	if (valueFloat > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		throw valueException();
	}
	return valueFloat;
}

void Bitcoin::fillMap(std::ifstream & file) {
	std::string line;
    while (std::getline(file, line)) {
        std::string::size_type pos = line.find('|');
		try {
        	if (pos != std::string::npos) {
				std::string date = getDate(line, pos);
				int value  = getValue(line, pos);
				std::cout << "date = " << date << ", value = " << value << std::endl;
				_rate[date] = value;
			}
			else
				throw badContentException();
        }
		catch (Bitcoin::dateException &e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bitcoin::valueException &e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bitcoin::badContentException &e) {
			std::cerr << e.what() << line << std::endl;
		}
    }
    file.close();
};

const char* Bitcoin::fileException::what() const throw() {
	return ("Error: could not open file.");
}

const char* Bitcoin::dateException::what() const throw() {
	std::string str = "Error: unvalid date => " + _err;
	return str.c_str();
}

const char* Bitcoin::valueException::what() const throw() {
	return ("Error: unvalid value => ");
}

const char* Bitcoin::badContentException::what() const throw() {
	return ("Error: bad content => ");
}


