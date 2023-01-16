/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:24:11 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/16 18:38:29 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#ifndef CONTACT_H
# define CONTACT_H

class Contact {
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_nbr;
		std::string darkest_secret;

	public:		
		Contact();
		~Contact();
		bool 	is_empty(Contact entry);
		void	add_data(Contact entry);
};

#endif