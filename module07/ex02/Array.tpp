#include "Array.hpp"
#include "../ex01/iter.hpp"

template<typename T>
 Array<T>::Array() : _size(5) {
    _tab = new T[_size]; 
    for (size_t i = 0; i < _size; i++) {
        _tab[i] = T(); //Conseil: Essayez de compiler int *a = new int(); puis affichez *a
        std::cout << "tab[" << i << "] = " <<  _tab[i] << std::endl;
    }
    return ;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    _tab = new T[_size];
    for (unsigned int i = 0; i < _size; i++) {
        _tab[i] = T();
    }
}

template<typename T>
Array<T>::Array(Array const & src) {
    _size = src._size;
    _tab = new T[_size];
    for (size_t i = 0; i < _size; i++)
        _tab[i] = src._tab[i];
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
T & Array<T>::operator[](size_t index) {
    if (index >= _size)
        throw Array<T>::badIndexException();
    return _tab[index];
}

template<typename T>
size_t Array<T>::size() const {
    return _size;
}

template<typename T>
void Array<T>::fill(const T & val) {
    for (size_t i = 0; i < _size; i++)
        _tab[i] = val;
};

template<typename T>
void Array<T>::printArray() const {
    iter<T>(_tab, _size, printElem<T>);
};

template<typename T>
const char* Array<T>::badIndexException::what() const throw() {
    return ("Bad index exception using the [] operator\n");
};