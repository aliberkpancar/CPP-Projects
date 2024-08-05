/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:51:59 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/03 15:44:07 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string 		_type;
	public:
							Weapon(void);
							Weapon(std::string type);
							~Weapon(void);
		
		const std::string&	getType(void);
		void				setType(std::string type);	
};

#endif