/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:10:08 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 07:17:31 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie	*newZombie = new(std::nothrow) Zombie(name);
	if (!newZombie)
	{
		std::cerr << "Error on allocation!" << std::endl;
		return (NULL);
	}
	return (newZombie);
}