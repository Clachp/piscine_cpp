#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void printElem(T elem)
{
	std::cout << elem << std::endl;
};

template<typename T>
void checkValue(T elem, const T &value)
{
	if (elem > value)
		std::cout << elem << " is bigger than " << value << std::endl;
}

template<typename T, typename f_type>
void iter(T tab[], size_t size, f_type function)
{
	for (size_t i = 0; i < size; ++i)
        function(tab[i]);
}

#endif