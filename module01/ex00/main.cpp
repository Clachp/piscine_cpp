/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:41:22 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/01 19:05:01 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	Zombie *martin = newZombie("Martin");
	martin->announce();
	delete martin;
	randomChump("Jojo");
	return (0);
}