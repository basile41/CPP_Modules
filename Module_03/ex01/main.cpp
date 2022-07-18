/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:45:43 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/18 17:35:44 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	unnamed;
	ScavTrap	scavtrap("Scav");
	ScavTrap	scavtrap_bis(scavtrap);

	scavtrap.attack("a zombie");
	scavtrap.takeDamage(5);
	scavtrap.printInfos();
	scavtrap.beRepaired(1);
	scavtrap.printInfos();
	scavtrap.takeDamage(8);
	scavtrap.attack("a zombie");
	scavtrap.beRepaired(1);
	scavtrap.guardGate();
}
