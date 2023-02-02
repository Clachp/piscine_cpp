/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:06:21 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 13:50:18 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream> 
#include <iomanip>
#include <limits>

#ifndef _ZOMBIE_
# define _ZOMBIE_

class Zombie {
	private :
		std::string _name;
		
	public :
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void announce (void) const;
		std::string get_name(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif