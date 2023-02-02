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

HumanB::HumanB() { return; };

HumanB::~HumanB() { return; };

void HumanB::attack() const {
	std::cout << name << " attacks with their " << weapon type << std::endl;
};