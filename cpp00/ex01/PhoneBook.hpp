/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:51:18 by aliberk           #+#    #+#             */
/*   Updated: 2024/04/22 06:40:07 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int		_i;
		Contact _contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void 	add(void);
		void	search(void);
		Contact	get_contact(int i);	
};

#endif