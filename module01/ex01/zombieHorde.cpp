/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:25:11 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 13:49:13 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		(zombies + i)->get_name(name);
		//(zombies + i)->announce();
	}
	return (zombies);
};