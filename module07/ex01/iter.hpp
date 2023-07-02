#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename TO>
void printElem(TO elem) {
	std::cout << elem << std::endl;
};

template<typename TO>
void up10(TO elem)
{
	TO up = elem + 10;
	std::cout << elem << " + 10 = " << up << std::endl;
}

template<typename TO, typename f_type>
void iter(TO *tab, size_t size, f_type function)
{
	for (size_t i = 0; i < size; ++i)
        function(tab[i]);
	std::cout << std::endl;
}

#endif