/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:12:56 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/23 13:26:04 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->setName(name);
	std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::~Zombie()
{
	delete this;
	std::cout << "Zombie " << this->getName() << " destroyed" << std::endl;
}

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}