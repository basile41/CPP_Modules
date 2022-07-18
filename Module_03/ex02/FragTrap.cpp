/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:46:47 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/18 18:10:40 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap()
{
	_name = "fragtrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "\e[0;33mDefault Constructor called (FragTrap)\e[0m" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called (FragTrap)\e[0m" << std::endl;
}
FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "\e[0;33mFields Constructor called (FragTrap)\e[0m" << std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called (FragTrap)\e[0m" << std::endl;
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_attackDamage = assign._attackDamage;
	return *this;
}

// Methods
void 	FragTrap::highFivesGuys(void) const
{
	std::cout << _name << " want to do a high fives !" << std::endl;
}
