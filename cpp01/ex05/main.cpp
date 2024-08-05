/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:35:30 by apancar           #+#    #+#             */
/*   Updated: 2024/04/29 11:08:55 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	
	harl.complain("DEBUG");
	std::cout << "=============" << std::endl;
	harl.complain("INFO");
	std::cout << "=============" << std::endl;
	harl.complain("WARNING");
	std::cout << "=============" << std::endl;
	harl.complain("ERROR");
	std::cout << "=============" << std::endl;
	harl.complain("WARNING");
	
	return (0);
}