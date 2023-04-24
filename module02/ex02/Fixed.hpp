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

        Fixed &operator=(Fixed const &r);
        Fixed &operator<<(Fixed const &r);
       
        /*COMPARAISON OPERATORS*/
        bool operator>(Fixed const &r) const;
        bool operator<(Fixed const &r) const;
        bool operator>=(Fixed const &r) const;
        bool operator<=(Fixed const &r) const;
        bool operator==(Fixed const &r) const;
        bool operator!=(Fixed const &r) const;

        /*ARITHMETICS OPERATORS*/
        Fixed operator+(Fixed const &r);
        Fixed operator-(Fixed const &r);
        Fixed operator*(Fixed const &r);
        Fixed operator/(Fixed const &r);

        /*INCREMENT & DECREMENT OPERATORS*/
        Fixed operator++( int );
        // Fixed &operator-=(Fixed const &r);
        // Fixed &operator<<(Fixed const &r);
        // Fixed &operator<<(Fixed const &r);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        static  int getMin( int &raw_a, int &raw_b);
        static  int getConstMin( int const &raw_a, int const &raw_b);

    private:
        int _raw;
        static const int _bits; 

};
       
std::ostream &operator<<(std::ostream &flow, Fixed const &r);

#endif