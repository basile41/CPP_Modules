/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:23:39 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 17:27:59 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;

	Zombie zizou("Zizou");
	zizou.announce();

	Zombie *horde = zombieHorde(N, "Horde");
	for (int i = 0; i < N ; i++)
		horde[i].announce();
	delete[] horde;
}