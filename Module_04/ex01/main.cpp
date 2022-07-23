/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:26 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/23 19:39:14 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Dog *dog1 = new Dog();
	dog1->getBrain()->setIdea(42, "The answer !");
	Dog dog2 (*dog1);
	std::cout << dog1->getBrain() << " : " << &dog1->getBrain()->getIdea(42) << " : " << dog1->getBrain()->getIdea(42) << std::endl;
	std::cout << dog2.getBrain()  << " : " << &dog2.getBrain()->getIdea(42)  << " : " << dog2.getBrain()->getIdea(42) << std::endl;
	delete dog1;
	// std::cout << dog1->getBrain() << " : " << &dog1->getBrain()->getIdea(42) << " : " << dog1->getBrain()->getIdea(42) << std::endl;
	std::cout << dog2.getBrain()  << " : " << &dog2.getBrain()->getIdea(42)  << " : " << dog2.getBrain()->getIdea(42) << std::endl;


	const int N = 4;
	Animal *spa[N];

	for (int i = 0; i < N; i++)
	{
		if (i % 2)
			spa[i] = new Dog();
		else
			spa[i] = new Cat();
		spa[i]->makeSound();
	}

	for (int i = 0; i < N; i++)
	{
		delete spa[i];
	}

	return 0;
}