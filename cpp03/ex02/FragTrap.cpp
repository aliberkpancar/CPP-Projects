/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:47:19 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 09:58:31 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("")
{
	std::cout << "\033[1;33mFragTrap default is created...\033[0m" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "\033[1;33mFragTrap" << this->_name << " is created...\033[0m" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[1;33mFragTrap " << this->_name << " is destroyed...\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[1;34mHigh Five Dude!\033[0m" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << "\033[1;31mFragTrap " << this->_name << " do not have energy!" << "\033[0m" << std::endl;
		return ;
	}
	else if (_hit == 0)
	{
		std::cout << "\033[1;31mFragTrap " << this->_name << " do not have hit." << "\033[0m" << std::endl;
		return ;
	}
	else 
	{
		std::cout << "\033[1;31mFragTrap " << _name << " attacks " << target << "!" << "\033[0m" << std::endl;
		std::cout << "\033[1;31m" << target << " loses " << _attack_damage << " hit points!" << "\033[0m"<< std::endl;
		_energy--;
	}
}