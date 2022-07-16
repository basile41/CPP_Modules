/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:05:23 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 17:29:11 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl << std::endl;
	}

	{
		std::cout << "Fixed a(2);" << std::endl;
		Fixed a(2);
		std::cout << "Fixed b(3);" << std::endl;
		Fixed b(3);
		std::cout << "Fixed c(9.9f);" << std::endl << std::endl;
		Fixed c(9.9f);
		
		std::cout << "std::cout << a + b << std::endl;" << std::endl;
		std::cout << a + b << std::endl;
		std::cout << "std::cout << a - b << std::endl;" << std::endl;
		std::cout << a - b << std::endl;
		std::cout << "std::cout << a * c << std::endl;" << std::endl;
		std::cout << a * c << std::endl;
		std::cout << "std::cout << a / b << std::endl << std::endl;" << std::endl;
		std::cout << a / b << std::endl << std::endl;

		std::cout << "std::cout << (a < b) << std::endl;" << std::endl;
		std::cout << (a < b) << std::endl;
		std::cout << "std::cout << (a > b) << std::endl;" << std::endl;
		std::cout << (a > b) << std::endl;
		std::cout << "std::cout << (a <= b) << std::endl;" << std::endl;
		std::cout << (a <= b) << std::endl;
		std::cout << "std::cout << (a >= c) << std::endl;" << std::endl;
		std::cout << (a >= c) << std::endl;
		std::cout << "std::cout << (a == b) << std::endl;" << std::endl;
		std::cout << (a == b) << std::endl;
		std::cout << "std::cout << (a == a) << std::endl;" << std::endl;
		std::cout << (a == a) << std::endl;
		std::cout << "std::cout << (a != b) << std::endl << std::endl;" << std::endl;
		std::cout << (a != b) << std::endl << std::endl;

		std::cout << "std::cout << Fixed::max(a, b) << std::endl;" << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << "std::cout << Fixed::min(a, b) << std::endl;" << std::endl;
		std::cout << Fixed::min(a, b) << std::endl;
		std::cout << "Fixed const x(2);" << std::endl;
		Fixed const x(2);
		std::cout << "Fixed const y(3);" << std::endl;
		Fixed const y(3);
		std::cout << "std::cout << Fixed::max(x, y) << std::endl;" << std::endl;
		std::cout << Fixed::max(x, y) << std::endl;
		std::cout << "std::cout << Fixed::min(x, y) << std::endl << std::endl;" << std::endl;
		std::cout << Fixed::min(x, y) << std::endl << std::endl;

		std::cout << "std::cout << a++ << std::endl;" << std::endl;
		std::cout << a++ << std::endl;
		std::cout << "std::cout << ++a << std::endl;" << std::endl;
		std::cout << ++a << std::endl;
		std::cout << "std::cout << a-- << std::endl;" << std::endl;
		std::cout << a-- << std::endl;
		std::cout << "std::cout << --a << std::endl << std::endl;" << std::endl;
		std::cout << --a << std::endl << std::endl;
		
		std::cout << "std::cout << (b = a = a + a * a) << std::endl;" << std::endl;
		std::cout << (b = a = a + a * a) << std::endl;
		std::cout << "std::cout << a << \", \" << b << \", \" << c << std::endl;" << std::endl;
		std::cout << a << ", " << b << ", " << c << std::endl;
	}
	
	
	return 0;
}