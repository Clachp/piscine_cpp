/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:31:54 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/20 20:11:19 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/* NUMBER OF CONTACTS GENERATED */

int	Contact::contact_nbr = 0;

int	Contact::get_contact_nbr() {
	return Contact::contact_nbr;
}

/* CONSTRUCTOR */

Contact::Contact() {
	Contact::contact_nbr++;
	return ; 
}

/* DESCTRUCTOR */

Contact::~Contact(void) { return; }

/* ADDING DATA FUNCTIONS */

void check_item(std::string &content, std::string item)
{
	getline(std::cin, content);
	while (content == "")
	{
		std::cout << "Please add content in " << item;
		getline(std::cin, content);
	}
};

void	Contact::add_data(int index) 
{
	if (this->firstname == "" || index < 8)
	{
		std::cout << "firstname : ";
		getline(std::cin, this->firstname);
		check_item(this->firstname, "firstname : ");
		std::cout << "lastname : ";
		check_item(this->lastname, "lastname : ");
		std::cout << "nickname : ";
		check_item(this->nickname, "nickname : ");
		std::cout << "phone number : ";
		check_item(this->phone_nbr, "phone number : ");
		std::cout << "darkest secret : ";
		check_item(this->darkest_secret, "darkest secret : ");
		std::cout << "Contact added succesfully in index " << index + 1 <<  std::endl;
		return ;
	}
};

/* DISPLAY DATA FUNCTIONS */

std::string truncate_str(std::string str)
{
	if (str.length() < 10)
		return(str);
	str.resize(10);
	if (str[9])
		str[9] = '.';
	return (str);
}

void	Contact::display_contact(int index) const
{
	if (this->firstname == ""|| index > 8)
	{
		std::cout << "No contact in index " << index << std::endl;
		return ;
	} 
	std::cout << std::right << std::setw(10)<< "index";
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< "first name";
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< "last name";
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< "nickname" << std::endl;
	std::cout<< std::right << std::setw(10)<< index;
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< truncate_str(this->firstname);
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< truncate_str(this->lastname);
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< truncate_str(this->nickname) << std::endl;
}