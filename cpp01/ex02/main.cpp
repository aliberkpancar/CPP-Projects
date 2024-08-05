/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:12:02 by apancar           #+#    #+#             */
/*   Updated: 2024/08/01 11:12:03 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << "The memory address of the string : " << &str << std::endl;
	std::cout << "The memory address of stringPTR  : " << stringPTR << std::endl;
	std::cout << "The memory address of stringREF  : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string           : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;

	return (0);
}
