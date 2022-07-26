/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:36:44 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/26 21:47:47 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{


	AForm *shrubbery = new ShrubberyCreationForm("garden");
	AForm *robotomy = new RobotomyRequestForm("Pinocchio");
	AForm *pardon = new PresidentialPardonForm("Bob");

	std::cout 	<< *shrubbery << std::endl
				<< *robotomy << std::endl
				<< *pardon << std::endl;

	Bureaucrat	bob("Bob", 138);
	std::cout << std::endl << "Hello I am " << bob << "." << std::endl;
	bob.signForm(*shrubbery);
	bob.executeForm(*shrubbery);
	bob.upgrade();
	bob.executeForm(*shrubbery);
	
	Bureaucrat manu("Manu", 1);
	std::cout << std::endl << "Hello I am " << manu << "." << std::endl;
	manu.executeForm(*robotomy);
	manu.executeForm(*pardon);

	

	delete shrubbery;
	delete robotomy;
	delete pardon;
}