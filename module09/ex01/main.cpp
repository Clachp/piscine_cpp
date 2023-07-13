#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Bad argument number\n";
		return 1;
	}
	try {
		RPN obj;
		std::string arg = argv[1];
		std::cout << obj.calculate(arg) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error\n";
	}	
	return 0;
}