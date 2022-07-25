/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:10:36 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 13:52:38 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"


int main()
{
	// Character	_bob("bob");
	// Character	toto("toto");
	// AMateria*	ice = new Ice();
	// AMateria*	cure = new Cure();
	
	// _bob.equip(ice);
	// _bob.equip(cure);
	// Character 	bob(_bob);
	// bob.use(0, toto);
	// bob.use(1, toto);
	// bob.use(2, toto);
	// _bob.unequip(0);
	// _bob.use(0, toto);
	// bob.use(0, toto);
	// _bob = bob;
	// _bob.use(0, toto);
	// bob.use(0, toto);
	// delete ice;

	MateriaSource source;
	source.learnMateria(new Ice());
	source.learnMateria(new Cure());

	Character bob("Bob");
	Character toto("Toto");
	std::cout << bob.getName() << " and " << toto.getName() << " created" << std::endl;
	toto.equip(source.createMateria("ice"));
	toto.equip(source.createMateria("cure"));
	toto.use(0, bob);
	toto.use(1, bob);
	Character _toto(toto);
	_toto.equip(toto.getMateria(0));
	toto.unequip(0);
	_toto.use(2, bob);
	return 0;
}