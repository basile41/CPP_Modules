/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:42:27 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/18 17:14:04 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
: _name("claptrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\e[0;33mDefault Constructor called (ClapTrap)\e[0m" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called (ClapTrap)\e[0m" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\e[0;33mFields Constructor called (ClapTrap)\e[0m" << std::endl;
}
ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
: _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "\e[0;33mFields Constructor called (ClapTrap)\e[0m" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called (ClapTrap)\e[0m" << std::endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	return *this;
}


// Getters / Setters
std::string	ClapTrap::getName() const
{
	return _name;
}
int			ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
int			ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
int			ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}


// Methods
void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		return ;
	if (_energyPoints >= 1)
	{
		std::cout	<< _name << " attacks " << target << ", causing "
					<< _attackDamage << " points of damage !" << std::endl;
		_energyPoints--;
	}
	else
		std::cout	<< _name << " tries to attack " << target
					<< " but don't have enough energy !" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
		return ;
	_hitPoints -= amount;
	if (_hitPoints <= 0)
	{
		std::cout << _name << " died !" << std::endl;
		_hitPoints = 0;
	}
	else
		std::cout << _name << " loses " << amount << " HP !" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
		return ;
	if (_energyPoints >= 1)
	{
		std::cout	<< _name << " repairs itself and restores "
					<< amount << " HP !" << std::endl;
		_energyPoints--;
		_hitPoints += amount;
	}
	else
		std::cout	<< _name << " tries to repair itself but don't have enough energy !" << std::endl;
	
}

void	ClapTrap::printInfos(void) const
{
	std::cout	<< _name << " : " << _hitPoints << " HP, " << _energyPoints << " EP, "
				<< _attackDamage << " AD" << std::endl;
}
