/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:18 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 17:13:50 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog()
: Animal("Dog")
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}
Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	_type = assign._type;
	return *this;
}


// Methods
void	Dog::makeSound() const
{
	std::cout << "OUAF !!" << std::endl;
}
