/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:19:29 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 14:08:07 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors
Character::Character()
{
}

Character::Character(const Character &copy)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	*this = copy;
}

Character::Character(std::string name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
}


// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}


// Operators
Character & Character::operator=(const Character &assign)
{
	_name = assign._name;
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
		if (assign._inventory[i])
			_inventory[i] = assign._inventory[i]->clone();
	}
	return *this;
}


// Getters / Setters
std::string const & Character::getName() const
{
	return _name;
}

AMateria*			Character::getMateria(int idx) const
{
	if (idx >= 0 && idx < 4)
		return _inventory[idx];
	return 0;
}



// Methods
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		// std::cout << _name << " : ";
		_inventory[idx]->use(target);
	}
}
