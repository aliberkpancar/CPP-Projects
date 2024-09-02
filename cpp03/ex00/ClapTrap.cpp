/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 07:36:17 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/31 11:51:52 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hit(10), _energy(10), _attack_damage(0)
{
	std::cout << "\033[1;33mClapTrap default is created...\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack_damage(0)
{
	std::cout << "\033[1;33mClapTrap " << this->_name << " is created...\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy._name;
	_hit = copy._hit;
	_energy = copy._energy;
	_attack_damage = copy._attack_damage;
	std::cout << "Copy constructor is called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& oper)
{
	if (this != &oper)
	{
		_name = oper._name;
		_hit = oper._hit;
		_energy = oper._energy;
		_attack_damage = oper._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;33mClapTrap " << this->_name << " is destroyed...\033[0m" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << "\033[1;31mClapTrap " << this->_name << " do not have energy!" << "\033[0m" << std::endl;
		return ;
	}
	else if (_hit == 0)
	{
		std::cout << "\033[1;31mClapTrap " << this->_name << " do not have hit." << "\033[0m" << std::endl;
		return ;
	}
	else 
	{
		std::cout << "\033[1;31mClapTrap " << _name << " attacks " << target << "!" << "\033[0m" ;
		std::cout << "\033[1;31m, causing " << _attack_damage << " points of damage!" << "\033[0m" << std::endl;
		std::cout << "\033[1;31m" << target << " loses " << _attack_damage << " hit points!" << "\033[0m"<< std::endl;
		_energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit == 0)
	{
		std::cout << "\033[1;31mClapTrap " << this->_name << " can not take damage!" << "\033[0m" << std::endl;
		return;
	}
	_hit = (amount >= _hit) ? 0 : (_hit - amount);
	std::cout << "ClapTrap " << this->_name << " take " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0 || _hit == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can not repair itself!";
		return ;
	}
	_energy--;
	_hit += amount;
	std::cout << "ClapTrap " << this->_name << amount << " repairs itself." << std::endl;
}

unsigned int	ClapTrap::get_hit(void)
{
	return (this->_hit);
}
unsigned int	ClapTrap::get_energy(void)
{
	return (this->_energy);
}

unsigned int	ClapTrap::get_attack_damage(void)
{
	return (this->_attack_damage);
}
