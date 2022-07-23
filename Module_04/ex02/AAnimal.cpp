/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:56:37 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/23 21:56:40 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of AAnimal\e[0m" << std::endl;
}
AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of AAnimal\e[0m" << std::endl;
}
AAnimal::AAnimal(std::string type)
: _type(type)
{
	std::cout << "\e[0;33mFields Constructor called of AAnimal\e[0m" << std::endl;
}


// Destructor
AAnimal::~AAnimal()
{
	std::cout << "\e[0;31mDestructor called of AAnimal\e[0m" << std::endl;
}


// Operators
AAnimal & AAnimal::operator=(const AAnimal &assign)
{
	_type = assign._type;
	return *this;
}


// Getters / Setters
std::string	AAnimal::getType() const
{
	return _type;
}


// Methods
void	AAnimal::makeSound() const
{
	std::cout << "Sound !" << std::endl;
}