/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:59:10 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/12 18:46:38 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

class PhoneBook {
	public:
		Contact entries[8];
		
		PhoneBook( void );
		~PhoneBook( void );
		
		void add(std::string item) {
			for (int i = 0; i < 8; i++)
			{
				std::cout << "firstname : ";
				std::cin >> entries[i].firstname;
				std::cout << "lastname : ";
				std::cin >> entries[i].lastname;
				std::cout << "nickname : ";
				std::cin >> entries[i].nickname;
				std::cout << "phone number : ";
				std::cin >> entries[i].phone_nbr;
				std::cout << "darkest secret : ";
				std::cin >> entries[i].darkest_secret;
			}
		};
		void search(std::string item) {
			
			
		};
		void 
};

class Contact {
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_nbr;
		std::string darkest_secret;

	
	
};

#endif