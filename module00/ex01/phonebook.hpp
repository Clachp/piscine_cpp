/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:59:10 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/13 19:40:48 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Contact {
	public:		
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_nbr;
		std::string darkest_secret;
		int			contact_nbr;

		Contact();
		~Contact();
};

class PhoneBook {
	public:
		Contact entries[8];
		
		PhoneBook(int argc, char *argv);
		~PhoneBook();
		bool 	is_empty(Contact entry);
		int 	add_item(std::string content, std::string item);
		void	add(Contact entry);
		void	search();		
};

#endif