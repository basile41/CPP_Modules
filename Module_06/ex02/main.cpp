/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:01:45 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/31 22:08:06 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Creating A object" << std::endl;
			return new A;
		case 1:
			std::cout << "Creating B object" << std::endl;
			return new B;
		case 2:
			std::cout << "Creating C object" << std::endl;
			return new C;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base tmp;
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception & e)
	{}
	try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception & e)
	{}
	try
	{
		tmp = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception & e)
	{}
}

int main()
{
	srand(time(NULL));
	Base *	base = generate();
	// Base *	base = NULL;

	identify(base);
	identify(*base);
}