/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:01:03 by apancar           #+#    #+#             */
/*   Updated: 2024/09/01 10:07:31 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap() , FragTrap()
{
	ClapTrap::_name = "DiamondTrap";
	this->_name = "DiamondTrap";
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "\033[1;33mDiamondTrap default is created...\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name)
{
	ClapTrap::_name = _name;
	this->_name = _name;
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "\033[1;33mDiamondTrap " << this->_name << " is created...\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	*this = copy;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& oper)
{
	if (this == &oper)
		return (*this);
	this->_name = oper._name;
	this->_hit = oper._hit;
	this->_energy = oper._energy;
	this->_attack_damage = oper._attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;33mDiamondTrap default is destroyed...\033[0m" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << this->_name << std::endl;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}
