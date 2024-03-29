#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed( void ) : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
};

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
};

Fixed & Fixed::operator=( Fixed const & rhs) {
     std::cout << "Copy assignment operator called" << std::endl;
     this->_raw = rhs.getRawBits();
     return *this;
};

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;

};

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
};

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
};