/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:03:38 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/16 18:44:42 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	get_input(std::string input)
{
	std::cout << "Please type ADD, SEARCH or EXIT : ";
	std::cin >> input;
	//std::cout << "You typed " << input << std::endl;
	return (input);
}

PhoneBook::PhoneBook(char *argv) {
	while (1)
	{
		input = get_input(input);
		std::cout << "You typed " << input << std::endl;
		if (input.compare("ADD") == 0)
		{
			//add_contact(entries);
			std::cout << "contact nbr = " << std::endl;
			
		}
		else if (PhoneBook::input.compare("SEARCH") == 0)
			std::cout << "Yes. c'est " << argv << std::endl;
		else if (PhoneBook::input.compare("EXIT") == 0)
		{
			PhoneBook::~PhoneBook();
			return ;
		}
		//get_input(PhoneBook::input);
	}
}

PhoneBook::~PhoneBook(void) {
	std::cout << "See you soon !" << std::endl;
	return ;
}
