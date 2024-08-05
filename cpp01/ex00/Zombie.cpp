/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:05:13 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 13:21:19 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::~Zombie(void){std::cout << "Zombie " << this->_name << " is destroyed..." << std::endl;}
Zombie::Zombie(std::string name) : _name(name) { this->announce(); }

void	Zombie::announce(void) const { std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl; }