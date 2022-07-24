/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:35:35 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/24 21:36:47 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors
Cure::Cure() : AMateria("cure")
{
}
Cure::Cure(const Cure &copy)
{
	*this = copy;
}


// Destructor
Cure::~Cure()
{
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	_type = assign._type;
	return *this;
}


// Methods
AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
