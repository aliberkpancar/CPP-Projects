/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:09:37 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/27 08:14:08 by apancar          ###   ########.fr       */
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
				Fixed();
				Fixed(const int number);
				Fixed(const float number);
				Fixed(const Fixed& copy);
				Fixed& operator=(const Fixed& other);
				~Fixed();
		int		getValue(void) const;
		void	setValue(int const val);
		float	toFloat(void) const;
		int		toInt(void) const;
};
		
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif

