/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:59:53 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 06:42:25 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	if (name.empty())
		this->name = "Kinder";
	else
		this->name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setName(std::string name) {
	if (name.empty())
		this->name = "Kinder";
	else
		this->name = name;
}

void	HumanB::setWeapon(const Weapon &weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack(void) {
	if (this->weapon->getType().empty() || this->weapon == NULL)
		std::cout << this->name << " attacks with their " << "teeth" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
