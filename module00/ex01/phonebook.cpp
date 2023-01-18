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

std::string	PhoneBook::get_input(std::string input, std::string message) const {
	std::cout << message;
	std::cin >> input;
	return (input);
}

// void	PhoneBook::search(std::string input) const
// {
	
// }

PhoneBook::PhoneBook(char *arg): index(0) 
{
	while (*arg)
	{
		input = get_input(input, "Please type ADD, SEARCH or EXIT : ");
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

PhoneBook::~PhoneBook(void) {
	std::cout << "See you soon !" << std::endl;
	return ;
}
