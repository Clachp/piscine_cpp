#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void printElem(T elem)
{
	std::cout << elem << std::endl;
};

template<typename T>
void up10(T elem)
{
	T up = elem + 10;
	std::cout << elem << " + 10 = " << up << std::endl;
}

template<typename T, typename f_type>
void iter(T *tab, size_t size, f_type function)
{
	for (size_t i = 0; i < size; ++i)
        function(tab[i]);
}

#endif