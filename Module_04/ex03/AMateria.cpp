/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:45:43 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/24 17:46:07 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::AMateria(std::string type)
: _type(type)
{}


// Destructor
AMateria::~AMateria()
{
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	_type = assign._type;
	return *this;
}


// Getters / Setters
std::string const & AMateria::getType() const
{
	return _type;
}
