#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
class Array {
    public:
        Array();
        Array(unsigned int n); 
        Array(Array const & src);
        ~Array();

        Array & operator=(const Array &rhs);
        T & operator[](size_t index);  // not returning const T for [] to be a reading and writing operator

        size_t size() const;
        void printArray() const;

        struct badIndexException : public std::exception {
            virtual const char* what() const throw();
        };

        private:
            T *_tab;
            size_t _size;
};

#endif