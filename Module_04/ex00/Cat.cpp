/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:16 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 18:28:20 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat()
: Animal("Cat")
{
	_type = "Cat";
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}
Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	_type = assign._type;
	return *this;
}


// Methods
void	Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;
}
