/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:56:19 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 06:50:21 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon {
private:
	std::string	type;
public:
	Weapon(std::string type);
	~Weapon(void);

	const std::string	&getType(void) const;

	void		setType(std::string type);
};

#endif