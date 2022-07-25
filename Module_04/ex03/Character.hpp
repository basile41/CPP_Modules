/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:19:24 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 12:24:23 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		// Constructors
		Character(const Character &copy);
		Character(std::string name);
		
		// Destructor
		~Character();
		

		// Operators
		Character & operator=(const Character &assign);
		
		// Getters / Setters
		std::string const & getName() const;
		AMateria*			getMateria(int idx) const;

		// Methods
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
	private:
		Character();
		std::string	_name;
		AMateria*	_inventory[4];
		
};

#endif