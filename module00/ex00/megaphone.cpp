#include <iostream>

int main (int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	for (int i = 1; i < argc; i++)
	{
		std::string arg(argv[i]);
		for (int j = 0; arg[j]; j++)
			arg[j] = toupper(arg[j]);
		std::cout << arg;
	}
	std::cout << std::endl;
	return (0);
}