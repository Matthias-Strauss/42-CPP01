/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:13:21 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/23 13:14:03 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
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

#endif