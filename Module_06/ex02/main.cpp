/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:01:45 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/30 15:48:06 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0: return new A;
		case 1: return new B;
		case 2:	return new C;
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
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	srand(time(NULL));
	Base *	base = generate();

	identify(base);
	identify(*base);
}