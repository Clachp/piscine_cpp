/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:51:40 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/08 16:32:32 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) { 
	return ; 
};

HumanB::~HumanB() { return; };

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack() const {
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() <<std::endl;
	else
		std::cout << _name << " doesn't have a weapon " <<std::endl;
};