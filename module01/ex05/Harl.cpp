/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:00:05 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/08 13:13:49 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { return; };

Harl::~Harl() { return; };

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
};

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. "; 
    std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
};

void Harl::warning(void) {
    std::cout <<  "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(void) {
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level) {
	typedef void (Harl::*ptr)();
    std::string list[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    ptr messageType[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error }; 
    for (int i = 0; i < 4; i++) {
        if (list[i].compare(level) == 0) {
           std::cout << level << std::endl;
           (this->*messageType[i])();
           return ;
        }
    }
    std::cout << "Unknown argument" << std::endl;
}; 
