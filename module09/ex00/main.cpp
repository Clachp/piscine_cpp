#include "Bitcoin.hpp"

void parse_input (Bitcoin & obj,char const *argv) {
	std::ifstream file(argv);
	if (file)
		obj.fillMap(file);
	else
		throw Bitcoin::fileException();
}

int main (int argc, char **argv)
{
	try {
		Bitcoin obj;
		if (argc == 2)
			parse_input(obj, argv[1]);
		else
			throw Bitcoin::fileException();
	}
	catch (Bitcoin::fileException &e) {
		std::cerr << e.what() << std::endl;
	}
		return 0;
}