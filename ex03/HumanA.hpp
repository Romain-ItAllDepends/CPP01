/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:00:06 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 10:49:49 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
private:
	std::string		name;
	const Weapon	&weapon;
public:
	HumanA(std::string name, Weapon &_weapon);
	~HumanA(void);

	void	setName(std::string _name);

	void	attack(void);
};

#endif