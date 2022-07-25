/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:06:30 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 20:11:03 by bregneau         ###   ########.fr       */
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

Form::Form(std::string name, int gradeToSign, int gradeToExec)
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

std::ostream &		operator<<( std::ostream & o, Form const & f )
{
	o	<< f.getName() << ", " << (f.getSign() ? "signed" : "not signed")
		<< ", grade to sign : " << f.getGradeToSign()
		<< ", grade to execute : " << f.getGradeToExec();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_sign = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade too high !";
}
const char*	Form::GradeTooLowException::what() const throw()
{
	return "Grade too low !";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &	Form::getName() const
{
	return _name;
}
bool				Form::getSign() const
{
	return _sign;
}
int					Form::getGradeToSign() const
{
	return _gradeToSign;
}
int					Form::getGradeToExec() const
{
	return _gradeToExec;
}

/* ************************************************************************** */