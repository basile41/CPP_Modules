/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:31:01 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/03 21:25:25 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int N) : _N(N), _shortestSpan(-1)
{
}

Span::Span( const Span & src )
{	
	*this = src;
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

Span &			Span::operator=( Span const & rhs )
{
	_N = rhs._N;
	_tab = rhs._tab;
	_shortestSpan = rhs._shortestSpan;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
unsigned int	Span::maxSize() const
{
	return _N;
}

unsigned int	Span::size() const
{
	return _tab.size();
}

void			Span::addNumber(int i)
{
	if (_tab.size() == _N)
		throw FullSpanException();
	set_int_it it1 = _tab.insert(i).first;
	set_int_it it2 = it1;
	it1--;
	unsigned int diff = static_cast<unsigned int>(*it2 - *it1);
	if (it2 != _tab.begin())
		_shortestSpan = std::min(diff, _shortestSpan);
	it1++; it2++;
	diff = static_cast<size_t>(*it2 - *it1);
	if (it2 != _tab.end())
		_shortestSpan = std::min(diff, _shortestSpan);
}

unsigned int	Span::shortestSpan() const
{
	if (_tab.size() < 2)
		throw TooShortSpanException();
	return _shortestSpan;
}

unsigned int	Span::longestSpan() const
{
	if (_tab.size() < 2)
		throw TooShortSpanException();
	return *_tab.rbegin() - *_tab.begin();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */