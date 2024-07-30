/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:52:51 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 13:51:59 by rgobet           ###   ########.fr       */
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
	ofs.open ("tmp", std::ofstream::app);
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
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "You need three arguments !" << std::endl;
		return (1);
	}
	getFile(av[1], av[2], av[3]);
	return (0);
}