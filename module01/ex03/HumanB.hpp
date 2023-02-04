/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:43:29 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 16:51:22 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef _HUMANB_
# define _HUMANB_

class HumanB {
		private :
		Weapon _weapon;
		std::string _name;
	
	public :
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon weapon);
		void attack() const;
};

#endif