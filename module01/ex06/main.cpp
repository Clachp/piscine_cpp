/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:59:53 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/08 14:14:38 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
    if (argc == 2) {
        Harl harl_obj;
        harl_obj.complain(argv[1]);
    }
    else
        std::cout << "Enter DEBUG, INFO, WARNING or ERROR to get a message" << std::endl;
    return (0);
}