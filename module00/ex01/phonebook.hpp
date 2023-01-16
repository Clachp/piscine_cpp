/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:59:10 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/16 18:38:36 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>
#include "contact.hpp"

class PhoneBook {
		Contact 	entries[3];
		std::string	input;
		int			contact_nbr;
	
	public:
		PhoneBook(char *argv);
		~PhoneBook();
		int 	add_item(std::string content, std::string item);
		void	search();	
		
};

#endif