#include "Fixed.hpp"

int main( void ) { 

    Fixed      a(3); 
    Fixed       v;
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
    Fixed c( a / v);
    Fixed e(a);

    //a++;
    std::cout << "c : " << c << std::endl;
    std::cout << "a / b : " << a / b << std::endl; 
    std::cout << "b : " << b << std::endl;
    std::cout << "a : " << a << std::endl; 
    if (c < (a * b))
        std::cout << "vrai" << std::endl; 
    else
        std::cout << "faux" << std::endl; 

    std::cout << "c : " << c << std::endl;
    std::cout << "a : " << a << std::endl; 
    std::cout << "++a : " << ++a << std::endl; 
    std::cout << "a : " << a << std::endl; 
    std::cout << "a++ : " << a++ << std::endl; 
    std::cout << a << std::endl; 
    std::cout << b << std::endl; 
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( b, e ) << std::endl;
    return 0;
}