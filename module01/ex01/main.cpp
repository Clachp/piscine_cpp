/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:41:22 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 13:58:13 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	Zombie *martins = zombieHorde(3, "Martin");
	for (int i = 0; i < 3; i++) {
		(martins + i)->announce();
	}
	delete [] martins;
	return (0);
}