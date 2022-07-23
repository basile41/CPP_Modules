/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:19 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 18:30:09 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}
Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}
Animal::Animal(std::string type)
: _type(type)
{
	std::cout << "\e[0;33mFields Constructor called of Animal\e[0m" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}


// Operators
Animal & Animal::operator=(const Animal &assign)
{
	_type = assign._type;
	return *this;
}


// Getters / Setters
std::string	Animal::getType() const
{
	return _type;
}


// Methods
void	Animal::makeSound() const
{
	std::cout << "Sound !" << std::endl;
}