/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:58:12 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 20:17:41 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	// alloc
	Zombie *zombies = new Zombie[N];

	// init
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}
