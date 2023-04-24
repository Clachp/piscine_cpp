/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:41:22 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/08 15:03:50 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	Zombie *martin = newZombie("Martin");
	std::cout << "NO ! Now I am " << martin->get_name("Patrice") << std::endl;
	martin->announce();
	delete martin;
	randomChump("Jojo");
	return (0);
}