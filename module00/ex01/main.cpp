/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:21:42 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/18 19:14:29 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main (int argc, char **argv)
{
	if (argc == 1)
	{	
		std::cout << "Welcome to this amazing PhoneBook program !" << std::endl;
		std::cout << "Please type ADD, SEARCH or EXIT and see all the crazy stuff you can do !!" << std::endl;
		PhoneBook PhoneBook_obj(argv[0]);
	}

	return (0);
}