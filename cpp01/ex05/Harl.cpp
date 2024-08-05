/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 07:27:50 by apancar           #+#    #+#             */
/*   Updated: 2024/04/29 11:07:24 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

		Harl::Harl(void) {}
		Harl::~Harl(void) {}
		
void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-";
	std::cout << "ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t put enough bacon in my burger!";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void 	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas you ";
	std::cout << "started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	void 		(Harl::*ptr_to_member_funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*ptr_to_member_funcs[i])();
			break ;
		}
		i++;
	}
}
