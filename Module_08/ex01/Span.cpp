/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:31:01 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/02 19:54:31 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span( const Span & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
size_t	Span::size() const
{
	return _tab.size();
}

void			Span::addNumber(int i)
{
	if (_tab.size() == _N)
		throw std::exception();
	_tab.insert(i);
}

unsigned int	Span::shortestSpan() const
{
	size_t	shortest = SIZE_MAX;
	for (std::set<int>::iterator it = _tab.begin(); it != _tab.end(); it++)
	{
		
	}
}
unsigned int	Span::longestSpan() const
{
	return *_tab.end() - *_tab.begin();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */