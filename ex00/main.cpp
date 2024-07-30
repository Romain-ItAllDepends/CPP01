/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:09:44 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 08:27:32 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::string	name;
	Zombie		*zombie;

	while (42) {
		std::cout << "Choose a name for the zombie: (newZombie)" << std::endl;
		while (!(std::cin >> name))
		{
			std::cout << "Choose a name for the zombie: (newZombie)" << std::endl;
			continue ;
		}
		std::cin.clear();
		zombie = newZombie(name);
		std::cout << "Choose a name for the zombie: (randomChump)" << std::endl;
		while (!(std::cin >> name))
		{
			std::cout << "Choose a name for the zombie: (randomChump)" << std::endl;
			continue ;
		}
		randomChump(name);
		do
		{
			std::cin.clear();
			std::cout << std::endl << "Do you want to continue ? (y or n) > ";
			std::cin >> name;
		} while (name.empty() == false && name != "y" && name != "n");
		delete(zombie);
		if (name == "n") {
			std::cin.clear();
			break ;
		}
		std::cin.clear();
	}
	return (0);
}