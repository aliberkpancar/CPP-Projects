/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:04:59 by apancar           #+#    #+#             */
/*   Updated: 2024/03/16 11:09:44 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{	
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick;
		std::string	_phone_number;
		std::string	_darkest_secret;
	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nick, std::string phone_number, std::string darkest_secret);
		~Contact(void);
		std::string	get_first_name(void) const;
		void		set_first_name(std::string str);
		std::string	get_last_name(void) const;
		void		set_last_name(std::string str);
		std::string	get_nick(void) const;
		void		set_nick(std::string str);
		std::string	get_phone_number(void) const;
		void		set_phone_number(std::string str);
		std::string	get_darkest_secret(void) const;
		void		set_darkest_secret(std::string str);
};

#endif