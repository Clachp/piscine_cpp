/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:24:11 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/20 18:56:52 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#ifndef _CONTACT_
# define _CONTACT_

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
		static int	get_contact_nbr();
		bool 		is_empty() const;
		void  		add_data(int index);
		void		display_contact(int index) const;
};

#endif