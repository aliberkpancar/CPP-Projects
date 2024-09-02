/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 06:44:09 by apancar           #+#    #+#             */
/*   Updated: 2024/09/01 08:06:31 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Saul = ClapTrap("Better Call Saul");

	Saul.attack("a worm");
	Saul.takeDamage(9);

	ScavTrap	Jimmy = ScavTrap("Jimmy McGill");
	ScavTrap	McGill[2];

	Jimmy.attack("a human");
	Jimmy.guardGate();
	Jimmy.guardGate();
	Jimmy.beRepaired(5);
}

// __attribute__ ((destructor)) void f()
// {
// 	system("leaks Serena_my_love!");
// }