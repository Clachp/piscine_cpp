/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:51:40 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 16:56:38 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) { 
	return ; 
};

HumanB::~HumanB() { return; };

void HumanB::setWeapon(Weapon weapon) {
	this->_weapon = weapon.getType();
}
void HumanB::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() <<std::endl;
};