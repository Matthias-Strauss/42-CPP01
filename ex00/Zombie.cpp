/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:12:56 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 19:09:41 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* ------------------------------- Constructor ------------------------------ */
Zombie::Zombie(std::string name)
{
	this->setName(name);
	std::cout << "Zombie " << name << " created" << std::endl;
}

/* ------------------------------- Destructor ------------------------------- */
Zombie::~Zombie()
{
	std::cout << "Zombie " << this->getName() << " destroyed" << std::endl;
}

/* --------------------------------- Setters -------------------------------- */
void Zombie::setName(std::string name)
{
	this->_name = name;
}

/* --------------------------------- Getters -------------------------------- */
std::string Zombie::getName(void)
{
	return (this->_name);
}