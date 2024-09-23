/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:13:15 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/23 15:00:07 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>

#include "Weapon.hpp"

// HumanB can init without weapon
// Set it later usig pointer
class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	std::string getWeaponType();
	void setWeapon(Weapon &weapon);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
