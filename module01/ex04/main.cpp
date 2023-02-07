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
#include <string>

// TODO : retour a la ligne

int main (int argc, char **argv)
{
	if (argc == 4) {
		std::string filename(argv[1]), s1(argv[2]), s2(argv[3]), line;
		int pos;
		if (s1 == "" || s2 == "")
			return (std::cerr << "Empty string WTF" << std::endl, 0);
		std::ifstream file(filename.data());
		if (file.good() == false) {
			std::cerr << "Error creating infile" << std::endl;
			return (file.rdstate());
		}
		std::ofstream file_replace(filename.append(".replace").data());
		if (file_replace.good() == false) {
			std::cerr << "Error creating outfile" << std::endl;
			return (file_replace.rdstate());
		}
		while (getline(file, line)) {
			pos = line.find(s1);
			while (pos >= 0 && s1.compare(s2) != 0) {
				line.erase(pos, s1.length());	
				line.insert(pos, s2);
				pos = line.find(s1);
			}
			file_replace << line << std::endl;
		}
	}
	else
		std::cout << "Wrong argument number" << std::endl;
	return (0);
}