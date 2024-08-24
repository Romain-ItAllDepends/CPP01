/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:57:18 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/24 08:03:42 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

enum StringValue {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class	Harl {
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	complain(std::string level);
};

typedef	void (Harl::*function)(void);

#endif