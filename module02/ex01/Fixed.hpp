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

        Fixed &operator=(Fixed const &rhs);
        Fixed &operator<<(Fixed const &obj);


        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;


    private:
        int _raw;
        static const int _bits; 

};
       
std::ostream &operator<<(std::ostream &flow, Fixed const &obj);

#endif