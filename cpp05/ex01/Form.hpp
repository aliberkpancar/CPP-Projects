/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:04:01 by apancar           #+#    #+#             */
/*   Updated: 2024/09/02 17:02:40 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_for_sign;
		const int			_grade_for_execute;
	public:
					Form();
					~Form();
					Form(std::string name, int grade_for_sign, int grade_for_execute);
					Form(const Form& copy);
		Form&		operator=(const Form& oper);
		std::string	get_name();
		bool		get_signed();
		void		set_signed(bool signed_status);
		int			get_grade_for_sign();
		int			get_grade_for_execute();
		void		beSigned(Bureaucrat& bureaucrat);
		void		signForm(Bureaucrat& bureaucrat);
	
	class	GradeTooHighException;
	class	GradeTooLowException;
};

std::ostream& operator<<(std::ostream& out, Form& form);

#endif