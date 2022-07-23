/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:16 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/23 12:43:46 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat()
: Animal("Cat")
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
	Animal::operator=(assign);
	// _type = assign._type;
	_brain = new Brain(*assign._brain);
	return *this;
}


// Methods
void	Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;
}
