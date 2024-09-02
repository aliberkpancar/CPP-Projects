/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 06:44:09 by apancar           #+#    #+#             */
/*   Updated: 2024/09/01 10:08:32 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	{
		ClapTrap	Saul = ClapTrap("Better Call Saul");

		Saul.attack("a worm");
		Saul.takeDamage(9);

		FragTrap	Jimmy =	FragTrap("Jimmy McGill");
		FragTrap	McGill[2];

		Jimmy.attack("a human");
		Jimmy.highFivesGuys();
		Jimmy.beRepaired(5);
	}
	
	std::cout << "----------------------------------------" << std::endl;
	
	{
		DiamondTrap	Heisenberg = DiamondTrap("Heisenberg");

		Heisenberg.attack("a fly");
		Heisenberg.whoAmI();
		Heisenberg.takeDamage(10);
		Heisenberg.beRepaired(5);
		Heisenberg.highFivesGuys();
		Heisenberg.attack("a human");
	}
	
	
}
