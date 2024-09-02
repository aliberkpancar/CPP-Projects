/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:47:14 by apancar           #+#    #+#             */
/*   Updated: 2024/09/01 09:15:58 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public:
			FragTrap(void);
			FragTrap(std::string _name);
			~FragTrap(void);
	void	highFivesGuys(void);
	void	attack(const std::string& target);
};

#endif