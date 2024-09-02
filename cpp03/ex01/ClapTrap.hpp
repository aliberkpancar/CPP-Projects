/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 06:44:00 by apancar           #+#    #+#             */
/*   Updated: 2024/08/27 10:13:44 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP
#include <iostream>

class	ClapTrap
{
	protected:
		std::string			_name;
		unsigned int		_hit;
		unsigned int		_energy;
		unsigned int		_attack_damage;
	public:
						ClapTrap();
						ClapTrap(std::string _name);
						ClapTrap(const ClapTrap& copy);
	ClapTrap&			operator=(const ClapTrap& oper);
						~ClapTrap();
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
