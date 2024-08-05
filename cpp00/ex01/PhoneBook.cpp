/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:31:11 by aliberk           #+#    #+#             */
/*   Updated: 2024/05/15 10:15:49 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <cctype>

		PhoneBook::PhoneBook(void)	{ _i = 0; }
		PhoneBook::~PhoneBook(void) { std::cout << "\033[31mSee u soon!!!\033[0m" << std::endl; }
Contact	PhoneBook::get_contact(int index) { return (this->_contacts[index % 8]); }

void	PhoneBook::add(void)
{
	std::string inputs[5];
	std::string prompts[5] = {"First name: ", "Last name: ", "Nick: ", "Phone number: ", "Darkest secret: "};
	std::cout << "\033[33mAdding new contact\033[0m" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << prompts[i];
		std::cin >> inputs[i];
		if (inputs[i].empty())
		{
			std::cout << prompts[i] << "is required" << std::endl;
			return;
		}
		if (inputs[i].length() > 10)
			inputs[i] = inputs[i].substr(0, 9) + ".";
	}
	if (_i < 8)
		_contacts[_i++] = Contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
	else
	{
		for (int i = 7; i > 0; --i)
			_contacts[i] = _contacts[i - 1];
		_contacts[0] = Contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
	}
}

void PhoneBook::search(void)
{
	std::string search_index;
	
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	for (int i = 0; i < _i; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].get_nick() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Select an index : " ;
	std::cin >> search_index;

	for (int j = 0; search_index[j]; j++)
	{
		if (!isdigit(search_index[j]))
		{
			std::cout << "Invalid index" << std::endl;
			return ;
		}
	}
	if (!(std::stoi(search_index) >= 0 && std::stoi(search_index) < _i))
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	else
	{
		std::cout << "First name: " << _contacts[std::stoi(search_index)].get_first_name() << std::endl;
		std::cout << "Last name: " << _contacts[std::stoi(search_index)].get_last_name() << std::endl;
		std::cout << "Nick: " << _contacts[std::stoi(search_index)].get_nick() << std::endl;
		std::cout << "Phone number: " << _contacts[std::stoi(search_index)].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << _contacts[std::stoi(search_index)].get_darkest_secret() << std::endl;
	}
	std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
