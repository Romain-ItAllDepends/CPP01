/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:10:17 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 07:08:45 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) {
	if (name.empty())
		this->name = "Anonymous";
	else
		this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": BOUM !!!" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void) {
	return (this->name);
}

void	Zombie::setName(std::string name) {
	this->name = name;
}
