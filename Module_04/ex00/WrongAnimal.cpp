/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:46:10 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 18:57:38 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
: _type(type)
{
	std::cout << "\e[0;33mFields Constructor called of WrongAnimal\e[0m" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}


// Operatorsgst
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign._type;
	return *this;
}


// Getters / Setters
std::string	WrongAnimal::getType() const
{
	return _type;
}


// Methods
void	WrongAnimal::makeSound() const
{
	std::cout << "Sound !" << std::endl;
}