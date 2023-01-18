/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:24:11 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/18 18:28:56 by cchapon          ###   ########.fr       */
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
		static int	contact_nbr;

	public:		
		Contact();
		~Contact();
		bool 	is_empty() const;
		void   add_data();
		void	search() const;
		void	display_contact() const;
		static int	get_contact_nbr();
};

#endif