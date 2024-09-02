/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:58:11 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/03 15:53:10 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

					Weapon::Weapon() {}
					Weapon::Weapon(std::string type) : _type(type) {}
					Weapon::~Weapon() {}

const std::string&	Weapon::getType() {return this->_type;}
void				Weapon::setType(std::string type) { this->_type = type; }



