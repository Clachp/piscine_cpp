#ifndef  FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cstring>
#include <fstream> 
#include <iomanip>
#include <limits>
#include <cmath>

class Fixed {
    public:
        Fixed( void );
        Fixed( int const fixInt);
        Fixed( float const fixFloat);
        Fixed(Fixed const &src);
        ~Fixed();

        Fixed & operator=(Fixed const &r); // renvoie une reférence sur l'instance courante car possibilité de chainer les assignations
        Fixed & operator<<(Fixed const &r);
       
        /*COMPARAISON OPERATORS*/
        bool operator>(Fixed const &r) const;
        bool operator<(Fixed const &r) const;
        bool operator>=(Fixed const &r) const;
        bool operator<=(Fixed const &r) const;
        bool operator==(Fixed const &r) const;
        bool operator!=(Fixed const &r) const;

        /*ARITHMETICS OPERATORS*/
        Fixed operator+(Fixed const &r); // renvoie une copie de l'instance courante
        Fixed operator-(Fixed const &r);
        Fixed operator*(Fixed const &r);
        Fixed operator/(Fixed const &r);

        /*INCREMENT & DECREMENT OPERATORS*/
        Fixed &operator++(); // prefix increment
        Fixed operator++( int ); //postfix increment
        Fixed &operator--();
        Fixed operator--(int);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        static  Fixed & min( Fixed &raw_a, Fixed &raw_b);
        static  const Fixed & min( Fixed const  &raw_a, Fixed const &raw_b);
        static  Fixed & max( Fixed &raw_a, Fixed &raw_b);
        static  const Fixed & max( Fixed const &raw_a, Fixed const &raw_b);

    private:
        int _raw;
        static const int _bits; 

};
       
std::ostream &operator<<(std::ostream &flow, Fixed const &r);

#endif