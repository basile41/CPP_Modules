/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:31:46 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/15 19:13:33 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fBits = 8;

// Constructors
Fixed::Fixed() : _rawBits(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	*this = copy;
	// _rawBits = copy._rawBits;
}

Fixed::Fixed(int const n)
{
	std::cout << "\e[0;33mInt Constructor called\e[0m" << std::endl;
	_rawBits = n << _fBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "\e[0;33mFloat Constructor called\e[0m" << std::endl;
	_rawBits = roundf(f * (1 << _fBits));
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = assign.getRawBits();
	return *this;
}

// Getters / Setters
int		Fixed::getRawBits() const
{
	return _rawBits;
}
void	Fixed::setRawBits(int rawBits)
{
	_rawBits = rawBits;
}

float	Fixed::toFloat() const
{
	return (float(_rawBits) / (1 << _fBits));
}
int		Fixed::toInt() const
{
	return (_rawBits >> _fBits);
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Fixed &object)
{
	stream << object.toFloat();
	return stream;
}
