/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:00:32 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 06:43:14 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon){
	if (name.empty())
		this->name = "Kinder Bueno";
	else
		this->name = name;
}

HumanA::~HumanA(void)
{
}

void	HumanA::setName(std::string name) {
	if (name.empty())
		this->name = "Kinder Bueno";
	else
		this->name = name;
}

void	HumanA::attack(void) {
	if (this->weapon.getType().empty())
		std::cout << this->name << " attacks with their " << "teeth" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
