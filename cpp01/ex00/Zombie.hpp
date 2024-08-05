/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:05:08 by apancar           #+#    #+#             */
/*   Updated: 2024/08/03 13:20:36 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		const std::string	_name;
	public:
				Zombie(void);
				Zombie(std::string name);
				~Zombie(void);
		void	announce(void) const; 		
};

void		randomChump(std::string name);
Zombie*		newZombie(std::string name);

#endif