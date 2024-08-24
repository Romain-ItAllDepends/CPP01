/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:09:44 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 07:10:14 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::string	name;
	Zombie		*zombie;

	while (42) {
		do
		{
			std::cout << "Choose a name for the zombie: (newZombie)" << std::endl;
			continue ;
		} while (!std::getline(std::cin, name) && !std::cin.eof());
		if (std::cin.eof())
			return (0);
		std::cin.clear();
		zombie = newZombie(name);
		do
		{
			std::cout << "Choose a name for the zombie: (randomChump)" << std::endl;
			continue ;
		} while (!std::getline(std::cin, name) && !std::cin.eof());
		if (std::cin.eof())
			return (0);
		randomChump(name);
		zombie->announce();
		do
		{
			std::cin.clear();
			std::cout << std::endl << "Do you want to continue ? (y or n) > ";
			std::getline(std::cin, name);
		} while (name.empty() == false && name != "y" && name != "n");
		delete(zombie);
		if (name == "n" || std::cin.eof()) {
			std::cin.clear();
			std::cout << std::endl;
			break ;
		}
		std::cin.clear();
	}
	return (0);
}