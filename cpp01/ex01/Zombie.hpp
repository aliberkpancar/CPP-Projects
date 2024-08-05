/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:05:08 by apancar           #+#    #+#             */
/*   Updated: 2024/08/01 10:55:40 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
					std::string _name;
	public:
					Zombie(void);
					Zombie(std::string name);
					~Zombie(void);
		void		setName(std::string name);
		void		announce(void) const;
		Zombie*		zombieHorde(int N, std::string name);	
};

#endif