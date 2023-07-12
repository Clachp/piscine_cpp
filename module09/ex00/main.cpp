#include "Bitcoin.hpp"

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error: could not open file.\n";
		return 1;
	}
	try { 
		Bitcoin obj;
		obj.btcExchange(argv[1]);
	} 
	catch (Bitcoin::fileException & e) { 
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}