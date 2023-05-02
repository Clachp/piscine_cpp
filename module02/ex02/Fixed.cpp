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
Fixed & Fixed::operator=( Fixed const &r) {
     this->_raw = r._raw;
     return *this;
};

/* DESCTRUCTOR */
Fixed::~Fixed() {
    return ;
};

/* COMPARISON OPERATORS */
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

/* ARITHMETICS OPERATORS */
Fixed Fixed::operator+(Fixed const &r) {
    return this->toFloat() + r.toFloat(); // On est obligés de renvoyer une nouvelle instance 
};
Fixed Fixed::operator-(Fixed const &r) {
    return this->toFloat() - r.toFloat();
};
Fixed Fixed::operator*(Fixed const &r) {
    return this->toFloat() * r.toFloat();
};
Fixed Fixed::operator/(Fixed const &r) {
    return this->toFloat() / r.toFloat();
};

/* INCREMENT & DECREMENT OPERATORS */
Fixed & Fixed::operator++( ) {
    _raw++;
    return *this;
};
Fixed Fixed::operator++( int ) { // Postfix increment
    Fixed old = *this;
    operator++();
    return old;
};
Fixed & Fixed::operator--( ) { // Prefix decrement
    _raw--;
    return *this;
};
Fixed Fixed::operator--( int ) { // Postfix decrement
    Fixed old = *this;
    operator--();
    return old;
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

Fixed & Fixed::min( Fixed &raw_a, Fixed &raw_b) {
    if (raw_a <= raw_b)
        return raw_a;
    else
        return raw_b;
};
Fixed const & Fixed::min( Fixed const &raw_a, Fixed const &raw_b) {
    if (raw_a <= raw_b)
        return raw_a;
    else
        return raw_b;
};
Fixed & Fixed::max( Fixed &raw_a, Fixed &raw_b) {
    if (raw_a >= raw_b)
        return raw_a;
    else
        return raw_b;
};
Fixed const & Fixed::max( Fixed const &raw_a, Fixed const &raw_b) {
    if (raw_a >= raw_b)
        return raw_a;
    else
        return raw_b;
};


std::ostream & operator<<(std::ostream &flow, Fixed const &r) {
    flow << r.toFloat();
    return flow;
};