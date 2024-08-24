/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:52:51 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 07:52:30 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	getFile(char *str, std::string s1, std::string s2) {
	size_t			i;
	std::string		line;
	std::ifstream	ifs;
	std::ofstream	ofs;
	
	ifs.open (str);
	if (!ifs.is_open())
		std::cout << "Error opening infile";
	ofs.open ("tmp.replace", std::ofstream::app);
	if (!ofs.is_open())
		std::cout << "Error opening outfile";
	getline(ifs, line, '\0');
	i = 0;
	if (line.empty() == false && s1.empty() == false) {
		while (line.find(s1, i) != std::string::npos) {
			i = line.find(s1, i);
			line.erase(i, s1.size());
			line.insert(i, s2);
		} 
	}
	ofs << line << std::endl;
	ifs.close();
	ofs.close();
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "You need three arguments !" << std::endl;
		return (1);
	}
	getFile(av[1], av[2], av[3]);
	return (0);
}