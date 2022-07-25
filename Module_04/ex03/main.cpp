/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:10:36 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 14:10:51 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"


int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		// return 0;
	}


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
	toto = _toto;
	return 0;
}