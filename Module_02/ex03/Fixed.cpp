/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:31:46 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 17:25:40 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fBits = 8;

// Constructors
Fixed::Fixed() : _rawBits(0)
{
//	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
//	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	*this = copy;
	// _rawBits = copy._rawBits;
}

Fixed::Fixed(int const &n)
{
//	std::cout << "\e[0;33mInt Constructor called\e[0m" << std::endl;
	_rawBits = n << _fBits;
}

Fixed::Fixed(float const &f)
{
//	std::cout << "\e[0;33mFloat Constructor called\e[0m" << std::endl;
	_rawBits = roundf(f * (1 << _fBits));
}

// Destructor
Fixed::~Fixed()
{
//	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &rhs)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = rhs.getRawBits();
	return *this;
}

Fixed &	Fixed::operator++( void )
{
	++_rawBits;
	return (*this);
}
Fixed 	Fixed::operator++( int )
{
	Fixed tmp(*this);
	tmp.setRawBits(_rawBits++);
	return (tmp);
}
Fixed &	Fixed::operator--( void )
{
	--_rawBits;
	return (*this);
}
Fixed 	Fixed::operator--( int )
{
	Fixed tmp(*this);
	tmp.setRawBits(_rawBits--);
	return (tmp);
}

Fixed	Fixed::operator+( const Fixed &rhs ) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}
Fixed	Fixed::operator-( const Fixed &rhs ) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}
Fixed	Fixed::operator*( const Fixed &rhs ) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}
Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator>( const Fixed &rhs ) const
{
	return (_rawBits > rhs._rawBits);
}
bool	Fixed::operator<( const Fixed &rhs ) const
{
	return (_rawBits < rhs._rawBits);
}
bool	Fixed::operator>=( const Fixed &rhs ) const
{
	return (_rawBits >= rhs._rawBits);
}
bool	Fixed::operator<=( const Fixed &rhs ) const
{
	return (_rawBits <= rhs._rawBits);
}
bool	Fixed::operator==( const Fixed &rhs ) const
{
	return (_rawBits == rhs._rawBits);
}
bool	Fixed::operator!=( const Fixed &rhs ) const
{
	return (_rawBits != rhs._rawBits);
}


// Methods
Fixed 	Fixed::min( Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}
Fixed 	Fixed::min( Fixed const &f1, Fixed const &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}
Fixed 	Fixed::max( Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}
Fixed 	Fixed::max( Fixed const &f1, Fixed const &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
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
