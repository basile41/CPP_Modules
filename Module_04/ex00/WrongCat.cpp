/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:46:35 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 18:46:43 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
	_type = "WrongCat";
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}


// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	_type = assign._type;
	return *this;
}


// Methods
void	WrongCat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;
}
