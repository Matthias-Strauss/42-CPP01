/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:13:21 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 20:04:28 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void);

	std::string getName(void);

	void setName(std::string name);

private:
	std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif