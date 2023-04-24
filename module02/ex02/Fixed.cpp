#include "Fixed.hpp"

const int Fixed::_bits = 8;

/* CONSTRUCTORS*/
Fixed::Fixed( void ) : _raw(0) {
    return ;
};
Fixed::Fixed( Fixed const & src ) {
    *this = src;
    return ;
};
Fixed::Fixed( int const fixInt ) {
    this->_raw = fixInt << this->_bits;
    return ;
};
Fixed::Fixed( float const fixFloat ) {
    this->_raw = roundf((fixFloat) * (1 << this->_bits));
    return ;
};

Fixed &Fixed::operator=( Fixed const &r) {
     this->_raw = r._raw;
     return *this;
};

/* COMPARAISON OPERATORS */
bool Fixed::operator>(Fixed const &r) const {
    return this->_raw > r._raw;
};
bool Fixed::operator<(Fixed const &r) const {
    return this->_raw < r._raw;
};
bool Fixed::operator>=(Fixed const &r) const {
    return this->_raw >= r._raw;
};
bool Fixed::operator<=(Fixed const &r) const {
    return this->_raw <= r._raw;
};
bool Fixed::operator==(Fixed const &r) const {
    return this->_raw == r._raw;
};
bool Fixed::operator!=(Fixed const &r) const {
    return this->_raw != r._raw;
};

/*ARITHMETICS OPERATORS*/
Fixed Fixed::operator+(Fixed const &r) {
    return this->toInt() + r.toInt();
};
Fixed Fixed::operator-(Fixed const &r) {
    return this->toInt() - r.toInt();
};
Fixed Fixed::operator*(Fixed const &r) {
    return this->toInt() * r.toInt();
};

/*INCREMENT & DECREMENT OPERATORS*/
Fixed Fixed::operator++( int ) {
    //TODO
};


int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;

};

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
};

float Fixed::toFloat( void ) const {
    float f;

    f = (float)this->_raw / (float)(1 << this->_bits);
    return f;
};

int Fixed::toInt( void ) const {
    return this->_raw >> this->_bits;
};

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
};

std::ostream & operator<<(std::ostream &flow, Fixed const &r) {
    flow << r.toFloat();
    return flow;
};