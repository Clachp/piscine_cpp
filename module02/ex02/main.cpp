#include "Fixed.hpp"

int main( void ) { 

    Fixed       a(4); 
   // Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
    Fixed b(6);
    Fixed c;

    c = a * b;
    a++;

    if (a == b)
        std::cout << "vrai" << std::endl; 
    else
        std::cout << "faux" << std::endl; 

    std::cout << "c : " << c << std::endl;
    std::cout << "a++ : " << a << std::endl; 
    // std::cout << ++a << std::endl; 
    // std::cout << a << std::endl; 
    // std::cout << a++ << std::endl; 
    // std::cout << a << std::endl; 
    // std::cout << b << std::endl; 
    // std::cout << Fixed::max( a,b ) << std::endl
    
    return 0;
}