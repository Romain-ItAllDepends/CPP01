/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:58:20 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 14:55:37 by rgobet           ###   ########.fr       */
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
		while (!(std::cin >> in))
			std::cout << std::endl << "Please enter a level of incident > ";
		harl.complain(in);
		if (i % 3 == 0) {
			do {
				std::cin.clear();
				std::cout << "Do you want to continue ? (y or n) > ";
				std::cin >> in;
			} while (in.empty() == false && in != "y" && in != "n");
			std::cin.clear();
			if (in == "n")
				return (0);
		}
		i++;
	}
	return (0);
}
