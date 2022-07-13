/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:23:31 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 17:28:50 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed")
{
	std::cout << _name << " has been created." << std::endl;
}

Zombie::Zombie( std::string name) : _name(name)
{
	std::cout << _name << " has been created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destroyed." << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name)
{
	_name = name;
}
