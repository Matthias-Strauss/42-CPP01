/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:17:30 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/23 15:23:32 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sifl.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./sifl <filename> <string1> <string2>" << std::endl;
		return 1;
	}

	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	return 0;
}