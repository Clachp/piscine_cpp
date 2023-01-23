/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:06:21 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/23 19:12:39 by cchapon          ###   ########.fr       */
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
		std::string name;
		
	public :
		void announce (void);
	
};

#endif