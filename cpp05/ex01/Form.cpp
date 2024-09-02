/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:03:57 by apancar           #+#    #+#             */
/*   Updated: 2024/09/02 17:03:56 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _grade_for_sign(150), _grade_for_execute(150)
{
}

Form::~Form()
{
}

Form::Form(const Form& copy) : _name(copy._name), _signed(copy._signed), _grade_for_sign(copy._grade_for_sign), _grade_for_execute(copy._grade_for_execute)
{
}

Form& Form::operator=(const Form& oper)
{
	if (this == &oper)
		return (*this);
	_signed = oper._signed;
	return (*this);
}

std::string Form::get_name()
{
	return (_name);
}

bool Form::get_signed()
{
	return (_signed);
}

void Form::set_signed(bool signed_status)
{
	_signed = signed_status;
}

int Form::get_grade_for_sign()
{
	return (_grade_for_sign);
}

int Form::get_grade_for_execute()
{
	return (_grade_for_execute);
}

class Form::GradeTooHighException : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Grade is too high!");
	}
}	TooHigh;

class Form::GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade is too low!");
		}
}	TooLow;

Form::Form(std::string name, int grade_for_sign, int grade_for_execute) : _name(name), _signed(false), _grade_for_sign(grade_for_sign), _grade_for_execute(grade_for_execute)
{
	if (grade_for_sign < 1 || grade_for_execute < 1)
		throw TooHigh;
	if (grade_for_sign > 150 || grade_for_execute > 150)
		throw TooLow;
}

std::ostream& operator<<(std::ostream& out, Form& form)
{
	out << "Form name: " << form.get_name() << std::endl;
	out << "Form signed: " << form.get_signed() << std::endl;
	out << "Form grade for sign: " << form.get_grade_for_sign() << std::endl;
	out << "Form grade for execute: " << form.get_grade_for_execute() << std::endl;
	return (out);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.get_grade() > _grade_for_sign)
		throw TooLow;
	_signed = true;
}

void Form::signForm(Bureaucrat& bureaucrat)
{
	try
	{
		beSigned(bureaucrat);
		std::cout << bureaucrat.get_name() << " signed " << _name << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << bureaucrat.get_name() << " couldn't sign " << _name << " because " << e.what() << std::endl;
	}
}