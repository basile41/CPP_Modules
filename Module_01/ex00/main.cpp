/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:23:39 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 15:04:03 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zizou("Zizou");
	zizou.announce();
	Zombie *zerator = newZombie("Zerator");
	zerator->announce();
	randomChump("Zemmour");
	delete zerator;
}