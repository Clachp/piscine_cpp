/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:43:18 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/01 19:02:14 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << "Hello " << name << std::endl;
	return ;
}

Zombie::Zombie() {
	return ;
}

void Zombie::announce (void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::get_name(std::string name) {
	this->_name = name;
	std::cout << "Hi " << name << std::endl; 
}

Zombie::~Zombie(void) {
	std::cout << _name << " has been destroyed" << std::endl;
	return ;
}

