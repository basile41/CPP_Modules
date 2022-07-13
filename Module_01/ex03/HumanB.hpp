/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:40:27 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 19:56:01 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB();
		void setWeapon( Weapon &weapon );
		void attack( void  ) const;
	private:
		const std::string	_name;
		Weapon		 		*_weapon;
};

#endif
