/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:05:09 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/15 15:05:11 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	_rawbits = 0;
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	_rawbits = copy.getRawbits();
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
}

Fixed::Fixed(int rawbits)
{
	_rawbits = rawbits;
	std::cout << "\e[0;33mFields Constructor called of Fixed\e[0m" << std::endl;
}


// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called of Fixed\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	_rawbits = assign.getRawbits();
	return *this;
}


// Getters / Setters
int Fixed::getRawbits() const
{
	return _rawbits;
}
