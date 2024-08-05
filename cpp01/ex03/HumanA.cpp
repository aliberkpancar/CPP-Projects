/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 06:48:28 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 16:04:43 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << name << " is created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name << " is destroyed" << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
