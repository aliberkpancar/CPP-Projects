/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:01:06 by apancar           #+#    #+#             */
/*   Updated: 2024/09/01 09:54:43 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public virtual ScavTrap , public virtual FragTrap
{
	private:
		std::string	_name;
	public:
						DiamondTrap(void);
						DiamondTrap(std::string _name);
						DiamondTrap(const DiamondTrap& copy);
		DiamondTrap&	operator=(const DiamondTrap& oper);
						~DiamondTrap(void);
		void			whoAmI(void);
		void 			attack(std::string const& target);
};

# endif
