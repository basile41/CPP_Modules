/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:06:30 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 20:11:03 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _gradeToSign(150), _gradeToExec(150)
{
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExec)
: _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw (GradeTooLowException());
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw (GradeTooHighException());
}

AForm::AForm( const AForm & src )
: _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	_sign = rhs._sign;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, AForm const & f )
{
	o	<< f.getName() << ", " << (f.getSign() ? "signed" : "not signed")
		<< ", grade to sign : " << f.getGradeToSign()
		<< ", grade to execute : " << f.getGradeToExec();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_sign = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!_sign)
		throw UnsignedException();
	if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
}


const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high !";
}
const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low !";
}
const char*	AForm::UnsignedException::what() const throw()
{
	return "Unsigned form !";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &	AForm::getName() const
{
	return _name;
}
bool				AForm::getSign() const
{
	return _sign;
}
int					AForm::getGradeToSign() const
{
	return _gradeToSign;
}
int					AForm::getGradeToExec() const
{
	return _gradeToExec;
}

/* ************************************************************************** */