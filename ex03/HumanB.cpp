/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:39:54 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 20:43:16 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	std::cout << "HumanB named " << name << " created using parameterized constructor" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB named " << this->_name << " destroyed" << std::endl;
}

std::string HumanB::getWeaponType()
{
	if (this->_weapon)
		return this->_weapon->getType();
	else
		return "No weapon";
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with their bare hands. What a stud!" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}