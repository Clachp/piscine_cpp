#ifndef  FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cstring>

class Fixed {
    public:
        Fixed( void );
        Fixed(Fixed const & src);
        ~Fixed();
        
        Fixed & operator=(Fixed const & rhs);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );


    private:
        int _raw;
        static const int _bits; 

};

#endif