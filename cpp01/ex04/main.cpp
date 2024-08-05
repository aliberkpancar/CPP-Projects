/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:27:02 by apancar           #+#    #+#             */
/*   Updated: 2024/05/03 11:14:11 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>

std::string	replace(std::string filename, std::string s1, std::string s2);

int	main(int ac, char *av[])
{
	if (ac != 4 || strlen(av[2]) == 0 || strlen(av[3]) == 0)
	{
		std::cerr << "Invalid argument." << std::endl;
		return (1);
	}
	
	std::ifstream	filename(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		line;

	try
	{
		if (!filename.is_open())
			throw std::runtime_error("Failed to open file.");
		while (std::getline(filename, line))
			std::cout << replace(line, s1, s2);
		std::cout << std::endl;
		filename.close();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}

std::string	replace(std::string filename, std::string s1, std::string s2)
{
	size_t		pos = 0;

	pos = filename.find(s1);
	while (pos != std::string::npos)
	{
		filename.erase(pos, s1.length());
		filename.insert(pos, s2);
		pos = filename.find(s1, pos + s2.length());
	}
	return (filename);
}


