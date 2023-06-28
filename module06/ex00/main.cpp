#include "ScalarConverter.hpp"

int checkArg(std::string arg) {
    int dot = 0;
	int ef = 0;
	if (arg.length() > 1) {
		for (size_t i = 0; i < arg.length(); i++) {
			if (arg[i] == '.')
				dot++;
			else if (arg[i] == 'f')
				ef++;
			else if (!std::isdigit(arg[i]) || dot > 1 || ef > 1) {
				std::cout << "ERROR" << std::endl;
				return 1;
			}
		}
		if (dot > 1 || ef > 1) {
			std::cout << "ERROR" << std::endl;
			return 1;
		}
	}
    return 0;
}

int main (int argc, char **argv)
{
    type data;
    data.charValue = "";
	data.intValue = 0;
	data.floatValue = 0.0f;
	data.doubleValue = 0.0;
    if (argc != 2) {
        std::cout << "One argument needed" << std::endl;
        return 0;
    }
    std::string arg = argv[1];
    if (!checkArg(arg))
        ScalarConverter::convert(&data, arg);
    return 0;
}