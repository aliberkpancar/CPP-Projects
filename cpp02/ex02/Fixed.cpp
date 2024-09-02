/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apancar <apancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:33:41 by aliberk           #+#    #+#             */
/*   Updated: 2024/08/31 09:32:37 by apancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdexcept>

Fixed::Fixed():value(0)
{
}

Fixed::Fixed(const int number)
{
	this->value = number << this->fract;
}

Fixed::Fixed(const float number)
{
	this->value = roundf(number * (1 << this->fract));
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed::~Fixed()
{
}

int	Fixed::getValue(void) const
{
	return (this->value);
}

void	Fixed::setValue(int const val)
{
	this->value = val;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->value = other.getValue();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fract));
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->fract);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed& other)
{
	return (this->value > other.getValue());
}

bool	Fixed::operator<(const Fixed& other)
{
	return (this->value < other.getValue());
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->value <= other.getValue());
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->value >= other.getValue());
}

bool	Fixed::operator==(const Fixed& other)
{
	return (this->value == other.getValue());
}

bool	Fixed::operator!=(const Fixed& other)
{
	return (this->value != other.getValue());
}

Fixed&	Fixed::operator+(const Fixed& other)
{
	this->value += other.getValue();
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed& other)
{
	this->value -= other.getValue();
	return (*this);
}

Fixed&	Fixed::operator*(const Fixed& other)
{
	this->value = (this->value * other.getValue()) >> this->fract;
	return (*this);
}

Fixed&	Fixed::operator/(const Fixed& other)
{
	try
	{
		this->value = (this->value << this->fract) / other.getValue();
	}
	catch(std::runtime_error &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (*this);
}

Fixed &Fixed::operator++() // ++i preincrement operator
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) // i++ postincrement operator
{
	Fixed temp(*this);
	operator++();
	return temp;
}

Fixed &Fixed::operator--() // --i predecrement operator
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) // i-- postdecrement operator
{
	Fixed temp(*this);
	operator--();
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a <= b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a >= b ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a <= b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a >= b ? a : b);
}
