/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:18 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/23 12:24:58 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog()
: Animal("Dog")
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	_brain = new Brain();
}
Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	*this = copy;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete _brain;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	Animal::operator=(assign);
	// _type = assign._type;
	_brain = new Brain(*assign._brain);
	return *this;
}


// Methods
void	Dog::makeSound() const
{
	std::cout << "OUAF !!" << std::endl;
}
