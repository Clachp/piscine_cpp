/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:21:42 by cchapon           #+#    #+#             */
/*   Updated: 2023/01/20 13:21:25 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main (void) {
	std::cout << "☎️  Welcome to this amazing PhoneBook program ! ☎️\n" << std::endl;
	PhoneBook PhoneBook_obj;
	PhoneBook_obj.run();
return (0);
}