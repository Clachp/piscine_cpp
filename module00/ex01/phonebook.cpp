/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:03:38 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/12 19:00:57 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "phonebook.hpp"
#include <iostream>
#include <cstring>

int main (int argc, char **argv)
{
	(void) argc;
	if (strcmp(*(argv + 1), "SEARCH") == 0)
		std::cout << "Yes. c'est " << *(argv + 1) << std::endl;
	return (0);
}