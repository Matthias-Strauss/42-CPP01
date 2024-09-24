/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:20:37 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/24 15:13:16 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	Harl(void) noexcept = default;
	~Harl(void) noexcept = default;
	Harl(const Harl &other) = default;
	Harl &operator=(const Harl &other) = default;
	Harl(Harl &&other) noexcept = default;
	Harl &operator=(Harl &&other) noexcept = default;

	void complain(std::string level);

private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

	struct Level
	{
		std::string level;
		void (Harl::*func)(void);
	};
};

#endif