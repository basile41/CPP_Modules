/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:33:47 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 19:56:03 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack( void ) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
