/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:10:23 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 07:06:01 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie {
private:
	std::string	name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	std::string	getName(void);

	void	setName(std::string name);

	void	announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif