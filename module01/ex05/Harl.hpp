/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:59:59 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/08 12:49:43 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef _HARL_
#define _HARL_

class Harl {

	
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		
	public :
		Harl();
		~Harl();
		void complain( std::string level ); // level = DEBUG, INFO, WARNING, ERROR
		//void (*messageType[4])();
};

#endif