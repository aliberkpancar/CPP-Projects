/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 06:44:09 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 09:57:40 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
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
