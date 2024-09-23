/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:13:31 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/23 14:57:18 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>

#include "Weapon.hpp"

// HumanA TAKES a Weapon in the constructor
class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
	Weapon *getWeapon();

private:
	std::string _name;
	Weapon &_weapon;
};

#endif