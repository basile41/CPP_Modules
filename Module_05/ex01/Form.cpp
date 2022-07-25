/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:06:30 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 18:52:07 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
: _name("unamed"), _sign(false), _gradeToSign(150), _gradeToExec(150)
{
}

Form::Form(std::string name, int gradeToSign = 150, int gradeToExec = 150)
: _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw (GradeTooLowException());
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw (GradeTooHighException());
}

Form::Form( const Form & src )
: _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	_sign = rhs._sign;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Form const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */