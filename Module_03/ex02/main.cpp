/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:45:43 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/18 18:02:13 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap	unnamed;
	ScavTrap	scavtrap("Scav");
	ScavTrap	scavtrap_bis(scavtrap);
	FragTrap	fragtrap("Frag");

	scavtrap.attack("a zombie");
	scavtrap.takeDamage(5);
	scavtrap.printInfos();
	scavtrap.beRepaired(1);
	scavtrap.printInfos();
	scavtrap.takeDamage(8);
	scavtrap.attack("a zombie");
	scavtrap.beRepaired(1);
	scavtrap.guardGate();

	fragtrap.attack("a zombie");
	fragtrap.takeDamage(5);
	fragtrap.printInfos();
	fragtrap.beRepaired(1);
	fragtrap.printInfos();
	fragtrap.takeDamage(8);
	fragtrap.attack("a zombie");
	fragtrap.beRepaired(1);
	fragtrap.highFivesGuys();
}
