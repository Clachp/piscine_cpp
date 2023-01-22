/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:03:38 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/20 20:07:47 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/* CONSTRUCTOR */

PhoneBook::PhoneBook(void): index(0), search_index(0) {
	std::cout << "\nThis PhoneBook can hold " << Contact::get_contact_nbr() << " contacts 🤙\n" << std::endl;
	return ;
}

/* DESCTRUCTOR */

PhoneBook::~PhoneBook(void) {
	std::cout << "See you soon 💖" << std::endl;
	return ;
}

/* SEARCH CONTACT FUNCTIONS */

void PhoneBook::str_to_int() {
	search_index = 0;
	std::cin >> this->search_input;
    for (long unsigned int i = 0; i < search_input.length(); i++) {
        search_index = search_index * 10 + (search_input[i] - '0');
	}
	if (search_index <= 0)
		std::cout <<  "Unvalid format dan atoi" << std::endl;
}

void PhoneBook::search() {
	std::cout <<  "Please type the contact's index you want to display : ";
	str_to_int();
	if (search_index > 0 && search_index <= 8) //&& entries[search_index - 1] != NULL
		entries[search_index - 1].display_contact(search_index);
	else
		std::cout <<  "NO" << std::endl;	
}

/* RUN PROGRAMM FUNCTION */

void	PhoneBook::run() {
	while (this->input.empty() == true)
	{
		std::cout << "Please type ADD, SEARCH or EXIT : ";
		std::cin >> this->input;
		if (std::cin.eof())
			std::cout << "\nHandling EOF like 💅" << std::endl;
		else
			std::cout << "You typed " << input << std::endl;
		if (input.compare("ADD") == 0) {
			if (index == 8) {
				std::cout << "The Phonebook is full.\nErasing contact in index 1" << std::endl;
				index = 0;
			}
			entries[index].add_data(index); 
			index++;
		}
		else if (input.compare("SEARCH") == 0)
			search();
		else if (input.compare("EXIT") == 0 || std::cin.eof()) 
			return ;
		else	
			std::cout <<  "Unvalid format" << std::endl;
		this->input.clear();
	}
}
