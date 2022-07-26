/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:06:32 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/26 18:44:13 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
: AForm("robotomy request", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("robotomy request", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
: AForm("robotomy request", 72, 45), _target(src._target)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	AForm::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	operator<<(o, (const AForm&)i);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);

	srand(time(NULL));
	std::cout << "* Drilling noises ! *" << std::endl;
	if (std::rand() % 2)
		std::cout << executor.getName() << " has been successfully robotomized !" << std::endl;
	else
		std::cout << "Robotomy failed !" << std::endl;
		
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */