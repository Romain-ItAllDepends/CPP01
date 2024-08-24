/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 07:48:30 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 07:18:19 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	int		i;
	Zombie	*zombieHorde;

	i = 0;
	zombieHorde = new(std::nothrow) Zombie[N];
	if (!zombieHorde)
	{
		std::cerr << "Error on allocation!" << std::endl;
		return (NULL);
	}
	while (i < N) {
		zombieHorde[i].setName(name);
		i++;
	}
	return (zombieHorde);
}
