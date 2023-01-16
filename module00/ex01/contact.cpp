/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:31:54 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/16 18:43:38 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool Contact::is_empty(Contact entry)
{
	if (entry.firstname != ""|| entry.lastname != "" || \
	entry.nickname != "" || entry.phone_nbr != "" || entry.darkest_secret != "")
		return (false);
	return (true);
};

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
};

void	Contact::add_data(Contact entry) 
{
	if (is_empty(entry) == true)
	{
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
		return ;
	}
	std::cout << "The Phonebook is full" << std::endl;
};

Contact::Contact(void) { 
	std::cout << "contact firstname : " << firstname << std::endl;
	return; 
}

Contact::~Contact(void) { 
	
	return; }
