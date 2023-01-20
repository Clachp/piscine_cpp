/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:59:10 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/20 20:08:22 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include <limits>
#include "contact.hpp"

#ifndef _PHONEBOOK_
# define _PHONEBOOK_

class PhoneBook {
		Contact 	entries[8];
		std::string input;
		int			index;
		std::string	search_input;
		int			search_index;
	
	public:
		PhoneBook();
		~PhoneBook();
		void 	str_to_int();
		void	search();
		void	run();
};


#endif