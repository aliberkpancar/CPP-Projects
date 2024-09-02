/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliberk <aliberk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:07:20 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/02 10:36:41 by aliberk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ClapTrack("ClapTrack");
	ClapTrack.attack("Target");
	ClapTrack.takeDamage(3);
	std::cout << "\033[1;34mAfter take damage: \033[0m" << "Hit : "<< ClapTrack.get_hit() << " Energy :" << ClapTrack.get_energy() << std::endl;
	ClapTrack.beRepaired(1);
	std::cout << "\033[1;34mAfter Repaired: \033[0m" << "Hit : "<< ClapTrack.get_hit() << " Energy :" << ClapTrack.get_energy() << std::endl;
	ClapTrack.takeDamage(8);
	std::cout << "\033[1;34mAfter take damage: \033[0m" << "Hit : "<< ClapTrack.get_hit() << " Energy :" << ClapTrack.get_energy() << std::endl;
	ClapTrack.takeDamage(1);
	return (0);
}