/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:47:46 by apancar           #+#    #+#             */
/*   Updated: 2024/09/02 15:55:16 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;
		
	public:
					Bureaucrat();
					Bureaucrat(std::string _name);
					Bureaucrat(const Bureaucrat& copy);
		Bureaucrat&	operator=(const Bureaucrat& oper);
					~Bureaucrat();		
		std::string	get_name();
		int			get_grade();
		void		set_grade(int grade);
		void		decrement_the_bureaucrat_grade();
		void		increment_the_bureaucrat_grade();
		
		class GradeTooHighException;
		class GradeTooLowException;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);

#endif