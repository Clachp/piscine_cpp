#include "Array.hpp"

template<typename T>
 Array<T>::Array() : _size(5) {
    _tab = new T[_size]; 
    for (size_t i = 0; i < _size; i++) {
        _tab[i] = T();
        std::cout << i << std::endl;
    }
    std::cout << _size << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    _tab = new T[n];
    for (unsigned int i = 0; i < n; i++) {
        _tab[i] = T();
    }
}

template<typename T>
Array<T>::Array(Array const & src) {
    this = &src;
    return ;
}

template<typename T>
Array<T>::~Array() {
    delete[] _tab;
}

template<typename T>
Array<T> & Array<T>::operator=(const Array<T> &rhs) {
    if (this == &rhs)
        return *this;
    delete[] _tab;
    _size = rhs._size;
    _tab = new T[_size];
    for (int i = 0; i < _size; i++)
        _tab[i] = rhs._tab[i];
    return *this;
}

template<typename T>
const T & Array<T>::operator[](size_t index) {
    if (index >= _size)
        throw std::exception();
    return _tab[index];
}

template<typename T>
size_t Array<T>::size() {
    size_t i = 0;
    while (_tab[i])
        i++;
    return i;
}