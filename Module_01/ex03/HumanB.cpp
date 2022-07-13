/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:15:26 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 20:02:30 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"


HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{
	
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}
void	HumanB::attack( void ) const
{
	std::string type;

	if (_weapon)
		type = _weapon->getType();
	else
		type = "hand";
	std::cout << _name << " attacks with their " << type << std::endl;
}
