/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:33:50 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/27 10:09:05 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	fract = 8;
	public:
				Fixed(const int number);
				Fixed();
				Fixed(const float number);
				Fixed(const Fixed& copy);
		Fixed&	operator=(const Fixed& other);
		
		bool	operator>(const Fixed& other);
		bool	operator<(const Fixed& other);
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other);
		bool	operator!=(const Fixed& other);
		
		Fixed&	operator+(const Fixed& other);
		Fixed&	operator-(const Fixed& other);
		Fixed&	operator*(const Fixed& other);
		Fixed&	operator/(const Fixed& other);
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		static Fixed&		min(Fixed &a, Fixed &b);
		static Fixed&		max(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);

				~Fixed();
		int		getValue(void) const;
		void	setValue(int const val);
		float	toFloat(void) const;
		int		toInt(void) const;
};
		
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif

