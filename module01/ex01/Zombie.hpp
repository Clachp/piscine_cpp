/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:06:21 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/01 19:17:36 by cchapon          ###   ########.fr       */
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
		void announce (void);
		std::string get_name(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);

#endif