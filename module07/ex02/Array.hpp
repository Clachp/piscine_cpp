#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
    public:
        Array();
        Array(unsigned int n); 
        Array(Array const & src);
        ~Array();

        Array & operator=(const Array &rhs);
        const T & operator[](size_t index);

        size_t size();

        // class badIndex : public std::excetpion {

        // }

        private:
            T *_tab;
            size_t _size;
};

#endif