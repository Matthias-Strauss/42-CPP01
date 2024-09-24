/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:24:49 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 15:12:57 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"



void Harl::complain(std::string level)
{
	Level levels[] = {
		{"DEBUG", &Harl::_debug},
		{"INFO", &Harl::_info},
		{"WARNING", &Harl::_warning},
		{"ERROR", &Harl::_error}};

	for (auto &[l, func] : levels)
	{
		if (l == level)
		{
			(this->*func)();
			return;
		}
	}
	std::cout << "Invalid level: \"" << level << "\"" << std::endl;
}

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
 ketchup burger. I really do !"
			  << std::endl;
}
void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
 enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
 years whereas you started working here since last month."
			  << std::endl;
}

void Harl::_error(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
 years whereas you started working here since last month."
			  << std::endl;
}