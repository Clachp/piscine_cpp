#include "Fixed.hpp"

const int Fixed::_bits = 8;

/* CONSTRUCTORS */
Fixed::Fixed( void ) : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
};
Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
};
Fixed::Fixed( int const fixInt ) {
    std::cout << "Int constructor called" << std::endl;
    this->_raw = fixInt << this->_bits;
    return ;
};
Fixed::Fixed( float const fixFloat ) {
    std::cout << "Float constructor called" << std::endl;
    this->_raw = roundf((fixFloat) * (1 << this->_bits));

    return ;
};

/* DESCRUCTOR */
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
};

/* ASSIGNEMENT OPERATOR OVERLOAD */
Fixed &Fixed::operator=( Fixed const & rhs) {
     std::cout << "Copy assignment operator called" << std::endl;
     this->_raw = rhs._raw;
     return *this;
};

/* ACCESSORS */
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;

};
void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
};

/* MEMBER FUNCTIONS */
float Fixed::toFloat( void ) const {
    float f;

    f = (float)this->_raw / (float)(1 << this->_bits);
    return f;
};
int Fixed::toInt( void ) const {
    return this->_raw >> this->_bits;
};


std::ostream & operator<<(std::ostream & flow, Fixed const & obj) {
    flow << obj.toFloat();
    return flow;
};