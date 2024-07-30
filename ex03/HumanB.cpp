/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:59:53 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 10:45:52 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) {
	this->name = _name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setName(std::string _name) {
	this->name = _name;
}

void	HumanB::setWeapon(const Weapon &_weapon) {
	this->weapon = &_weapon;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
