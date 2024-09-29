/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:07:57 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 20:41:46 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon created using parameterized constructor" << std::endl;
}

/* ------------------------------ Deconstructor ----------------------------- */
Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

/* --------------------------------- Getters -------------------------------- */
std::string const &Weapon::getType()
{
	return this->_type;
}

/* --------------------------------- Setters -------------------------------- */
void Weapon::setType(std::string type)
{
	this->_type = type;
}
