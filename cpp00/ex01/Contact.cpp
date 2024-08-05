/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:09:54 by apancar           #+#    #+#             */
/*   Updated: 2024/04/28 08:53:01 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) {}
Contact::Contact(std::string first_name, std::string last_name, std::string nick, std::string phone_number, std::string darkest_secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nick = nick;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}
Contact::~Contact(void) {}

std::string	Contact::get_first_name(void) const { return _first_name;}
void 		Contact::set_first_name(std::string str) { _first_name = str;}
std::string	Contact::get_last_name(void) const { return _last_name;}
void		Contact::set_last_name(std::string str) { _last_name = str;}
std::string	Contact::get_nick(void) const { return _nick;}
void		Contact::set_nick(std::string str) { _nick = str;}
std::string	Contact::get_phone_number(void) const { return _phone_number;}
void		Contact::set_phone_number(std::string str) { _phone_number = str;}
std::string	Contact::get_darkest_secret(void) const { return _darkest_secret;}
void		Contact::set_darkest_secret(std::string str) { _darkest_secret = str;}


