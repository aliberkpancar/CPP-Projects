/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 06:44:16 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 07:23:07 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("")
{
	std::cout << "\033[1;33mScavTrap default is created...\033[0m" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << this->_name << " is created..." << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1;33mScavTrap " << this->_name << " is destroyed...\033[0m" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode..." << std::endl;	
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << "\033[1;31mScavTrap " << this->_name << " do not have energy!" << "\033[0m" << std::endl;
		return ;
	}
	else if (_hit == 0)
	{
		std::cout << "\033[1;31mScavTrap " << this->_name << " do not have hit." << "\033[0m" << std::endl;
		return ;
	}
	else 
	{
		std::cout << "\033[1;31mScavTrap " << _name << " attacks " << target << "!" << "\033[0m" << std::endl;
		std::cout << "\033[1;31m" << target << " loses " << _attack_damage << " hit points!" << "\033[0m"<< std::endl;
		_energy--;
	}
}