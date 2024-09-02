/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliberk <aliberk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 07:36:02 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/04 08:36:31 by aliberk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP
#include <iostream>

class	ClapTrap
{
	private:
		std::string			_name;
		unsigned int		_hit;
		unsigned int		_energy;
		unsigned int		_attack_damage;
	public:
						ClapTrap();
						ClapTrap(std::string _name);
						ClapTrap(const ClapTrap &copy);
		ClapTrap&		operator=(const ClapTrap& oper);
						~ClapTrap();
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	get_hit(void);
		unsigned int	get_energy(void);
		unsigned int	get_attack_damage(void);
};

#endif