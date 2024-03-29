/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:40:37 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/06 13:06:10 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { return; };

Weapon::Weapon (std::string type): _type(type) { 
	return ; 
};

Weapon::~Weapon() { return; };

const std::string& Weapon::getType() const {
	return this->_type;
};

std::string Weapon::setType(std::string type) {
	_type = type;
	return (_type);
};