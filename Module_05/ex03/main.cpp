/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:36:44 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/27 12:09:52 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Bureaucrat bureaucrat;
	std::cout << "Hello I'm " << bureaucrat << std::endl;
	bureaucrat.signForm(*rrf);
	bureaucrat.executeForm(*rrf);

	delete rrf;

	rrf = someRandomIntern.makeForm("not a form", "test");
}