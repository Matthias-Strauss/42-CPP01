/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:00:37 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 15:17:06 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{

		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		std::cout << "Level Options:" << std::endl;
		std::cout << "DEBUG" << std::endl;
		std::cout << "INFO" << std::endl;
		std::cout << "WARNING" << std::endl;
		std::cout << "ERROR" << std::endl;
		return 1;
	}

	std::string lvl = av[1];

	if (lvl.empty())
	{
		std::cout << "Invalid level: empty string" << std::endl;
		return 1;
	}
	(void)av;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("");
	harl.complain("TEST");

	return 0;
}
