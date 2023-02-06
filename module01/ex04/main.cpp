/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:51:37 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/06 19:29:27 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// TODO : retour a la ligne, string vide, nom du ficher cree

int main (int argc, char **argv)
{
	if (argc == 4) {
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		std::ifstream file(argv[1]);
		if (!file) {
			std::cerr << "Error creating infile" << std::endl;
			return (0);
		}
		std::ofstream file_replace("file.replace");
		if (!file_replace) {
			std::cerr << "Error creating outfile" << std::endl;
			return (0);
		}
		std::string line;
		int pos;
		while (getline(file, line))
		{
			pos = line.find(argv[2]);
			while (pos >= 0)
			{
				line.erase(pos, s1.length());	
				line.insert(pos, argv[3]);
				pos = line.find(argv[2]);
			}
			file_replace << line << std::endl;
		}
	}
	else
		std::cout << "Wrong argument number" << std::endl;
	return (0);
}