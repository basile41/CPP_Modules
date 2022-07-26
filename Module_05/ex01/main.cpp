/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:36:44 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/26 14:39:38 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form form00("form00", 42);
		std::cout << form00 << std::endl;
		Bureaucrat	bob("Bob", 43);
		std::cout << "Hello I am " << bob << "." << std::endl;
		try
		{
			bob.signForm(form00);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			bob.upgrade();
			bob.signForm(form00);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << form00 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}