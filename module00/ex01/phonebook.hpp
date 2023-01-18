/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:59:10 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/18 19:14:19 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>
#include <iomanip>
#include "contact.hpp"

class PhoneBook {
		Contact 	entries[3];
		std::string input;
		int			index;
	
	public:
		PhoneBook(char *arg);
		~PhoneBook();
		int 		add_item(std::string content, std::string item);
		void		search();
		std::string	get_input(std::string input, std::string message) const;
		void		search(Contact *entries) const;
		
};

#endif