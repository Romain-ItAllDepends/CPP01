/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:02:20 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 06:50:54 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void) const {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
