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

        Fixed & operator=(Fixed const &r); // renvoie une reférence sur l'instance courante
       
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
        static  Fixed & min( Fixed &fixA, Fixed &fixB);
        static  const Fixed & min( Fixed const  &fixA, Fixed const &fixB);
        static  Fixed & max( Fixed &fixA, Fixed &fixB);
        static  const Fixed & max( Fixed const &fixA, Fixed const &fixB);

    private:
        int _raw;
        static const int _bits; 

};
       
std::ostream &operator<<(std::ostream &flow, Fixed const &r);

#endif