/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:51:37 by cchapon           #+#    #+#             */
/*   Updated: 2023/02/08 17:17:36 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv)
{
	if (argc == 4) {
		std::string filename(argv[1]), s1(argv[2]), s2(argv[3]), line;
		int pos =0;
		
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
				pos += s2.length();
				pos = line.find(s1, pos);
			}
			file_replace << line;
			if (!file.eof())
				file_replace << std::endl;
		}
	}
	else
		std::cout << "Wrong argument number" << std::endl;
	return (0);
}