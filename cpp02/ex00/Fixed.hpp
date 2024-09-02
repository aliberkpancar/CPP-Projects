/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:09:37 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/30 06:46:58 by apancar          ###   ########.fr       */
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
				Fixed(Fixed& copy);
				Fixed& operator=(const Fixed& other);
				~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif