/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:51:40 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 16:58:22 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon weapon) { 

	return; 
};

HumanA::~HumanA() { return; };

void HumanA::attack() const {
	std::cout << name << " attacks with their " << weapon type << std::endl;
};