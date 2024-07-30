/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:58:20 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/30 14:45:00 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl		harl;
	std::string	in;

	if (ac != 2) {
		std::cout << "You need an argument !" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
