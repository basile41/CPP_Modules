/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:31:49 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 15:51:29 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed( const Fixed &copy );
		Fixed( int const &n );
		Fixed( float const &f );
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed &	operator=( const Fixed &rhs );
		Fixed 	operator++( void );
		Fixed 	operator++( int );
		Fixed 	operator--( void );
		Fixed 	operator--( int );
		Fixed	operator+( const Fixed &rhs ) const;
		Fixed	operator-( const Fixed &rhs ) const;
		Fixed	operator*( const Fixed &rhs ) const;
		Fixed	operator/( const Fixed &rhs ) const;
		bool	operator>( const Fixed &rhs ) const;
		bool	operator<( const Fixed &rhs ) const;
		bool	operator>=( const Fixed &rhs ) const;
		bool	operator<=( const Fixed &rhs ) const;
		bool	operator==( const Fixed &rhs ) const;
		bool	operator!=( const Fixed &rhs ) const;

		// Methods
		static Fixed	min( Fixed &f1, Fixed &f2);
		static Fixed	min( Fixed const &f1, Fixed const &f2);
		static Fixed	max( Fixed &f1, Fixed &f2);
		static Fixed	max( Fixed const &f1, Fixed const &f2);
		
		
		// Getters / Setters
		int		getRawBits() const;
		void	setRawBits( int rawBits );

		float	toFloat() const;
		int		toInt() const;
		
	private:
		int _rawBits;
		
		static int const _fBits;

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Fixed &object);

#endif