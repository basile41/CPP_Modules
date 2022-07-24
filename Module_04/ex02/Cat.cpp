/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:16 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/24 17:58:41 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat()
: AAnimal("Cat")
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	_brain = new Brain();
}
Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	*this = copy;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete _brain;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	AAnimal::operator=(assign);
	// _type = assign._type;
	_brain = new Brain(*assign._brain);
	return *this;
}


// Methods
void	Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (_brain);
}