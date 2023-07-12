#include "Bitcoin.hpp"

/* CONSTRUCTORS */
Bitcoin::Bitcoin() {
	// seeding the map _data with the DB content
	std::ifstream file("./data/data.csv");
	if (!file)
		throw fileException();
	std::string line = "";
	getline(file, line);
	while (getline(file, line)) 
	{
		std::string::size_type pos = line.find(',');
		if (pos != std::string::npos) {
		std::string date = line.substr(0, pos);
		float value  = std::atof(line.substr(pos + 1).c_str());
		_data[date] = value;
		}
	}
	file.close();
};
Bitcoin::Bitcoin(Bitcoin const & src) {
	*this = src;
};
Bitcoin::~Bitcoin() {};

/* OPERATOR OVERLOAD */
Bitcoin & Bitcoin::operator=(const Bitcoin & rhs) {
	if (this != &rhs)
		_data = rhs._data;
	return *this ;
};

/* METHODS */
void Bitcoin::btcExchange(char *arg) {
	std::ifstream file(arg);
	if (!file) 
		throw fileException ();
	std::string line = "";
	getline(file, line);
	while (getline(file, line)) {
		try {
			getExchange(line);
		}
		catch (lineException &e) {
			std::cerr << e.what() << "=> " << line << std::endl;
		}
		catch (dateException &e) {
			std::cerr << e.what() << "=> " << line.substr(0, line.find('|')) <<  std::endl;
		}
		catch (valueException &e) {
			std::cerr << e.what() << "=> " << line.substr(line.find('|') + 1) << std::endl;
		}
	}
	file.close();
}

void Bitcoin::getExchange(std::string line) {
	if (line.size() < 13) 
		throw lineException();
	std::string::size_type pos = line.find('|');
	if (pos == std::string::npos)
		throw lineException();

	// Parsing the date 
	std::string date = line.substr(0, pos);
	date.erase(0, date.find_first_not_of(" "));
	date.erase(date.find_last_not_of(" ") + 1);
	checkDate(date);

	// Parsing the bitcoin value
	std::string val = line.substr(pos + 1);
    val.erase(0, val.find_first_not_of(" "));
    val.erase(val.find_last_not_of(" ") + 1);
	float value = getValue(val);

	// Converting the bitcoin value regarding the given date 
	std::map<std::string, float>::iterator it = _data.upper_bound(date);
	if (it != _data.begin())
		it--;
	std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}

void Bitcoin::checkDate(std::string date) {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		throw dateException ();	
	for (int i = 0; i < 10; ++i) {
		if (i != 4 && i != 7 && !isdigit(date[i]))
			throw dateException ();
	};
	int y = std::atoi(date.substr(0, 4).c_str());
	int m = std::atoi(date.substr(5, 2).c_str());
	int d = std::atoi(date.substr(8, 2).c_str());
	if ( y < 2009 || y > 2022 || m < 1 || m > 12 || d < 1 || d > 31)
		throw dateException();
}

float  Bitcoin::getValue(std::string val) {
	int dot = 0;

	for (size_t i = 0; i < val.size(); i++) {
		if (!isdigit(val[i]) && val[i] != '.')
			throw valueException();
		if (val[i] == '.')
			dot++;
		else if (dot > 1)
			throw valueException();
	}
	float value = std::atof(val.c_str());
	if (value > 1000) {
		std::cout << "Error: too large a number.\n"; 
		throw valueException();
	}
	return value;
}

/* EXCEPTIONS */
const char* Bitcoin::fileException::what() const throw() {
	return ("Error: could not open file.");
}
const char* Bitcoin::dateException::what() const throw() {
	return ("Error: unvalid date ");
}
const char* Bitcoin::valueException::what() const throw() {
	return ("Error: unvalid value ");
}
const char* Bitcoin::lineException::what() const throw() {
	return ("Error: bad content ");
}