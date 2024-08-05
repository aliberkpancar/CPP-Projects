/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:42:26 by apancar           #+#    #+#             */
/*   Updated: 2024/05/15 10:19:20 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	str;
	PhoneBook PhoneBook;

	while (1)
	{
		std::cout << "\033[34mADD | SEARCH | EXIT >\033[0m";
		std::cin >> str;
		if (str == "ADD" || str == "add" || str == "Add")
			PhoneBook.add();
		else if (str == "SEARCH" || str == "search" || str == "Search")
			PhoneBook.search();
		else if (str == "EXIT" || str == "exit" || str == "Exit")
			return (0);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		// std::cin.clear();
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (0);
}