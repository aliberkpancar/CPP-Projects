/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:05:24 by apancar           #+#    #+#             */
/*   Updated: 2024/08/01 11:11:06 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie a("ahbasara");
	Zombie* b = a.zombieHorde(5, "Murmur");
	for (int i = 0; i < 5; i++) {
		b[i].announce();
	}
	delete[] b;
	return (0);
}

// __attribute__ ((destructor)) void f()
// {
// 	system("leaks Moar_brainz");
// }
