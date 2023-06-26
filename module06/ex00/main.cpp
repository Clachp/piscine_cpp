#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "One argument needed" << std::endl;
        return 0;
    }
    if (isChar(argv[1]))
        std::cout << "Yes char : " << argv[1] << std::endl;
    else
        std::cout << "No char : " << argv[1] << std::endl;
    if (isInt(argv[1]))
        std::cout << "Yes int : " << argv[1] << std::endl;
    else
        std::cout << "No int : " << argv[1] << std::endl;
    return 0;
}