/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:12:56 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 20:15:38 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
Zombie::Zombie()
{
	this->_name = "default";
	std::cout << "Zombie " << this->getName() << " created using default constructor" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << name << " created using parameterized constructor" << std::endl;
}

/* ------------------------------- Destructor ------------------------------- */
Zombie::~Zombie()
{ // delete necessary???
	std::cout << "Zombie " << this->getName() << " destroyed" << std::endl;
}

/* --------------------------------- Setters -------------------------------- */
void Zombie::setName(std::string name)
{
	std::cout << "Zombie " << this->getName() << " renamed to " << name << std::endl;
	this->_name = name;
}

/* --------------------------------- Getters -------------------------------- */
std::string Zombie::getName(void)
{
	return (this->_name);
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                    Utils                                   */
/* -------------------------------------------------------------------------- */
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
