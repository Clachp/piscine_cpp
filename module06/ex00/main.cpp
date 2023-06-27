#include "ScalarConverter.hpp"

void display (char c, int i, float f, double d) {
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;

}

int main (int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "One argument needed" << std::endl;
        return 0;
    }

    return 0;
}