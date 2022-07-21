/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:45:43 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 16:05:47 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d;	
	DiamondTrap d2(d);
	DiamondTrap	diamond("test");

	d.whoAmI();
	d2.whoAmI();
	diamond.whoAmI();

	diamond.attack("a zombie");
	diamond.takeDamage(10);
	diamond.beRepaired(5);
	diamond.printInfos();
}
