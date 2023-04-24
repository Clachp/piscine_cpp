/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:00:05 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/08 14:12:01 by cchapon          ###   ########.fr       */
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
    std::string message[] = { "DEBUG", "INFO", "WARNING", "ERROR" } ;
    int i = 0;
    while (message[i].data()) {
        if (message[i] == level.data())
            break ;
        i++;
    }
    switch (i) {
        case 0 : std::cout << "[ " << message[0] << " ] " <<std::endl; debug();
        case 1 : std::cout << "[ " << message[1] << " ] " <<std::endl; info();
        case 2 : std::cout << "[ " << message[2] << " ] " <<std::endl; warning();
        case 3 : std::cout << "[ " << message[3] << " ] " <<std::endl;  error(); break;
        default : std::cout << "Unknown argument" << std::endl;
    }
}; 
