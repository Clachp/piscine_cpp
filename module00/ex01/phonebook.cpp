/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:03:38 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/18 19:14:12 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// void	PhoneBook::get_input() {
// 	std::cout << "Please type ADD, SEARCH or EXIT : ";
// 	std::cin >> this->input;
// }

void	PhoneBook::run() {
	while (1)
	{
		std::cout << "Please type ADD, SEARCH or EXIT : ";
		std::cin >> this->input;
		std::cout << "You typed " << input << std::endl;
		if (input.compare("ADD") == 0)
		{
			if (index == 3)
				std::cout << "The Phonebook is full" << std::endl;
			else
			{
				entries[index].add_data(); 
				index++;
				std::cout << "Index = " << index << std::endl;
			}
		}
		else if (input.compare("SEARCH") == 0)
		{
			entries[0].display_contact();
		}
		else if (input.compare("EXIT") == 0)
			return ;
	}
}

PhoneBook::PhoneBook(void): index(0) 
{
	std::cout << "Welcome to this amazing PhoneBook program !" << std::endl;
	std::cout << "Please type ADD, SEARCH or EXIT and see all the crazy stuff you can do !!" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "See you soon !" << std::endl;
	return ;
}
