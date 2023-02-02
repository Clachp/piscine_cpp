/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:41:22 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/02 14:37:24 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstring>
#include <iostream>

int main (void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string's address : " << &str << std::endl;
	std::cout << "Adress in stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress in stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string's value : " << str << std::endl;
	std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF : " << stringREF << std::endl;
}