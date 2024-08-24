/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:59:12 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 06:39:08 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
private:
	std::string		name;
	const Weapon	*weapon;
public:
	HumanB(std::string name);
	~HumanB(void);

	void	setName(std::string name);
	void	setWeapon(const Weapon &weapon);

	void	attack(void);
};

#endif