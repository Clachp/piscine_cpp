/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:31:54 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/20 13:47:41 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool Contact::is_empty() const
{
	if (this->firstname != "") /*|| this->lastname != "" || \
	this->nickname != "" || this->phone_nbr != "" || this->darkest_secret != "")*/
		return (false);
	return (true);
};

void check_item(std::string &content, std::string item)
{
	getline(std::cin, content);
	while (content == "")
	{
		std::cout << "Please add content in " << item;
		getline(std::cin, content);
	}
};

void	Contact::add_data() 
{
	if (is_empty() == true)
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
		std::cout << "Contact added succesfully" << std::endl;
		return ;
	}
};

void	Contact::display_contact() const
{
	std::cout<< std::right << std::setw(10)<< "index";
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< "first name";
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< "last name";
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< "nickname" << std::endl;
	
	std::cout<< std::right << std::setw(10)<< Contact::contact_nbr;
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< this->firstname;
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< this->lastname;
	std::cout << " | ";
	std::cout<< std::right << std::setw(10)<< this->nickname << std::endl;
}

int	Contact::get_contact_nbr()
{
	return Contact::contact_nbr;
}

int	Contact::contact_nbr = 0;

Contact::Contact() {
	Contact::contact_nbr++;
	std::cout << "contact nbr : " << contact_nbr << std::endl;
	return; 
}

Contact::~Contact(void) { 
	
	return; }
