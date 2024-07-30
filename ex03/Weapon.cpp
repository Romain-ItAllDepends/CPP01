/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:02:20 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 10:42:35 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) {
	this->type = _type;
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void) const {
	return (this->type);
}

void	Weapon::setType(std::string _type) {
	this->type = _type;
}
