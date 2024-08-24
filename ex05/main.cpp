/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:58:20 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 08:14:40 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl		harl;
	std::string	in;
	int			i;

	i = 0;
	while (42) {
		std::cout << "Please enter a level of incident > ";
		while (!(std::getline(std::cin, in)) && !std::cin.eof())
			std::cout << std::endl << "Please enter a level of incident > ";
		if (std::cin.eof())
			return (0);
		harl.complain(in);
		if (i % 3 == 0) {
			do {
				std::cin.clear();
				std::cout << "Do you want to continue ? (y or n) > ";
				std::getline(std::cin, in);
				if (std::cin.eof())
					return (0);
			} while (in.empty() == false && in != "y" && in != "n");
			std::cin.clear();
			if (in == "n")
				return (0);
		}
		i++;
	}
	return (0);
}
