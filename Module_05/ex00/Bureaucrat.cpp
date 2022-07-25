/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:36:40 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 18:28:37 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
: _name("unnamed"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name), _grade(grade)
{
	if (_grade > 150)
		throw (GradeTooLowException());
	if (_grade < 1)
		throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	_name = rhs._name;
	_grade = rhs._grade;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & b )
{
	o << b.getName() <<  ", bureaucrat grade " << b.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::upgrade()
{
	if (--_grade < 1)
		throw (GradeTooHighException());
}
void	Bureaucrat::downgrade()
{
	if (++_grade > 150)
		throw (GradeTooLowException());
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error : Grade too high !";
}
const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error : Grade too low !";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Bureaucrat::getName() const
{
	return _name;
}

int					Bureaucrat::getGrade() const
{
	return _grade;
}

/* ************************************************************************** */