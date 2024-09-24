/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:00:37 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 16:11:49 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

enum Level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

Level getLevel(const std::string &level)
{
	if (level == "DEBUG")
		return DEBUG;
	if (level == "INFO")
		return INFO;
	if (level == "WARNING")
		return WARNING;
	if (level == "ERROR")
		return ERROR;
	return UNKNOWN;
}

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

	switch (getLevel(lvl))
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		harl.complain("DEBUG");
		std::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		harl.complain("INFO");
		std::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		harl.complain("WARNING");
		std::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("ERROR");
		std::cout << std::endl;
		break;
	default:
		std::cout << "Invalid level: " << lvl << std::endl;
		break;
	}
	return 0;
}
