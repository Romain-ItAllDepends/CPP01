/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:10:13 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/20 07:48:41 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie	zombie;

	if (name.empty())
		zombie.setName("Anonymous");
	else
		zombie.setName(name);
	zombie.announce();
}