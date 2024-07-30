/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:10:23 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 08:26:05 by rgobet           ###   ########.fr       */
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
	~Zombie(void);

	std::string	getName(void);

	void	setName(std::string _name);

	void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif