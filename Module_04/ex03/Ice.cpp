/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:10:11 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/24 14:10:14 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors
Ice::Ice()
{}
Ice::Ice(const Ice &copy)
{
	*this = copy;
}
Ice::Ice(std::string name) : Amateria("ice") _name(name) 
{}


// Destructor
Ice::~Ice()
{
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	Amateria::operator=(assign);
	_name = assign._name;
	return *this;
}


// Getters / Setters
std::string const & Ice::getName() const
{
	return _name;
}


// Methods
Amateria*		Ice::clone() const
{
	return (new Ice(*this));
}

virtual void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName(); << std::endl;
}
