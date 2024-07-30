/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 07:48:30 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 08:26:34 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	int		i;
	Zombie	*zombieHorde;

	i = 0;
	zombieHorde = new Zombie[N];
	while (i < N) {
		zombieHorde[i].setName(name);
		i++;
	}
	return (zombieHorde);
}
