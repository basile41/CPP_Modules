/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:11:50 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 18:32:42 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon( std::string type ) : _type(type)
{}

Weapon::~Weapon()
{}

const std::string &Weapon::getType( void ) const
{
	return _type;
}

void Weapon::setType( std::string type)
{
	_type = type;
}