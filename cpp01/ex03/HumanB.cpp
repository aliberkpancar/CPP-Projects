/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 07:39:11 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 16:03:15 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB " << name << " is created without weapon" << std::endl;
}
HumanB::~HumanB(void) {std::cout << "HumanB " << this->_name << " is destroyed" << std::endl;}

void	HumanB::setWeapon(Weapon &weapon) {this->_weapon = &weapon;}
void	HumanB::attack()
{	
	if (this->_weapon)
	{
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    }
	else
	{
        std::cout << this->_name << " is unarmed and cannot attack." << std::endl;
    }
}
