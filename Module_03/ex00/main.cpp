/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:45:43 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/18 13:51:04 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	unnamed;
	ClapTrap	claptrap("claptrap");
	ClapTrap	claptrap_bis(claptrap);

	claptrap.attack("a zombie");
	claptrap.takeDamage(5);
	claptrap.printInfos();
	claptrap.beRepaired(1);
	claptrap.printInfos();
	claptrap.takeDamage(8);
	claptrap.attack("a zombie");
	claptrap.beRepaired(1);

}
