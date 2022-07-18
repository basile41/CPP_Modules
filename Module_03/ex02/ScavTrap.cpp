/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:46:56 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/18 17:46:58 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap()
{
	_name = "scavtrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "\e[0;33mDefault Constructor called (ScavTrap)\e[0m" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called (ScavTrap)\e[0m" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "\e[0;33mFields Constructor called (ScavTrap)\e[0m" << std::endl;
}


// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called (ScavTrap)\e[0m" << std::endl;
}


// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_attackDamage = assign._attackDamage;
	return *this;
}

// Methods
void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		return ;
	if (_energyPoints >= 1)
	{
		std::cout	<< _name << " hits " << target << ", causing "
					<< _attackDamage << " points of damage !" << std::endl;
		_energyPoints--;
	}
	else
		std::cout	<< _name << " tries to attack " << target
					<< " but don't have enough energy !" << std::endl;
}

void 	ScavTrap::guardGate(void) const
{
	std::cout << _name << " enters Gate keeper mode !" << std::endl;
}