/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:05:13 by apancar           #+#    #+#             */
/*   Updated: 2024/08/01 10:55:58 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::~Zombie(void){std::cout << this->_name << " destroyed..." << std::endl;}
Zombie::Zombie(std::string name) : _name(name)
{
	this->announce();
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie* a = new Zombie[N];
	for (int i = 0; i < N; i++) {
		a[i].setName(name);
	}
	return (a);
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}