/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:09:44 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 07:32:17 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	hordeRoar(Zombie *zombies, int n) {
	int	i;

	i = 0;
	while (i < n) {
		zombies[i].announce();
		i++;
	}
}

int	main(void) {
	std::string	name;
	int			number;
	Zombie		*zombies;

	while (42) {
		std::cout << "Choose a name for the zombies of the horde: " << std::endl;
		while (!(std::getline(std::cin, name)) && !std::cin.eof())
		{
			std::cout << "Choose a name for the zombies of the horde: " << std::endl;
			std::cin.clear();
		}
		if (std::cin.eof())
			return (0);
		std::cin.clear();
		std::cout << "Choose the number of zombies for the horde: " << std::endl;
		while (!(std::cin >> number))
		{
			std::cout << "Choose the number of zombies for the horde: " << std::endl;
			std::cin.clear();
		}
		std::cin.clear();
		zombies = zombieHorde(number, name);
		if (!zombies)
			break ;
		hordeRoar(zombies, number);
		do
		{
			std::cin.clear();
			std::cout << std::endl << "Do you want to continue ? (y or n) > ";
			std::cin >> name;
		} while (name.empty() == false && name != "y" && name != "n");
		delete [] zombies;
		if (name == "n") {
			std::cin.clear();
			break ;
		}
		std::cin.clear();
		std::cin.ignore();
	}
	return (0);
}