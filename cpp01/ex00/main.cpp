/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:05:24 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 13:25:23 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie = new Zombie("Heap");
	Zombie stack = Zombie("Stack");
	Zombie* nwZombie = newZombie("NewZombie");
	
	randomChump("Random");
	delete nwZombie;
	delete zombie;
	return (0);
}

// __attribute__ ((destructor)) void f()
// {
// 	system("leaks BraiiiiiiinnnzzzZ");
// }