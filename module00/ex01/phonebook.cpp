/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:03:38 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/13 19:48:14 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool PhoneBook::is_empty(Contact entry)
{
	if (entry.firstname != ""|| entry.lastname != "" || \
	entry.nickname != "" || entry.phone_nbr != "" || entry.darkest_secret != "")
		return (false);
	return (true);
}

int check_item(std::string content, std::string item)
{
	std::cin.ignore();
	getline(std::cin, content);
	while (content == "")
	{
		std::cout << "Please add content in " << item;
		getline(std::cin, content);
	}
	return (0);
}

void PhoneBook::add(Contact entry) {
		std::cout << "firstname : ";
		check_item(entry.firstname, "firstname : ");
		std::cout << "lastname : ";
		check_item(entry.lastname, "lastname : ");
		std::cout << "nickname : ";
		check_item(entry.nickname, "nickname : ");
		std::cout << "phone number : ";
		check_item(entry.phone_nbr, "phone number : ");
		std::cout << "darkest secret : ";
		check_item(entry.darkest_secret, "darkest secret : ");
		std::cout << "Contact added succesfully" << std::endl;
};

PhoneBook::PhoneBook(int argc, char *argv) {
	if (argc == 1)
	{
		std::cout << "Welcome to this amazing PhoneBook program !" << std::endl;
		std::cout << "Please type ADD, SEARCH or EXIT and see all the stuff you can do with this crazy app !!" << std::endl;
	}
	else 
	{
		if (strcmp(argv, "ADD") == 0)
		{
			for (int i = 0; i < 8; i++)
			{
				if (PhoneBook::is_empty(PhoneBook::entries[i]) == true)
				{
					PhoneBook::add(PhoneBook::entries[i]);
					PhoneBook::entries[i].contact_nbr = i;
					std::cout << "Contact nbr = " << entries[i].contact_nbr << std::endl;
					return ;
				}
			}
			std::cout << "The Phonebook is full" << std::endl;
		}
		else if (strcmp(argv, "SEARCH") == 0)
		{
			std::cout << "Yes. c'est " << *(argv + 1) << std::endl;
		}
	}
	return ;
}

PhoneBook::~PhoneBook(void) {
	//std::cout << "PhoneBook destructed" << std::endl;
	return ;
}

Contact::Contact(void) { 
	Contact::contact_nbr = 0;
	return; 
}

Contact::~Contact(void) { return; }



