/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:40:37 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 16:33:24 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon () { return; };

Weapon::~Weapon() { return; };

std::string& Weapon::getType(std::string type) {
	std::string& typeREF  = type;
	return (typeREF);
};

std::string Weapon::setType(std::string newType) {
	_type = newType;
	return (_type);
};