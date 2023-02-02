/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:32:25 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 16:45:52 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "HumanA.hpp"
#include "HumanB.hpp"


#ifndef _WEAPON_
# define _WEAPON_

class Weapon {
	private :
		std::string _type;
		
	public :
		Weapon();
		~Weapon();
		std::string& getType(std::string type);
		std::string setType(std::string type);

};

#endif