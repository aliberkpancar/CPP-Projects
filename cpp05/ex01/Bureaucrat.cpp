/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:03:24 by apancar           #+#    #+#             */
/*   Updated: 2024/09/02 14:03:29 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name) : _name(name){}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& oper)
{
	if (this != &oper)
	{
		this->_grade = oper._grade;
	}
	return (*this);
}

std::string	Bureaucrat::get_name()
{
	return (this->_name);
}

int	Bureaucrat::get_grade()
{
	return (this->_grade);
}

void	Bureaucrat::set_grade(int grade)
{
	this->_grade = grade;
}

class Bureaucrat::GradeTooHighException : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Grade is too high!");
	}
}	TooHigh;

class Bureaucrat::GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade is too low!");
		}
}	TooLow;


Bureaucrat::~Bureaucrat(){}

void	Bureaucrat::decrement_the_bureaucrat_grade()
{
	if (this->_grade == 1)
		throw (TooLow);
	this->_grade--;
}

void	Bureaucrat::increment_the_bureaucrat_grade()
{
	if (this->_grade == 150)
		throw (TooHigh);
	this->_grade++;
}


