/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:42:44 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 17:13:31 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef _HUMANA_
# define _HUMANA_

class HumanA {
	private :
		std::string _name;
		Weapon& _weapon;
	
	public :
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack() const;
};

#endif