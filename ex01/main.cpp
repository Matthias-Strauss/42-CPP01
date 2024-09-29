/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:30:02 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 20:08:06 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Usage: ./zombieHorde <amount of zombies> <name of zombie>" << std::endl;
		return (1);
	}
	int numZombies = std::stoi(av[1]);
	if (numZombies < 0)
	{
		std::cout << "Number of zombies must be positive" << std::endl;
		return (1);
	}

	Zombie *horde = zombieHorde(numZombies, av[2]);
	for (int i = 0; i < numZombies; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}
